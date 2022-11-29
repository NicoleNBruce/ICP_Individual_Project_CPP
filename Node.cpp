//
// Created by Nicole Nanka-Bruce on 11/23/2022.
//

#include "Node.h"

/**
 * This function is a constructor for the Node class. It takes a string as an argument and sets the state of the node to
 * that string.
 *
 * @param state the state of the node
 */
Node::Node(string state) {this->state= state;}

/**
 * This function is a constructor for the Node class
 *
 * @param state The state of the node.
 * @param parent The parent node of the current node.
 * @param noOfStops Number of stops from the source to the current node
 * @param airlineCode The airline code of the airline that flies from the parent state to the current state.
 */
Node::Node(string state, string parent, string noOfStops, string airlineCode){
    this->state = state;
    this->parent = parent;
    this->noOfStops = noOfStops;
    this->airlineCode = airlineCode;
}

/**
 * Returns the state of the node.
 *
 * @return The state of the node.
 */
const string &Node::getState() const {
    return state;
}

/**
 *
 * @return The parent of the node.
 */
const string &Node::getParent() const {
    return parent;
}

/**
 *
 * @return The number of stops.
 */
const string &Node::getNoOfStops() const {
    return noOfStops;
}

const string &Node::getAirlineCode() const {
/**
 *
 * @return The airline code of the node.
 */
    return airlineCode;
}


/**
 *This is an operator overload for the == operator.
 *It compares the state of the current node to the state of the node passed as parameter.
 * @return A boolean value.
 */
bool Node::operator==(const Node &rhs) const {
    return state == rhs.state;
}

/**
 *This is an operator overload for the < operator.
 *It compares the state of the current node to the state of the node passed as parameter.
 * @return A boolean value.
 */
bool Node::operator<(const Node &rhs) const {
    return state < rhs.state;
}
