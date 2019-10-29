#include <iostream>
using namespace std;

int main () {
int T;cin >> T;long long jumps, a, b;
for (int i=0; i<T; i++)
{
cin >> a >> b >> jumps;
long long position = (a - b) * (jumps/2);
if (jumps % 2 == 1)
{
position += a;
}
cout << position << endl;
}
}
