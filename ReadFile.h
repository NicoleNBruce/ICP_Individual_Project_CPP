//
// Created by Nicole Nanka-Bruce on 11/22/2022.
//

#ifndef UNTITLED_READFILE_H
#define UNTITLED_READFILE_H

#endif //UNTITLED_READFILE_H
#pragma once

#include <iostream>
#include <fstream>
#include <vector>
#include <list>
#include <unordered_map>
#include <sstream>
#include "Airline.h"
#include "Airport.h"
#include "Routes.h"


using namespace std;

class ReadFile {
private:
    ifstream input;
    string token;
    string line;
    vector<string> data_list;

public:
    string inputfile;
    string airportFile;
    string routeFile;
    string airlineFile;
    string source;
    string destination;
    string goal_state;
    string init_state;


    vector<Routes> actions;
    vector<Airport> successors;

    unordered_map<string, list<Airport>> airports;
    unordered_map<string, vector<Routes>> routes;
    unordered_map<int, vector<Airline>> airlines;
    unordered_map<string, string> airportLocation;
    unordered_map<string, Airport> airportCodetoObject;

    ReadFile();
    ReadFile(string init_state);

    void readairportfile();
    void readroutefile();
    void readairlinefile();
    void readInputFile();
    void readFiles();




};
