// DSTE Assignment.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

//這個是tutor的資料庫
struct tutor
{
    string name;
    int ID;
    string datejoin;
    string dateterminal;
    int hourlypaid;
    int phone;
    string address;
    int tuitioncode;
    string tuitioncenter;
    int subjectcode;
    string subjectname;
    int rating;
};

//這個是Double Linked List
struct Node {
public:
    tutor Tutor;
    Node* next;
    Node* previous;

};


//這裏開始寫我們的action
void add_tutor() {
    tutor T;
    cout << "Enter your name: ";
    cin >> T.name;
    cout << "Enter your ID: ";
    cin >> T.ID;
    cout << "Enter your date join(yyyy/mm/dd): ";
    cin >> T.datejoin;
    cout << "Enter your date terminal(yyyy/mm/dd): ";
    cin >> T.dateterminal;
    cout << "Enter your hourly paid: ";
    cin >> T.hourlypaid;
    cout << "Enter your phone: ";
    cin >> T.phone;
    cout << "Enter your address: ";
    cin >> T.address;
    cout << "Enter your tuition code: ";
    cin >> T.tuitioncode;
    cout << "Enter your tuition center name: ";
    cin >> T.tuitioncenter;
    cout << "Enter your subject code: ";
    cin >> T.subjectcode;
    cout << "Enter your subject name: ";
    cin >> T.subjectname;
    cout << "Enter your Rating: ";
    cin >> T.rating;

    fstream file;
    file.open("Tutor.txt", ios::app);
    if (file.is_open()) {
        file << T.ID << "," << T.name << "," << T.datejoin << "," << T.dateterminal << "," << T.phone << "," <<
            T.address << "," << T.hourlypaid << "," << T.tuitioncode << "," << T.tuitioncenter << "," <<
            T.subjectcode << "," << T.subjectname << "," << T.rating << endl;
        file.close();
        cout << "Done" << endl;

       
    }
    

};

void display_tutor() {
    fstream file;
    file.open("Tutor.txt", ios::in);
    string line;
    if (file.is_open()) {
        while (getline(file, line)) {
            cout << line << endl;
        }
        file.close();
    }

}

void search_tutor() {
    int ID, search_id;
    fstream file;
    file.open("Tutor.txt", ios::in);
    string line;
    if (file.is_open()) {
        for (search_id = 0; search_id <= 11; search_id++) {
            cout << "Enter the Tutor ID: " << endl;
            cin >> ID;
            if (search_id == ID) {
                cout << file[0] << endl;
                cout << file[1] << endl;
                cout << file[2] << endl;
                cout << file[3] << endl;
                cout << file[4] << endl;
                cout << file[5] << endl;
                cout << file[6] << endl;
                cout << file[7] << endl;
                cout << file[8] << endl;
                cout << file[9] << endl;
                cout << file[10] << endl;
                cout << file[11] << endl;
            }
        }
        
    }
    file.close();
}

void action_page() {
    int action;
    cout << "Choose your action: 1) add tutor, 2) Display all tutors, 3)Search tutor: ";
    cin >> action;
    if (action == 1) {
        tutor Tutor1;
        add_tutor();
    }
    if (action == 2) {
        display_tutor();
    }
    if (action == 3) {
        search_tutor();
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
