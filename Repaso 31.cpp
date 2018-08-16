#include <iostream>
using namespace std;
main (){
	double long b, n;
	cout<<" Digite el valor bruto "<<endl;	cin>>b;
	if(b<20000){
		n=b;
	}else{
		n=b-(b*15/100);
	}
	cout<<" Importe neto = $"<<n<<endl;
	return 0;
}
