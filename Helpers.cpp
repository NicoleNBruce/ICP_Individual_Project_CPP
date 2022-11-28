//
// Created by Nicole Nanka-Bruce on 11/28/2022.
//
#include "Helpers.h"


/* function to check if list contains a particular element*/
bool listContains(list<Node> & listOfElements, const Node & element)
{
    // Find the iterator if the element is in list
    auto it = find(listOfElements.begin(), listOfElements.end(), element);
    //return if iterator points to end or not. It points to end then it means element
    // does not exist in list
    return it != listOfElements.end();
}

/* function to check if deque contains a particular element*/
bool dequeContains(deque<Node> q, const Node & element){
    auto it = find(q.begin(), q.end(), element);
    return it != q.end();
}

string intToStr(int num){
    stringstream numStream;
    string num_str;
    numStream<<num;
    numStream >>num_str;
    return  num_str;
}