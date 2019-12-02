#include <iostream>
using namespace std;

int main() {
	int n, k;
	cin >> n >> k;
	int iscritti[n];
	for (int i=0; i<n; i++){
		cin >> iscritti[i];
	}
	for (int i=0; i<n; i++) {
		if (iscritti[i] > k) {
			cout<<"No"<<endl;
			return 0;
		}
	}
	cout << "Si" << endl;
}


