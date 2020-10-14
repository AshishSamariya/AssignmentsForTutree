#include<iostream>
using namespace std;
int main(){
	void incOrder(int);
	incOrder(-7);
}
/*void incOrder(int lastDigit){
	
	int count=1;
	while(count<=lastDigit){
		for(int i=count;i<=lastDigit;i++){
			cout<<i<<" ";
		}
		cout<<endl;
		for(int i=0;i<count;i++){
			cout<<" ";
		}
		count++;
	}
	cout<<'\r';
	while(count>1){
		
		for(int i=count-2;i>0;i--){
			cout<<" ";
		}
		for(int i =count-1;i<=lastDigit;i++){
			cout<<i<<" ";
		}
		cout<<endl;
		count--;
	}
}
*/
void incOrder(int lastDigit){
	
	int count=1;
	while(count<=lastDigit){
		for(int i=abs(count);i<=lastDigit;i++){
			cout<<i<<" ";
		}
		cout<<endl;
		for(int i=0;i<count;i++){
			cout<<" ";
		}
		count++;
	}
	cout<<'\r';
}
