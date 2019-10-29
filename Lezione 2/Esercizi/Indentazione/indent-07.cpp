#include <iostream>
#include <math.h>

using namespace std;
int main () {
	int x, y, k;

	for (y=1; y<=5; y++) {
	for (x=1; x<=5; x++) {
	cin >> k;

	if (k == 1) {
	int solution = abs(3-y) + abs (3-x);
	cout << solution << endl;
	break;
	}
	}
	}
}