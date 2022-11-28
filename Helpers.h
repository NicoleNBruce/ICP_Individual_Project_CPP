//
// Created by Nicole Nanka-Bruce on 11/28/2022.
//

using namespace std;
#ifndef INDIV_CPP_HELPERS_H
#define INDIV_CPP_HELPERS_H

#include <list>
#include <deque>
#include <string>
#include <sstream>
#include <algorithm>
#include "Node.h"


/* function to check if list contains a particular element*/
bool listContains(list<Node> & listOfElements, const Node & element);

/* function to check if deque contains a particular element*/
bool dequeContains(deque<Node> q, const Node & element);

string intToStr(int num);


#endif //INDIV_CPP_HELPERS_H