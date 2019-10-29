#include <vector>
#include <utility>
#include <algorithm>
#include <iostream>

using namespace std;

int main (){
	int n, a, d;
	cin >> n >> a >> d;

	vector <int> v(n);

	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}

	if (a > d) {
		cout << n << '\n';
		return 0;
	} else {
		int oneShottable = 0;

		for (int h : v) {
			if (h <= a) {
				oneShottable++;
			}
		}

		cout << int((oneShottable + 1) / 2) << '\n';
		return 0;
	}
}