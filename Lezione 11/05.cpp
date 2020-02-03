#include <iostream>
#include <string>

using namespace std;

int main() {
	string s;
	cin >> s;
	int numeroCifre = 0;

	for (int i = 0; i < s.size(); i++) {
		if (s[i] >= '0' and s[i] <= '9') {
			numeroCifre++;
		}
	}

	cout << "In questa stringa ci sono " << numeroCifre << "cifre." << endl;
}