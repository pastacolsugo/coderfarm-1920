#include <iostream>
#include <string>

using namespace std;

int main() {
	string s;
	cin >> s;
	int numeroMaiuscole = 0;

	for (int i = 0; i < s.size(); i++) {
		if (s[i] >= 'A' and s[i] <= 'Z') {
			numeroMaiuscole++;
		}
	}

	cout << "In questa stringa ci sono " << numeroMaiuscole << " maiuscole." << endl;
}