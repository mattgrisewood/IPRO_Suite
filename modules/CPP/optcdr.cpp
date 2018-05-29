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

// Include the Molecule, Residue, and Atom classes
using MOLECULES::Atom;
using MOLECULES::Residue;
using MOLECULES::Molecule;

// Generate random positions for the antigens
vector<double> Antigen_positions(int size, double mean, double sd){
    // Use the mt19937 Mersenne twister engine for random number generation
    mt19937 eng(static_cast<unsigned long>(time(nullptr)));
    // Generate a distribution
    normal_distribution<double> dist(mean, sd);
    // Store the randomly generated vector 
    vector<double> vec(size);
    // Loop through the random positions
    for (int i=0; i<vec.size(); i++){
        // Store the random value
        vec[i] = dist(eng);
    }
    // Return the vector of random values
    return vec;
}

// Create the scoring function
int OptCDR_scoring(Molecule &cdr, Molecule &antigen){
    // This function calculates the VDW clash score between the CDR and the
    // antigen
    int score = 0;
}

// Start the main program
int main(){
    // Load the antigens. Prepare the antigens by opening the file and creating
    // the relevant variables
    vector<Atom> residue; 
    vector<Residue> molecule; 
    vector<Molecule> antigens;
    string line;
    // Open the antigen file
    ifstream in1("ANTIGEN.txt");
    // Read in the file
    getline(in1, line);

    // Get the antigen positions
    vector<double> vec = Antigen_positions(10, 100, 10);
    for (int i=0; i<vec.size(); i++){
        cout << vec[i] << endl;
    }    

    // End the program
    return 0;
}
