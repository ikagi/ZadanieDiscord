#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

vector <string> files;
void files_setup(string name) {
	files.push_back(name);
	return;
}

void selected_operation(int operation) {
	if (operation == 1) {
		string addText;
		cout << "Podaj nazwe pliku txt do dodania" << endl;
		cin >> addText;
		files_setup(addText);
		return;
	}
	if(operation == 2){
		int files_size = files.size();
		for (int i = 0; i<files_size; i++) {
			cout << files[i] << endl;
			string filename = "file" + i;
			//fstream filename;
		}
		return;
	}
	if (operation == 3) {
		int files_size = files.size();
		for (int i = 0; i < files_size; i++) {
			string filename = "file" + i;
			cout << filename << endl;
		}
		return;
	}
}


int main() {
	int a = 1;
	while (a==1) {
		int select;
		cout << "[1] Dodaj pliki txt" << endl << "[2] Lista Plikow" << endl << "[3] Dodaj tekst" << endl;
		cin >> select;
		selected_operation(select);
	}
}





