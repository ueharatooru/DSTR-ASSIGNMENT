// DSTE Assignment.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
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
class Node {
public:
    tutor Tutor;
    Node* next;
    Node* previous;

};






//這裏開始寫我們的action
void add_tutor() {
    tutor Tutor1;
    cout << "Enter your name: ";
    cin >> Tutor1.name;
    cout << "Enter your ID: ";
    cin >> Tutor1.ID;
    cout << "Enter your date join(yyyy/mm/dd): ";
    cin >> Tutor1.datejoin;
    cout << "Enter your date terminal(yyyy/mm/dd): ";
    cin >> Tutor1.dateterminal;
    cout << "Enter your hourly paid: ";
    cin >> Tutor1.hourlypaid;
    cout << "Enter your phone: ";
    cin >> Tutor1.phone;
    cout << "Enter your address: ";
    cin >> Tutor1.address;
    cout << "Enter your tuition code: ";
    cin >> Tutor1.tuitioncode;
    cout << "Enter your tuition center name: ";
    cin >> Tutor1.tuitioncenter;
    cout << "Enter your subject code: ";
    cin >> Tutor1.subjectcode;
    cout << "Enter your subject name: ";
    cin >> Tutor1.subjectname;

};
    
    

    








int main()
{
    std::cout << "Hello World!\n";
    
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
