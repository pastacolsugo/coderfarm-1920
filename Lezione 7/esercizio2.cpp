#include <iostream>

using namespace std;

int main() {
	int n = 8; // dimensione dell'array
	int array[n]; // creo l'array

	// leggo i valori da tastiera
	// e li salvo nell'array
	for (int i = 0; i < n; i++) { 
		cin >> array[i];
	}

	for (int i = 0; i < n; i++) {
		// incremento di 1 ogni valore nell'array
		array[i] = array[i] + 1; 
	}

	// stampo i valori
	for (int i = 0; i < n; i++) {
		cout << array[i] << " ";
	}
}