#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	double raio, volume,pi=3.14159;
	cin>>raio;
	volume= (4/3.0) * pi * (raio * raio * raio);
	cout<<fixed<<setprecision(3);
	cout<<"VOLUME = "<<volume<<endl; 
}
