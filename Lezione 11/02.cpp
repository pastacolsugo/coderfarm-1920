#include <iostream>
#include <string>

using namespace std;

int main() {
	string s;
	cin >> s;
	int numeroA = 0;

	for (int i = 0; i < s.size(); i++) {
		if (s[i] == 'a') {
			numeroA++;
		}
	}

	cout << "In questa stringa ci sono " << numeroA << " a." << endl;
}