//
// Created by Nicole Nanka-Bruce on 11/22/2022.
//
#include "Routes.h"

/**
 * This function is a constructor for the Routes class
 *
 * @param airlineCode The IATA code of the airline.
 * @param airlineID Unique OpenFlights identifier for airline (see Airline).
 * @param srcCode The IATA code of the source airport
 * @param srcID The IATA code of the source airport
 * @param destCode The IATA code of the destination airport.
 * @param destID The IATA code of the destination airport.
 * @param codeshare "Y" = codeshare; "N" = not a codeshare; "" = unknown
 * @param stops number of stops
 * @param equipment The equipment used on this particular flight segment.
 */
Routes::Routes(string airlineCode, string airlineID, string srcCode, string srcID, string destCode, string destID, string codeshare, string stops, string equipment) {
    this->srcCode = srcCode;
    this->airlineCode = airlineCode;
    this->airlineID = airlineID;
    this->srcID = srcID;
    this->destCode = destCode;
    this->destID = destID;
    this->codeshare = codeshare;
    this->stops = stops;
    this->equipment = equipment;
};

string Routes::getAirlineCode() {
    return airlineCode;
}

string Routes::getAirlineID() {
    return airlineID;
}

string Routes::getSrcCode() {
    return srcCode;
}

string Routes::getSrcID() {
    return srcID;
}

string Routes::getDestCode() {
    return destCode;
}

string Routes::getDestID() {
    return destID;
}

string Routes::getStops() {
    return stops;
}

/**
 * The function returns a string of the Routes details
 *
 * @return The airline code, airline ID, source ID, destination code, destination ID, codeshare, stops, and equipment.
 */
string Routes::toString() {
    return '[' + airlineCode + ',' +
           airlineID + ',' +
           srcID + ',' +
           destCode + ',' +
           destID + ',' +
           codeshare + ',' +
           stops + ',' +
           equipment + ',' + ']';
}
