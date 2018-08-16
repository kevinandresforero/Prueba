#include <iostream>
using namespace std;
int main(){
	double x, i, c;
	cout<<endl<<" Ingrese el capital "<<endl; cin>>x;
	cout<<endl<<" Ingrese el interes mensual "<<endl; cin>>i;
	c=(i*x/100)*12;
	cout<<endl<<c<<endl;
	return 0;
}
