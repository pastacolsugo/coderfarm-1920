#include <iostream>

using namespace std;

int main() {
	int n;
	cout << "inserici il numero di numeri: ";
	cin >> n;

	int v[n];
	for (int i = 0; i < n; i = i + 1) {
		cin >> v[i];
	}

	cout << "Hai inserito: ";
	for (int i = 0; i < n; i = i + 1) {
		cout << v[i] << " ";
	}

	cout << endl;
}


