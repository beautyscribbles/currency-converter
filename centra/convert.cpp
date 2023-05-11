/*type 1 u will be able to convert dollar to rupee
 * type 2 u will be able to convert pounds to rupee
 * also write amount to be converted*/




#include <iostream>
using namespace std;

int main() {

	float a,b,c,d;
	cout <<"hello"<<endl;
	cout<<"press 1 to convert dollar"<<endl;
	cout <<"press 2 to convert pounds "<<endl;
	cout<<"press 3 to convert Euros" <<endl;
	cin>>a;
	cout<<"enter amount to be converted"<<endl;
	cin>>b;
	if(a==1){
		c=b*67.14;
		cout<<"your amount in rupee="<<c<<endl;
		    
	}

	else if(a==2){
		  d=b*89.43;  
		    
		    cout<<"your amount in rupee="<<d<<endl;  
		        
		        
	}
	    return 0;
}
