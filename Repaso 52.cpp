#include <iostream>
using namespace std;
main (){
	float n, s=0;
	for(int u=0; u<10;u++){
		cin>>n;
		if(n<0){
			s=s+n;
		}
	}
	cout<<endl<<s;
	return 0;
}
