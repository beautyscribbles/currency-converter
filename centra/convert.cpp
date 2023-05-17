/*type 1 u will be able to convert dollar to rupee
 * type 2 u will be able to convert pounds to rupee
 * also write amount to be converted*/




#include <iostream>
using namespace std;

int main() {

	float a,b,c,d,e,f;
	cout <<"hello"<<endl;
	cout<<"press 1 to convert dollar"<<endl;
	cout <<"press 2 to convert pounds "<<endl;
	cout<<"press 3 to convert Euros" <<endl;
	cout<<"press 4 to convert Yen" <<endl;
	cout<<"press 5 to convert Naira" <<endl;

	cin>>a;
	cout<<"enter amount to be converted"<<endl;
	cin>>b;
	if(a==1){
		c=b*67.14;
		cout<<"your amount in rupee="<<c<<endl;
		    
	}

	else if(a==2){
		  d=b*89.43;  
		    
		    cout<<"your amount in pounds="<<d<<endl;  
	if (a==3){
                e=b*54.79;
                cout<<"your amount in Euros="<<e<<endl;
        }
        else if (a==5){
	        f=b*786.43;
	        cout<<"your amount in Naira="<<f<<endl;	
		        
	}
	    return 0;
}
