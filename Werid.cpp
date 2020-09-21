#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cout<<"Enter value of N=>";
	cin>>n;
	do{
		cout<<n<<"\n";
		if(n%2==0)
			n/=2;
		else
			n=(n*3)+1;
	//	cout<<n<<"\n";
	}while(n!=1);
	return 0;
}
