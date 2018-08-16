#include <iostream>
using namespace std;
main(){
	int A, B, d, r;
	cout<<" Ingrese el valor entero de A "<<endl;
	cin>>A;
	cout<<" Ingrese el valor entero de B "<<endl;
	cin>>B;
	d=A/B;
	r=(A%B);
	cout<<d<<"	"<<r<<endl;
	return 0;
}
