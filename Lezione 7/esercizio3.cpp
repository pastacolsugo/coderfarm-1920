#include <iostream>

using namespace std;

int main() {
	int n = 8; // dimensione dell'array
	int array[n]; // creo l'array
	int maggioriDiSei = 0;

	// leggo i valori da tastiera
	// e li salvo nell'array
	for (int i = 0; i < n; i++) { 
		cin >> array[i];
	}

	for (int i = 0; i < n; i++) {
		// se array[i] e' maggiore di 6
		if (array[i] > 6) {
			// aggiungo 1 alla variabile maggioriDiSei
			maggioriDiSei++;
		}
	}

	// stampo quanti sono i valori maggiori di sei
	cout << "I valori maggiori di sei sono: " << maggioriDiSei << endl;

	// stampo i valori
	for (int i = 0; i < n; i++) {
		cout << array[i] << " ";
	}
}