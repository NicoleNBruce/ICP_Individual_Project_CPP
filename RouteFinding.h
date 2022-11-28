//
// Created by anoth on 11/26/2022.
//

#ifndef UNTITLED_ROUTEFINDING_H
#define UNTITLED_ROUTEFINDING_H

#endif //UNTITLED_ROUTEFINDING_H
#pragma once

#include "Airport.h"
#include "ReadFile.h"
#include "Node.h"
#include "Helpers.h"

class RouteFinding{
private:

//    ReadFile read;
    string inputFile;
    list<Node> explored;
    bool goal_test(string state);
    void action(string id);
    ReadFile read;
public:
    deque<Node> pathlist;
    vector<Routes> actions;
    unordered_map<string, Airport> airportCodetoAirport;
    unordered_map<string, string> airportLocation ;
    unordered_map<string, list<Airport>> airports ;

    RouteFinding(string);
    deque<Node> breadthfirstsearch();
    deque<Node> solutionpath(Node node1);
    void writeFile(deque<Node> pathlist);
};
