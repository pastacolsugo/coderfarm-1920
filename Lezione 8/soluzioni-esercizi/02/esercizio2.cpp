#include <iostream>
using namespace std;

int main() {
	int n, max1, max2;
	cin >> n;
	int pomodori[n];
	for (int i=0; i<n; i++) {
		cin >> pomodori[i];
	}
	max1 = pomodori[0];
	for (int i=1; i<n; i++) {
		if (max1 < pomodori[i]) {
			max1 = pomodori[i];
		}
	}
	max2 = 0;
	for (int i=0; i<n; i++) {
		if (pomodori[i] < max1 and pomodori[i] > max2) {
			max2 = pomodori[i];
		}
	}
	cout << "I pomodori piu' grandi sono: ";
	cout << max1 << " e " << max2 << endl;
}



