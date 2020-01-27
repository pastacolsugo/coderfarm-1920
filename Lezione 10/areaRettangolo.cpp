#include <iostream>
using namespace std;

int main() {
	int base = 10, altezza = 5;
	cout << "area = ";
	cout << areaRett(base, altezza) << endl;
}

int areaRett(int b, int h) {
	return b * h;
}