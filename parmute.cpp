#include<bits/stdc++.h>
using namespace std;


void swap(char* x,char* y){
	char temp=*x;
	*x=*y;
	*y=temp;
}

void combination(char* str , int start, int len){
	if(start>=len)
		cout<<str<<"\t";
	else{
		for(int i=start;i<len;i++){

			swap(*(str+start),*(str+i));
			combination(str,start+1,len);
			swap(*(str+start),*(str+i)); // Reset for new tree
		}
	}
}


int main(){
	char str[100];
	cout<<"Enter Your String => ";
	cin>>str;
	combination(str,0,strlen(str));
	cout<<"\n";
	return 0;
}

