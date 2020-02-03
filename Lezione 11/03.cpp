#include <iostream>
#include <string>

using namespace std;

int main() {
	string s;
	cin >> s;
	int numeroVocali = 0;

	for (int i = 0; i < s.size(); i++) {
		if (s[i] == 'a' or s[i] == 'e' or s[i] == 'i' or s[i] == 'o' or s[i] == 'u') {
			numeroVocali++;
		}
	}

	cout << "In questa stringa ci sono " << numeroVocali << " vocali." << endl;
}