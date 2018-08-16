#include <iostream>
using namespace std;
int main(){
	double A, B, u;
	cout<<endl<<"	30	"<<endl<<endl<<" Digite el primer valor "<<endl;	cin>>A;	
	cout<<endl<<" Digite el segundo valor "<<endl; cin>>B;
	if(A>B){
		u=A;	A=B;	B=u;
	}
	cout<<endl<<A<<endl<<B<<endl;
	return 0;
}
