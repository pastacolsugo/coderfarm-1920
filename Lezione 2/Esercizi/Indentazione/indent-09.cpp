#include <algorithm>
#include <deque>
#include <iostream> 
#include <string.h>
#include <string>
#include <vector>
using namespace std;
int main(){int N;char colors[]="ROYGBIV";const int nColors=7;cin>>N;for(inti=0,c=0;i<N-3;i++,c++){if(c==4){c=0;}cout<<colors[c];}cout<<"BIV"<<endl;}