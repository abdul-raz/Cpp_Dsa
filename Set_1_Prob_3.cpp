#include <iostream>
using namespace std;
int main(){
	int mark;
	cin>>mark;
	if(mark>=90 && mark<=100){
		cout<<"Grade A";
	}else if (mark>=80 && mark<=89){
		cout<<"Grade B";
	}else if(mark>=60 && mark<=79){
		cout<<"Grade C";
	}else if(mark>=35 && mark <=59){
		cout<<"Grade D";
	}else if (mark<35 && mark>=0){
		cout<<"FAIL";
	}else{
		cout<<"INVALID INPUT";
	}
	return 0;
}
