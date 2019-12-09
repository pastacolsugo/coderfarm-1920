#include <iostream>
using namespace std;

int main() {
	int n, k;
	cin >> n >> k;
	int canali[n];
	for (int i=0; i<n; i++) {
		cin >> canali[i];
	}
	for (int i=0; i<n; i++) {
		if (k < canali[i]) {
			cout << "No" << endl;
			return 0;
		}
	}
	cout << "Si" << endl;
}