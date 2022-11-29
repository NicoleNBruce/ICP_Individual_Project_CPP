//
// Created by Nicole Nanka-Bruce on 11/22/2022.
//

#include "Airline.h"

/**
 * This function is a constructor for the Airline class
 *
 * @param airlineID Unique OpenFlights identifier for this airline.
 * @param name Name of the airline.
 * @param alias alternate name for the airline
 * @param iataCode The IATA code for the airline.
 * @param icaoCode The ICAO code is a four-letter code assigned by the International Civil Aviation Organization (ICAO) to
 * the world's airlines.
 * @param callsign The callsign of the airline.
 * @param country The country the airline is based in.
 * @param active "Y" if the airline is or has until recently been operational, "N" if it is defunct. This field is not
 * reliable: in particular, major airlines that stopped flying long ago, but have not had their IATA code reassigned (eg.
 * Ansett/AN), will incorrectly show
 */
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

/**
 * The function returns a string of the Routes details
 */
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
