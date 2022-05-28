#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
#include <array>
#include "tutorheader.h"

using namespace std;


int main()
{
    cout << "Welcome Users" << endl;
    cout << "----------------------------------------------------" << endl;
    int action;
    cout << "Choose your action: 1) add tutor, 2) Display all tutors: ";
    cin >> action;
    if (action == 1) {

        add_tutor();
    }
    if (action == 2) {
        display_tutor();
    }
}