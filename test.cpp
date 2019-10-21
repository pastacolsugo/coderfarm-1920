#include <iostream>

using namespace std;

int main() {
	int topolino = 5;
	cout << "inserisci il nuovo valore: ";
	cin >> topolino;
	cout << "topolino vale " << topolino << endl;
	if (topolino > 0) {
		cout << "topolino e' positivo" << endl;
	} else { // questo e' un commento :)
		if (topolino == 0) {
			cout << "topolino e' zero" << endl;
		} else {
			cout << "topolino e' negativo" << endl;
		}
	}
}