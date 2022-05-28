#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
#include <array>
#include "tutorheader.h"


using namespace std;

int T = 0;

string Tutor[100][10];

void display_tutor() {
    for (int i = 0; i < T; i++) {
        for (int j = 0; j < 10; i++) {
            if (j == 10) {
                cout << Tutor[i][j] << endl;
            }
            cout << Tutor[i][j];
        }
    }

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