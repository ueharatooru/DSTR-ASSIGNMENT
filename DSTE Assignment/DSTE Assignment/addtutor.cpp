#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
#include <array>
#include "tutorheader.h"

using namespace std;
int T = 0;

string Tutor[100][10];

void add_tutor() {

    while (true) {
        cout << "Enter your ID: ";
        cin >> Tutor[T][0];
        cout << "Enter your Name: ";
        cin >> Tutor[T][1];
        cout << "Enter your date join(yyyy/mm/dd): ";
        cin >> Tutor[T][2];
        cout << "Enter your date terminal(yyyy/mm/dd): ";
        cin >> Tutor[T][3];
        cout << "Enter your hourly paid: ";
        cin >> Tutor[T][4];
        cout << "Enter your phone: ";
        cin >> Tutor[T][5];
        cout << "Enter your address: ";
        cin >> Tutor[T][6];
        cout << "Enter your tuition code: ";
        cin >> Tutor[T][7];
        cout << "Enter your tuition center name: ";
        cin >> Tutor[T][8];
        cout << "Enter your subject code: ";
        cin >> Tutor[T][9];
        cout << "Enter your subject name: ";
        cin >> Tutor[T][10];


        T++;

        char ac;
        cout << "Continue add?( Y or N ): ";
        cin >> ac;
        if (ac == 'Y') {
            continue;
        }
        else if (ac == 'N') { break; }
        else { cout << "Only Y or N" << endl; continue; }
    }
}