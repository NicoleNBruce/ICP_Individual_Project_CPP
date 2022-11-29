//
// Created by Nicole Nanka-Bruce on 11/23/2022.
//

#include "Node.h"

Node::Node(string state) {this->state= state;}

Node::Node(string state, string parent, string noOfStops, string airlineCode){
    this->state = state;
    this->parent = parent;
    this->noOfStops = noOfStops;
    this->airlineCode = airlineCode;
}

const string &Node::getState() const {
    return state;
}

const string &Node::getParent() const {
    return parent;
}

const string &Node::getNoOfStops() const {
    return noOfStops;
}

const string &Node::getAirlineCode() const {
    return airlineCode;
}

bool Node::operator==(const Node &rhs) const {
    return state == rhs.state;
}

bool Node::operator<(const Node &rhs) const {
    return state < rhs.state;
}
