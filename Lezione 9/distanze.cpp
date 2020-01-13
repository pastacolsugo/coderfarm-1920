#include <iostream>
#include <vector>
#include <utility>
#include <math.h>

using namespace std;

int main () {
	vector <int> coordX, coordY;
	vector <double> distanze;

	int n;

	cin >> n;

	for (int i = 0; i < n; i++) {
		int x, y;
		cin >> x >> y;
		coordX.push_back(x);
		coordY.push_back(y);
	}	

	for (int i = 0; i < n; i++) {
		double distanza = sqrt(coordX[i] * coordX[i] + coordY[i] * coordY[i]);

		distanze.push_back(distanza);
	}
	
	for (int i = 0; i < distanze.size(); i++) {
		cout << distanze[i] << endl;
	}
}