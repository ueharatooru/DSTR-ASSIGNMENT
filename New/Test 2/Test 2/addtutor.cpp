#include "Header.h"

using namespace std;

int T = 0;
string Tutor[100][11];
<<<<<<< HEAD

void display_tutor() {
    for (int i = 0; i < T; i++) {
        for (int j = 0; j < 11; j++) {
=======

void add_tutor() {
        
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

        cout << Tutor[T];
        T++;

        while (true) {
            char ac;
            cout << "Continue add?( Y or N ): ";
            cin >> ac;
            if (ac == 'Y') {
                add_tutor();
            }
            else if (ac == 'N') { action_page(); }
            else { cout << "Only Y or N" << endl; continue; }
    }
}

void display_tutor() {
    for (int i = 0; i < T; i++) {
        for (int j = 0; j < 10; j++) {
>>>>>>> 1c6c8db036d68b9b3644812da401b50f1971c430
            if (j == 10) {
                cout << Tutor[i][j] << endl;
            }
            else { cout << Tutor[i][j] << ", "; }
        }
    }
<<<<<<< HEAD

    action_page();
}
void add_tutor() {

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
    
    while (true) {
        string choose;
        cout << "=========================================================================" << endl;
        cout << "Continue add?(y/n): ";
        cin >> choose;
        if (choose == "y" || choose == "Y") {
            
            add_tutor();

        }
        else if (choose == "n" || choose == "N") {
            
            action_page();
        }
        else {
            cout << "only y/n" << endl;
        }
    }
    
   
    


}

=======
}
>>>>>>> 1c6c8db036d68b9b3644812da401b50f1971c430
