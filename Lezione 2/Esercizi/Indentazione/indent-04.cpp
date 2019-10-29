#include <iostream> 
#include <string.h>

using namespace std;

int main () {
int letters[30];

memset (letters, 0, sizeof(letters));

char c;

cin >> c;
cin >> c;

if (c == '}') {
cout << "0\n";
return 0;
}

while (true) {
letters[c-'a'] = 1;

cin >> c;

if (c == '}') {
	break;
}

cin >> c;
}

int sum = 0;

for (int i=0; i<='z'-'a'; i++) {
sum += letters[i];
}

cout << sum << endl;
}