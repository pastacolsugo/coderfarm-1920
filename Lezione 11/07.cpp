#include <iostream>
#include <string>

using namespace std;

int main() {
	string s;
	cin >> s;

	for (int i = 0; i < s.size(); i++) {
		if (s[i] >= 'A' and s[i] <= 'Z') {
			s[i] += 'a' - 'A'; // 32
		} else if (s[i] >= 'a' and s[i] <= 'z') {
			s[i] -= 'a' - 'A'; // 32
		}
	}

	cout << s << endl;
}