#include <iostream>
#include <vector>

using namespace std;

int main () {
    int N;
        int k = 0;

            cin >> N;
    
                vector <int> apts(N);

    for (int i=0; i<N; i++) {
    cin >> apts[i];
    }

    int pattern[] = { 1, 0, 1, 0, 1 };

    for (int i=0; i<N-5; i++) {
    bool match = true;
    for (int j=0; j<5 && match; j++) {
    if (apts[i+j] != pattern[j]) {
    match = false;
    }
    }

    if (match) {
    apts[i+2] = 0;
    k++;
    i += 3; // shift al prossimo numero, contando l'incremento del for
    }
    }

    for (int i=0; i<N; i++) {
    if (apts[i] == 1 && apts[i+1] == 0 && apts[i+2] == 1) {
    apts[i+2] = 0;
    k++;
    i += 1;
    }
    }

    cout << k << '\n';
}
