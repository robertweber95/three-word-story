#include <iostream>
#include "story.h"
using namespace std;

void add_to_story(string &current_story) { // pass by reference
    string input1; // word 1
    string input2; // word 2
    string input3; // word 3
    
    cout << "Add 3 words to the story: "; // prompt user for 3 words
    cin >> input1; // assign words to resepctive variables
    cin >> input2;
    cin >> input3;

    // concatenate words to the current story
    current_story = current_story + input1 + " " + input2 + " " + input3 + " ";
}