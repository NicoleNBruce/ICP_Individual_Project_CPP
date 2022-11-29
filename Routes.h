//
// Created by Nicole Nanka-Bruce on 11/22/2022.
//

#ifndef UNTITLED_ROUTES_H
#define UNTITLED_ROUTES_H


#include <string>

using namespace std;

class Routes {
private:
    string srcCode;
    string airlineCode;
    string airlineID;
    string srcID;
    string destCode;
    string destID;
    string codeshare;
    string stops;
    string equipment;
public:

    Routes(string airlineCode, string airlineID, string srcCode, string srcID, string destCode, string destID, string codeshare, string stops, string equipment);

    string getAirlineCode();

    string getAirlineID();

    string getSrcCode();

    string getSrcID();

    string getDestCode();

    string getDestID();

    string getStops();

    string toString();

};


#endif //UNTITLED_ROUTES_H

