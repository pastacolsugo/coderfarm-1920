#include <iostream>
using namespace std;

int main() {
	int n = 5, v[n], max1, max2;

	cout << "Inserisci " << n << " valori: ";
	for (int i = 0; i < 5; i++) {
		cin >> v[i];
	}

	// max1 e' la variabile che contiene il
	// valore maggiore trovato fin ora.
	// Per iniziare, gli do il valore del 
	// maggiore elemento tra il primo e il secondo.
	if (v[0] < v[1]) {
		max1 = v[1];
	} else {
		max1 = v[0];
	}

	for (int i=0; i<n; i++) {
		if (max1 < v[i]){
			max1 = v[i];
		}
	}

	cout << "max1 = " << max1 << endl;	
	if (v[0] < max1) {
		max2 = v[0];
	} else {
		max2 = v[1];
	}

	for (int i=0; i<n; i++) {
		if (v[i] != max1 and v[i] > max2){
			max2 = v[i];
		}
	}

	cout << "max2 = " << max2 << endl;
}



