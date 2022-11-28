//
// Created by anoth on 11/26/2022.
//

#ifndef UNTITLED_ROUTES_H
#define UNTITLED_ROUTES_H

#endif //UNTITLED_ROUTES_H
#pragma once
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
    //hashmap of string and list of string called routes
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




