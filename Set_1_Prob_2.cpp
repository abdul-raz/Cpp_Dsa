#include <iostream>
using namespace std;
int main(){
	int a,b,c;
	cin>>a>>b>>c;
	if(a==0||b==0||c==0){
		cout<<"Triangle cannot be formed";
	}else if(a+b+c==180){
		cout<<"Triangle can be formed";
	}else{
		cout<<"Triangle cannot be formed";
	}
	return 0;
	
	
}
