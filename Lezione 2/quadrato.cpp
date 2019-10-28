#include <iostream>

using namespace std;

int main() {
	int n;
	cout << "Inserisci n: ";
	cin >> n;

	for (int j = 0; j < n; j = j + 1) {	
		for (int i = 0; i < n; i = i + 1) {
			cout << 0;
		}
		cout << endl;
	}
}


