//
// Created by Nicole Nanka-Bruce on 11/22/2022.
//

#ifndef UNTITLED_AIRPORT_H
#define UNTITLED_AIRPORT_H


#include <string>
#include <vector>

using namespace std;

class Airport :  public basic_string<char> {
private:
    int id;
    string airport_name;
    string city;
    string airport_country;
    string airport_iata_code;
    string airport_icao_code;
    string latitude;
    string longitude;
    string altitude;
    string timezone;
    string dst;
    string tz;
    string type;
    string data_src;
    string location;
public:

    Airport(int id, string name, string city, string country, string iata_code, string icao_code, string latitude, string longitude, string altitude, string timezone, string dst, string tz, string type, string data_src);

    int getid();

    string getname();

    string getcity();

    string getcountry();

    string getiata_code();

    string geticao_code();

    string getlatitude();

    string getlongitude();

    string getaltitude();

    string getlocation();

    string tostring();
};

#endif //UNTITLED_AIRPORT_H