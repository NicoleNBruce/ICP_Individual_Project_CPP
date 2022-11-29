//
// Created by Nicole Nanka-Bruce on 11/28/2022.
//
#include "Helpers.h"


/** function to check if list contains a particular element*/
bool listContains(list<Node> & listOfElements, const Node & element)
{
    // Find the iterator for the element if it is in the list
    auto it_node = find(listOfElements.begin(), listOfElements.end(), element);
    //return if iterator points to end or not. If it points to the end then it means the element does not exist in the list
    return it_node != listOfElements.end();
}

/** function to check if deque contains a particular element*/
bool dequeContains(deque<Node> q, const Node & element){
    auto it_node = find(q.begin(), q.end(), element);
    return it_node != q.end();
}

/**
 * It converts an integer to a string
 *
 * @param num The number to be converted to a string.
 *
 * @return the string representation of the integer passed in.
 */
string intToStr(int num){
    stringstream numStream;
    string num_str;
    numStream<<num;
    numStream >>num_str;
    return  num_str;
}