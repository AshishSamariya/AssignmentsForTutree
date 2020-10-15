#include<iostream>
using namespace std;
int main(){
	string str1= "XYYZXZYZXXYZ";
	string str2= "XYZ";
	//Solution for the variable size of strings
	for(int i =0;i<(str1.size());i++) {
		int j;
		int count=0;
		for(j=0;j<str2.size();j++){	
			for(int k=0;k<str2.size();k++){
				if((str2[j]==str1[i+k])){
					count++;
					break;
				} 
			}				
		}	
		if(j==str2.size() && count==str2.size()){
			cout<<"Substring '";
			for(int k =0;k<str2.size();k++){
			cout<<str1[i+k];
			}
			cout<<"' present at index "<<i<<endl;
		}
	}
	
	//Solution for the specific problem
	/*for(int i =0;i<(str1.size())-2;i++) {
		int j;
		for(j=0;j<str2.size();j++){
			if((str2[j]==str1[i]) || (str2[j]==str1[i+1]) || (str2[j]==str1[i+2]) ){
				
			}else{
				break;
			}				
		}
		if(j==str2.size()){
			cout<<"Substring "<<str1[i]<<str1[i+1]<<str1[i+2]<<" at index "<<i<<endl;
		}
	}*/
		
}
