//
// Created by anoth on 11/23/2022.
//

#ifndef INDIV_CPP_NODE_H
#define INDIV_CPP_NODE_H


#include <deque>
#include "Airport.h"
#include "Routes.h"
#include "ReadFile.h"

class Node {
private:
    string state;
    string parent;
    string noOfStops;
    string airlineCode;

public:
    Node(string state);
    Node(string state, string parent, string noOfStops, string airlineCode);
    deque<Node> act_list;
    const string &getState() const;

    const string &getParent() const;

    const string &getNoOfStops() const;

    const string &getAirlineCode() const;

    bool operator==(const Node &rhs) const;

    bool operator<(const Node &rhs) const;

    bool operator>(const Node &rhs) const;

    bool operator<=(const Node &rhs) const;

    bool operator>=(const Node &rhs) const;

};
#endif //INDIV_CPP_NODE_H



