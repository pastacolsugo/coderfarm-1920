#include <iostream>
using namespace std;

void scambia(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main() {
	int t = 5, k = 6;
	scambia(&t, &k);
	cout << t << ' ' << k << endl;
}