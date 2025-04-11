/******************************************************************************
# Author:           Ari P.
# Assignment:       Assignment 2
# Date:             April 11, 2025
# Description:      This program will calculate the calory count and number of 
                    servings eaten for a given amount of Oreos consumed.
# Input:            cookiesEaten (int)
# Output:           servingsEaten (double), caloriesEaten (double)
# Sources:          Assignment 2 specifications, assignment 2 sample
#*****************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

// Declare and initialize variables for serving size and the number of calories
// per serving.
const int SERVING_SIZE = 5;
const int SERVING_CALORIES = 160;

int main () {
    // Declare variables for cookies, servings, and calories consumed
    int cookiesEaten = 0;
    double servingsEaten = 0.0;
    double caloriesEaten = 0.0;

    // Set floating point precision to 1 decimal place for output
    cout << fixed << setprecision(1);

    // Print a welcome message
    cout << "Welcome to the Oreo Calculator!" << endl << endl;

    // Prompt the user for the number of cookies eaten
    cout << "Enter the number of Oreos eaten: ";
    cin >> cookiesEaten;
    cout << endl;

    // Calculate the number of servings and calories consumed
    servingsEaten = static_cast<double>(cookiesEaten) / SERVING_SIZE;
    caloriesEaten = servingsEaten * SERVING_CALORIES;

    // Print the results
    cout << cookiesEaten << " Oreos equals " << servingsEaten << " servings!" \
<< endl;
    cout << "You consumed " << caloriesEaten << " calories." << endl << endl;

    // Print a goodbye message
    cout << "Keep eating Oreos!";
    return 0;
}
