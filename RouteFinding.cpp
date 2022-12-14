//
// Created by Nicole Nanka-Bruce on 11/22/2022.
//
#include "RouteFinding.h"
#include "Node.h"
#include <queue>
#include "Helpers.h"


/**
 * This function is the constructor for the RouteFinding class. It takes in a string input, which is the name of the input
 * file. It then creates a ReadFile object called read, which is used to read the input file.
 *
 * @param input The name of the input file.
 */
RouteFinding::RouteFinding(string input) {
    this->inputFile = input;
    this->read = ReadFile(input);
    read.readFiles();
}

/**
 * If the current state is the destination, return true
 *
 * @param state the current state of the search
 *
 * @return a boolean value.
 */
bool RouteFinding::goal_test(string state) {
    if(state == read.destination){
        return true;
    }
}

/**
 * It takes in an iata code, and if the code is in the routes map, it sets the actions list to the route details in the
 * routes map. It then pushes the airport object associated with the iata code into the successors vector
 *
 * @param id The id of the airport you want to go to.
 */
void RouteFinding::action(string id) {
    if (read.routes.count(id)) {
        auto it_route = read.routes.find(id);
        read.actions = it_route->second;
    }
    read.successors.push_back(read.airportCodetoObject.find(id)->second);
}


/**
 * This function takes in a node and returns a deque of nodes that is the solution path
 *
 * @param node1 The node that is the goal state
 *
 * @return a deque of nodes.
 */
deque<Node> RouteFinding::solutionpath(Node node1) {
    Node node = node1;
    string parent = node.getParent();
    while(node.getParent()!=""){
        for(auto i_node: explored){
            if(i_node.getState() == node.getParent()){
                pathlist.push_front(node);
                node = i_node;
            }
        }
    }
    writeFile(pathlist);
    return pathlist;

}


/**
 * This function writes the output to a file
 *
 * @param routes a deque of Node objects that represent the flights you have found.
 */
void RouteFinding::writeFile(deque<Node>routes){
    ofstream outputStream;
    int totstops = 0;
    int numbering = 0;
    string numbering_str;

    //getting the name of the input file and using it to create the name of its output file
    string source;
    stringstream  input(read.inputfile);
    getline(input, source, '.');
    string outputFile = source + "_output.txt" ;

    outputStream.open(outputFile);

    if (input.fail()) {
        cerr << "Unable to open file " + outputFile << endl;
    }

    for(Node node: routes){
        totstops += stoi(node.getNoOfStops());
        numbering+=1;
        numbering_str = intToStr(numbering);
        outputStream<<numbering_str + ". " + node.getAirlineCode()+ " from "+ node.getParent() + " to "+ node.getState() + " "+ node.getNoOfStops() + " stops"<<endl;
    }
    //writing additional information to the file
    string noOfFlights = "Total number of flights: " + numbering_str;
    string stops = "Total additional stops: " + totstops;
    outputStream<<"Total number of flights: " + numbering_str<<endl;
    outputStream<<"Total additional stops: " + intToStr(totstops)<<endl;
    outputStream<<"Optimality criteria: flights"<<endl;

    outputStream.close();

}
/**
    * The function implements the breadth first algorithm and
    * returns a deque of nodes which contains the path from the source to the destination
    *
    * @return a deque of nodes.
    */

deque<Node> RouteFinding::breadthfirstsearch(){
    deque<Node> frontier;
    cout<<"BFS running..."<<endl;

    if((read.airports.find(read.source)->first) == read.source){
        list<Airport> airportlist = read.airports.find(read.source)->second;

        for(Airport airport:airportlist) {
            string state = airport.getcity() + ", " + airport.getcountry();
            string code = airport.getiata_code();
            Node node(code, "", "", "");
            if (goal_test(state)) {
                cout << "You're already at the destination!" << endl;
            }
            frontier.push_back(node);
        }
    }
    while(frontier.size() >0){
        Node node = frontier.front();
        frontier.pop_front();
        //ensuring that there are no duplicates in the explored list
        if(!listContains(explored, node) ){
            explored.push_back(node);
        }
        action(node.getState());
        actions = read.actions;

        for(Routes route: actions){
            if((read.airportCodetoObject.find(route.getDestCode()) == read.airportCodetoObject.end())){
                continue;
            }
            Node child_node(route.getDestCode(), node.getState(), route.getStops(),route.getAirlineCode() );

            if(!listContains(explored, child_node) && !(dequeContains(frontier, child_node))){
                if(goal_test(read.airportLocation.find(child_node.getState())->second)){
                    cout<<"Found it!"<<endl;
                    return solutionpath(child_node);
                }
                frontier.push_back(child_node);
            }
        }
    }
    deque<Node> empty_deque;
    cout<<"No path found.";
    return empty_deque;
}

/**
 * It checks to see if the source and destination are valid airports, and if they are, it runs the breadthfirstsearch
 * function
 *
 */
void RouteFinding::run(){
    //input validation: checking if the city and country exist in the unordered map of the airport details
    if((read.airports.find(read.source)==read.airports.end()) || (read.airports.find(read.destination)==read.airports.end())){
        cerr << "That is not a valid location. Check your input again." << endl;
        return;
    }
    else {
        breadthfirstsearch();
    }
}