﻿#include "Header.h"

using namespace std;

void action_page() {
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

int main()
{
    cout << "Welcome Users" << endl;
    cout << "----------------------------------------------------" << endl;
    action_page();
}