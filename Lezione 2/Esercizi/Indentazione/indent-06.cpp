#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <unordered_set>
#include <math.h>
#include <string>

using namespace std;

int main() {
cin.tie(NULL);
ios_base::sync_with_stdio(false);

string out;

int n, m, p;

cin >> n >> m;

unordered_map <int, int> map;

unordered_set <int> set;

for (int i = 1; i <= n; i++) {
set.insert(i);
}

for (int i = 0; i < m; i++) {
cin >> p;

if (map.find(p) == map.end()) {
map[p] = 1;
} else {
map[p]++;
}

if (set.find(p) != set.end()) {
set.erase(p);
}

if (set.size() == 0) {
out.push_back('1');

for (int i = 1; i <= n; i++) {
map[i]--;

if (map[i] == 0) {
set.insert(i);
}
}
} else {
out.push_back('0');
}
}
cout << out << '\n';
}