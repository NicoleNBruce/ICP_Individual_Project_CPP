//
// Created by Nicole Nanka-Bruce on 11/22/2022.
//

#include "ReadFile.h"
#include <list>


ReadFile::ReadFile() {
}

ReadFile::ReadFile(string input){
    this->inputfile = input;
}


/**
 * It reads the airport file and stores the data in a map of vectors of airport objects
 */
void ReadFile::readairportfile() {

    input.open( "airports.csv");
    if (input.fail()) {
        cerr << "Unable to open file " + airportFile << endl;
    }
    while (getline(input, line)) {
        data_list.clear();//making sure that the vector is clear for the next line to be added to it
        stringstream s(line);

        while (getline(s, token, ',')) {
            data_list.push_back(token);
        }
        if (data_list.size() == 14) {
            string ID = data_list[2] + ", " + data_list[3];
            string airportCode = data_list[4];

            //converting the first string in the list to an int
            stringstream to_int(data_list[0]);
            int a_id = 0;
            to_int >> a_id;

            Airport air(a_id, data_list[1], data_list[2], data_list[3], data_list[4], data_list[5], data_list[6], data_list[7], data_list[8], data_list[9], data_list[10], data_list[11], data_list[12], data_list[13]);

            if (airports.count(ID)) {
                auto it_value = airports.find(ID);
                it_value->second.push_back(air); //appending to the vector corresponding to the id
            }
            else {
                list<Airport> air_holder;
                air_holder.push_back(air);
                airports.insert({ ID, air_holder });
            }

            airportLocation.insert({ airportCode, ID });
            airportCodetoObject.insert({ airportCode, air });


        }
    }
    input.close();
}

/**
 * It reads the routes.csv file and stores the data in a map of vectors of Routes objects
 */
void ReadFile::readroutefile() {
    input.open("routes.csv");//add error handling
    if (input.fail()) {
        cerr << "Unable to open file " + routeFile << endl;
    }

    while (getline(input, line)) {
        data_list.clear();//making sure that the vector is clear for the next line to be added to it
        stringstream s(line);

        while (getline(s, token, ',')) {
            data_list.push_back(token);

            if (data_list.size() == 9) {
                Routes route(data_list[0], data_list[1], data_list[2], data_list[3], data_list[4], data_list[5], data_list[6], data_list[7], data_list[8]);
                string ID = data_list[2];

                if (routes.count(data_list[2])) {
                    auto it_value = routes.find(ID);
                    it_value->second.push_back(route); //appending to the vector corresponding to the id
                }
                else {
                    vector<Routes> route_holder;
                    route_holder.push_back(route);
                    routes.insert({ ID, route_holder });
                }

            }
        }
    }
    input.close();

}

/**
 * This function reads the airline file and stores the data in a map of vectors of airline objects
 */
void ReadFile::readairlinefile() {
    input.open( "airlines.csv");//add error handling
    if (input.fail()) {
        cerr << "Unable to open file " + airlineFile << endl;
    }
    while (getline(input, line)) {
        data_list.clear();//making sure that the vector is clear for the next line to be added to it
        stringstream s(line);

        while (getline(s, token, ',')) {
            data_list.push_back(token);

            if (data_list.size() == 8) {
                //converting the first string in the list to an int
                stringstream to_int(data_list[0]);
                int al_id = 0;
                to_int >> al_id;

                Airline aline(al_id, data_list[1], data_list[2], data_list[3], data_list[4], data_list[5], data_list[6], data_list[7]);

                if (airlines.count(al_id)) {
                    auto it_value = airlines.find(al_id);
                    it_value->second.push_back(aline); //appending to the vector corresponding to the id
                }
                else {
                    vector<Airline> aline_holder;
                    aline_holder.push_back(aline);
                    airlines.insert({ al_id, aline_holder });
                }

            }
        }
    }
    input.close();

}


/**
 * This function reads the input file and stores the source and destination strings in the source and destination variables
 */
void ReadFile::readInputFile() {
    input.open(inputfile);
    if (input.fail()) {
        cerr << "Unable to open file " + inputfile << endl;
    }

    // as in, if the city or country is not in your map, it should tell the user that its not a valid location
    //also, i like your keyboard. bery nice keys. good travel. 8.5/10
    string srcline;
    string destline;

    //using getline to get the source location (city and country) as specified in the input file
    getline(input, srcline);
    stringstream s(srcline);
    string temp;
    srcline = "";
    while (getline(s, temp, '\n')) {
        srcline = srcline + temp;
    }

    //using getline to get the source location (city and country) as specified in the input file
    getline(input, destline);
    stringstream str(destline);
    string temp2;
    destline = "";
    while (getline(str, temp2, '\n')) {
        destline = destline + temp2;
    }

    source = srcline;
    destination = destline;

}

/**
 * This function reads the airport, route, airline, and input files.
 */
void ReadFile::readFiles() {
    readairportfile();
    readroutefile();
    readairlinefile();
    readInputFile();
}

