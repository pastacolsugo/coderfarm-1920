#include <iostream>
#include <string>

using namespace std;

int main() {
	string s;
	cin >> s;
	int numeroVocali = 0;
	string vocali = "aeiou";

	for (int i = 0; i < s.size(); i++) {
		for (int j = 0; j < vocali.size(); j++) {
			if (s[i] == vocali[j]) {
				numeroVocali++;
			}
		}
	}

	cout << "In questa stringa ci sono " << numeroVocali << " vocali." << endl;
}