//
// Created by anoth on 11/22/2022.
//

#include "Airline.h"

Airline::Airline(int airlineID, string name, string alias, string iataCode, string icaoCode, string callsign, string country, string active) {
    this->airlineID = airlineID;
    this->name = name;
    this->alias = alias;
    this->iata_code = iataCode;
    this->icao_code = icaoCode;
    this->callsign = callsign;
    this->country = country;
    this->active = active;

}

string Airline::toString() {
    return   name + ',' +
             alias + ',' +
             iata_code + ',' +
             icao_code + ',' +
             callsign + ',' +
             country + ',' +
             active
            ;
}
