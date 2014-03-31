/*
 -------------------------------------------------------------------------------
 main.cpp
 Array Project
 
 This script is used for testing the Arduino Array class.
 
 Initially created by Rowland O'Flaherty on 7/13/10.
 -------------------------------------------------------------------------------
 */

//------------------------------------------------------------------------------
// Includes
//------------------------------------------------------------------------------
#include <iostream>
#include <ioArray.h>

using namespace std;

//------------------------------------------------------------------------------
// Function Declarations
//------------------------------------------------------------------------------


//------------------------------------------------------------------------------
// Global Varible Declarations
//------------------------------------------------------------------------------


//------------------------------------------------------------------------------
// Main Function
//------------------------------------------------------------------------------
int main (int argc, char * const argv[]) {
    // Create
	ioArray<int> V(7);
	V[0] = 5;
	V[1] = 3;
	V[2] = -3;
	V[3] = 6;
	V[4] = 3;
	V[5] = 4;
	V[6] = -5;
    
    cout << "Here is the initial array:" << endl;
    cout << V << endl;
	
    // Sort
	V.sort();
	V.remove(0);
	V.remove(V.length()-1);
	
    cout << "Here it is sorted:" << endl;
	cout << V << endl;
	
    // Stats
    cout << "Here are the stats:" << endl;
	cout << "Length: " << V.length() << endl;
	cout << "Min: " << V.minimum() << endl;
	cout << "Max: " << V.maximum() << endl;
	cout << "Sum: " << V.sum() << endl;
	cout << "Mean: " << V.mean() << endl;
	cout << "Median: " << V.median() << endl << endl;
	
    // New array
	ioArray<int> A(20);
	A[19] = 10;
    
    cout << "Here is a new array:" << endl;
	cout << "Array length: " << A.length() << endl;
	cout << A << endl;
	
    // Copy array
	A = V;
    
    cout << "Here is the new after the old one was copied to it:" << cout;
	cout << "Array length: " << A.length() << endl;
	cout << A << endl;

    return 0;
}


//------------------------------------------------------------------------------
// Other Functions
//------------------------------------------------------------------------------