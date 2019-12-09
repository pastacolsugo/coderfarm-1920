#include <iostream>
using namespace std;

int main() {
	int n, k, somma = 0, maxSomma = 0;
	cin >> n >> k;
	int qualita[n];
	for (int i = 0; i < n; i++) {
		cin >> qualita[i];
	}
	for (int i = 0; i < n - k; i++) {
		for (int j = i; j < i + k; j++) {
			somma += qualita[j];
			// equivale a:
			// somma = somma + qualita[j];
		}
		if (somma > maxSomma) {
			maxSomma = somma;
		}
		somma = 0;
	}
}



