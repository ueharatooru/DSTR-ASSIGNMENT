// DSTutorE Assignment.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
#include <array>
using namespace std;

int count = 0;
string Tutor[11][11];

//這個是Double Linked List
class Node {
public:
    array tutor;
    Node* next;
    Node* previous;

};






//這裏開始寫我們的action
void add_tutor() {

    cout << "Enter your ID: ";
    cin >> Tutor[count][0];
    cout << "Enter your Name: ";
    cin >> Tutor[0][1];
    cout << "Enter your date join(yyyy/mm/dd): ";
    cin >> Tutor[0][2];
    cout << "Enter your date terminal(yyyy/mm/dd): ";
    cin >> Tutor[0][3];
    cout << "Enter your hourly paid: ";
    cin >> Tutor[0][4];
    cout << "Enter your phone: ";
    cin >> Tutor[0][5];
    cout << "Enter your address: ";
    cin >> Tutor[0][6];
    cout << "Enter your tuition code: ";
    cin >> Tutor[0][7];
    cout << "Enter your tuition center name: ";
    cin >> Tutor[0][8];
    cout << "Enter your subject code: ";
    cin >> Tutor[0][9];
    cout << "Enter your subject name: ";
    cin >> Tutor[0][10];
    cout << "Enter your Rating: ";
    cin >> Tutor[0][11];







};


void display_tutor() {
    fstream file;
    file.open("Tutor.txt", ios::in);
    string line;
    if (file.is_open()) {
        while (getline(file, line)) {
            cout << "\n" << line << endl;
        }
        file.close();
    }

}


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

void search_ID(int ID) {
    fstream file;
    string str;
    file.open("Tutor.txt", ios::in);
    if (file.is_open()) {
        while (getline(file, str)) {
            for (string i : str) {

            }

        }



    }
}








int main()
{
    cout << "Welcome Users" << endl;
    cout << "----------------------------------------------------" << endl;
    action_page();
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
