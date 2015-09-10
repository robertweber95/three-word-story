#include <iostream>
#include "story.h"
using namespace std;

void add_to_story(string &current_story) {
    string input1;
    string input2;
    string input3
    ;
    cout << "Add 3 words to the story: ";
    cin >> input1;
    cin >> input2;
    cin >> input3;

    current_story = current_story + input1 + " " + input2 + " " + input3 + " ";
}