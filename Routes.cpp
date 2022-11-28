//
// Created by anoth on 11/22/2022.
//
#include "Routes.h"

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
