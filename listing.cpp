#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
	string word;
	vector<string> list;
	do {
		cout << "Bitte gib ein Wort ein: ";
		cin >> word;
		if (word != -1) {
			list.push_back(word);
		}
	}while (word != -1);

	for (int i{0}; i < list.size(); i++) {
		cout << list[i] << endl;
	}



	return 0;
}