//
// Created by Nicole Nanka-Bruce on 11/22/2022.
//

#ifndef UNTITLED_ROUTEFINDING_H
#define UNTITLED_ROUTEFINDING_H



#include "Airport.h"
#include "ReadFile.h"
#include "Node.h"
#include "Helpers.h"

class RouteFinding{
private:
    string inputFile;
    list<Node> explored;
    bool goal_test(string state);
    void action(string id);
    ReadFile read;
public:
    deque<Node> pathlist;
    vector<Routes> actions;

    RouteFinding(string);
    deque<Node> breadthfirstsearch();
    deque<Node> solutionpath(Node node1);
    void writeFile(deque<Node> pathlist);
    void run();
};
#endif //UNTITLED_ROUTEFINDING_H
