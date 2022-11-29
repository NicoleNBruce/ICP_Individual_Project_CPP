# ICP_Individual_Project_CPP
This program takes two locations in the world and finds the route between the two of them with the least amount of flights. It uses three data files from https://openflights.org/data.html - the airports, routes and airlines csv files. It makes use of seven classes: Airport class - This class creates an Airport object Airlines class- This class creates an Airlines object Routes class- This class creates a Routes object

Node class - The Node class initializes a node object with a string state, parent, number of flights and airline code. 

ReadFile class - The ReadFile class essentially reads from each of the data files and assigns the values to respective hashmaps to allow easier accessing of the objects. It also has a method to read the input file and it stores the data in the file into source and destination String variables to be further used by the RouteFinding class as starting and destination states

RouteFinding class - The RouteFinding class implements a breadth first algorithm and returns the solution path with the help of a solution path function also defined in it. It also has a method which uses the solution path returned by the breadth first search method to write the path results to a file. 

Helper.cpp/h - It contains a bunch of helper functions

main.cpp - The program is run from this class. Here, the path to the input file to be read from is passed into the program.

To run the program, you must have C++ 14 first, then download the project and run main.cpp. If you want to try other sources and destinations, create a txt file with the city and country (separated by a space) of both the source and destination airports, and name it in the format "sourcecity-destinationcity".txt. An example input file named 'accra-winnipeg.txt' is in the folder and can serve as a template. Then, you must pass the input file name into the RouteFinding object declaration in main.cpp, i.e. “RouteFinding find("accra-winnipeg.txt");”.

NB: Make sure that the location you type in the input file is separated by a comma and a space, e.g., "Accra, Ghana" and not "Accra,Ghana".
