//
// Created by anoth on 11/22/2022.
//

#include "Airport.h"


Airport::Airport(int id, string name, string city, string country, string iata_code, string icao_code, string latitude, string longitude, string altitude, string timezone, string dst, string tz, string type, string data_src) {
    this->id = id;
    this->airport_name = name;
    this->city = city;
    this->airport_country = country;
    this->airport_iata_code = iata_code;
    this->airport_icao_code = icao_code;
    this->latitude = latitude;
    this->longitude = longitude;
    this->altitude = altitude;
    this->timezone = timezone;
    this->dst = dst;
    this->tz = tz;
    this->type = type;
    this->data_src = data_src;

};

int Airport::getid() { return this->id; };

string Airport::getname() {
    return this->airport_name;
}

string Airport::getcity() {
    return this->city;
}

string Airport::getcountry() {
    return this->airport_country;
}

string Airport::getiata_code() {
    return this->airport_iata_code;
}

string Airport::geticao_code() {
    return this->airport_icao_code;
}

string Airport::getlatitude() {
    return this->latitude;
}

string Airport::getlongitude() {
    return this->longitude;
}

string Airport::getaltitude() {
    return this->altitude;
}

string Airport::getlocation() {
    location = city + airport_country;
    return this->location;
}


string Airport::tostring() {
    return this->airport_name + ',' +
           this->airport_iata_code + ',' +
           this->airport_icao_code + ',' +
           this->latitude + ',' +
           this->longitude + ',' +
           this->altitude + ',' +
           this->timezone + ',' +
           this->dst + ',' +
           this->tz + ',' +
           this->type + ',' +
           this->data_src
            ;
}