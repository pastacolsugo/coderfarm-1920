#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

int main() {
	srand(time(NULL));
	for (int i = 0; i < 1000; i++) {
		cout << rand()%10001 << ' ';
	}
}



