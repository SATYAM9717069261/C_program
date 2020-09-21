#include<bits/stdc++.h>
using namespace std;
void swap(char* x,char* y){
        char temp=*x;
        *x=*y;
        *y=temp;
}
int factorial(int num){
	if(num<2)
		return 1;
	else
		return num*factorial(num-1);
}
int calculate(char* str,int lmt){
	int result=0;
	int k=0;
	for(int i=lmt-1;i>=0;i--){
		if(i!=0)
			result+=(*(str+k)-49) *factorial(i);
		if(i==0)
			result+=(*(str+k)-49) *0;
		k++;
		cout<<result<<endl;
	}
	return result;
}
void combination(char* str , int start, int len, char* main_str,int main_rng){
        if(start>=len)
                cout<<str<<"\t";
			     
        else{
                for(int i=start;i<len;i++){
                        swap(*(str+start),*(str+i));
                        combination(str,start+1,len,main_str,main_rng);
                        swap(*(str+start),*(str+i)); // Reset for new tree
                }
        }
}
void find(char* str,int lmt){
	string miss="";
	bool k;
	for(int i=1;i<=lmt;i++){
		k=0;
		for(int j=0;j<lmt;j++){	
			if(*(str+j) == (48+i)){
				k=1;
				break;	
			}		
		}
		if(k==0)
			miss+=(48+i);
	}
	char* cstr=&miss[0];
	combination(cstr,0,miss.size(),str,lmt);
}

int main(){
	int rng;
	char str[10000];
	cout<<"Enter Range-> ";
	cin>>rng;
	cout<<"Enter Sequence ->";
	cin>>str;
	cout<<calculate(str,rng);
	//find(str,rng);
	return 0;
}
