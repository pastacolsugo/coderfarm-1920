#include <iostream>
#include <string>

using namespace std;

int main() {
	string s;
	cin >> s;
	string vocali = "aeiou";

	for (int i = 0; i < s.size(); i++) {
		for (int j = 0; j < vocali.size(); j++) {
			if (s[i] == vocali[j]) {
				s[i] -= 'a' - 'A'; // 32
			}
		}
	}

	cout << s << endl;
}
