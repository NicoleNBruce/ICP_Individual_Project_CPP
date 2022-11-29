//
// Created by Nicole Nanka-Bruce on 11/22/2022.
//

#ifndef UNTITLED_AIRLINE_H
#define UNTITLED_AIRLINE_H



#include <string>
using namespace std;


class Airline {
private:
    int airlineID;
    string name;
    string alias;
    string country;
    string iata_code;
    string icao_code;
    string callsign;
    string active;
public:
    Airline(int airlineID, string name, string alias, string iataCode, string icaoCode, string callsign, string country, string active);
    string toString();

};


#endif //UNTITLED_AIRLINE_H
