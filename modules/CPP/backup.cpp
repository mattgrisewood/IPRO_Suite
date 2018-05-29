/* Written in 2014 by Matthew Grisewood of the Costas Maranas Lab in the
 * Chemical Engineering Department of the Pennsylvania State University
 
 * This file generates random movements for the antigen(s) and scores their
 * interactions with the canonical structures */

// Include the needed C++ files
# include <iostream>
# include <fstream>
# include <sstream>
# include <vector>
# include <string>
# include <time.h>
# include <stdlib.h>
# include <random>
// Include the MOLECULES header file
# include "MOLECULES.h"

// Use the standard namespace
using namespace std;

// Generate random positions for the antigens
vector<double> 

// Create the scoring function
int OPTCDR_SCORING(Molecule &cdr, Molecule &antigen){
    // This function calculates the VDW clash score between the CDR and the
    // antigen
    int score = 0;
}

// Start the main program
int main(){
    // Include the Molecule, Residue, and Atom classes
    using MOLECULES::Molecule; using MOLECULES::Residue; using MOLECULES::Atom;

    // Generate random movements for the antigens
    // Import the number of random positions to be considered
    int size = 10;
    // Import the average antigen position to be used
    double mean = 100.0;
    // Import the standard deviation for the antigen position
    double sd = 1.0;
    // Use the mt19937 Mersenne twister engine for random number generation
    mt19937 eng(static_cast<unsigned long>(time(nullptr)));
    // Generate a distribution
    normal_distribution<double> dist(100.0, 1.0);
    // Store the randomly generated vector 
    vector<double> vec(size);
    // Loop through the random positions
    for (int i=0; i<vec.size(); i++){
        // Store the random value
        vec[i] = dist(eng);
    }

    // End the program
    return 0;
}
