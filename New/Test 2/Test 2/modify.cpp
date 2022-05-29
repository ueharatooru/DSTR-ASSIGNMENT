#include "Header.h"
#include "addtutor.cpp"

string ID;

void modify_tutor() {
	for (int i = 0; i < T; i++) {
		for (int j = 0; j < 10; j++) {
			cout << "Enter the TutorID: " << endl;
			cin >> ID;
			if (Tutor[i][j] == ID) {
				cout << "Enter the phone: ";
				cin >> Tutor[T][5];
				cout << "Enter the address: ";
				cin >> Tutor[T][6];

				cout << "Updated the tutor details" << endl;

					while (true) {
						char ac;
						cout << "Continue add?( Y or N ): ";
						cin >> ac;
						if (ac == 'Y') {
							modify_tutor();
						}
						else if (ac == 'N') { action_page(); }
						else { cout << "Only Y or N" << endl; continue; }
					}
			}
		}
	}
}