#include <iostream>
#include <math.h>
using namespace std; 
int main (){
	int s=0;
	for(int i=1;i<101;i++){
		s=s+(pow(i,2));
	}
	cout<<s;
	return 0;
}
