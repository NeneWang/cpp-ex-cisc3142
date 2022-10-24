#include <iostream>
#include <stdexcept>

using namespace std;
	int main (){
		int n;
		int p;
		cout<<"enter two numbers to be divided:"<<endl;
		while (cin>>n>>p){
 		 try{
			//cout<< "enter two numbers to be divided: "<<endl;
			if (p==0){throw (p);}
			 else{cout<<"the quotient is: "<<n/p<<endl;
			      cout<<"enter another pair to be divided";}
		 }
   

  catch(int p){
	  
	cout<<"Error cannot divide by:"<<p<<endl;
	

  }
	}
}
