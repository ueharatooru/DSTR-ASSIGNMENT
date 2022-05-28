// DSTutorE Assignment.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
#include <array>
using namespace std;

int T = 0;

//這個是Double Linked List
struct Node {

//Tutor ID, Name, Date Joined, Date Terminated, Hourly Pay Rate, Phone, Address, 
// Tuition Center Code, Tuition Center Name, Subject Code, Subject Name and Rating.
//struct Tutorlist
//{
//    string ID, Name, Datejoin, Dateterminal, address, centercode, cantername, subjectcode, subjectname;
//    int hourpay, phone, rating;
//
//
//
//
//};

//這個是Linked List
class Node {
public:
    int value;
    Node* next;


};

string Tutor[100][10];




//這裏開始寫我們的action
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
    

    cout << "Done" << endl;

    int action;
    cout << "Choose your action: 1) add tutor, 2) Display all tutors: ";
    cin >> action;
    if (action == 1) {

        add_tutor();
    }
    if (action == 2) {
        display_tutor();
    }

};

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
    cout << "Choose your action: 1) add tutor, 2) Display all tutors, 3)Search tutor: ";
    cin >> action;
    if (action == 1) {

        add_tutor();
    }
    if (action == 2) {
        display_tutor();
    }
    if (action == 3) {
        search_tutor();
    }
}






void search_ID(string ID) {
    for (int i = 1; i < T; i++) {
        
    }



}









// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
