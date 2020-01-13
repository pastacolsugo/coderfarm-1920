#include <string>
#include <iostream>

using namespace std;

class Data {
public:
	int giorno;
	string mese;
	int anno;
};

int main (){
	Data oggi;
	oggi.giorno = 4;
	cout << oggi.giorno << endl;
}