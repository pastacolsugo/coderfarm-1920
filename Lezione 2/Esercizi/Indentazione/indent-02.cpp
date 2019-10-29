#include <iostream>
#include <algorithm>
#include <math.h>

using namespace std;

int main () {
double n, k;cin >> n >> k;double a, b, c;a = ceil((2*n)/k);b = ceil((5*n)/k);c = ceil((8*n)/k);cout << long(a + b + c)<< '\n';
}
