#include <iostream>

using namespace std;


	bool isCap(const string &s0){
		bool flag=false;
		for(int i=0; i<s0.size(); i++){
			char t = s0[i];
			if(t==toupper(t)){flag = true;}
		}
		return flag;
	}	
	
	void capitalize (string &s0){
		for (char c : s0){
		c = toupper(c);
		cout<< c<<endl;
		}
		
	}





	int main(){
		string s0="capitAl";
	
		cout<< "isCap returns: ";
		if(isCap(s0)==1){cout<<"capital found"<<endl;}
			else cout <<"capital not found"<<endl;
		
		//cout<< "capitalized version:  "<< capitalize(s0);
		capitalize(s0);


	}


