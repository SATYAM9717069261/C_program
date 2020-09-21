#include<bits/stdc++.h>
using namespace std;
void search(int *arr,int n){
     int max=0;
     int current=0;

     for(int i=0;i<n;i++){
	     for(int j=0;j<n-i;j++){
		     //int l=*((arr*i)+j);
		     current+=*(arr+i+j);
		     if(max<current)
			     max=current;
		
		  //   cout<<*(arr+i+j)<<"\t";
	     }
	     current=0;
	    // cout<<"\n";
     }
     cout<<"Max-> "<<max;
}

int main(){
	int arr[100];
	int n;
	cout<<"Enter araay limit-> ";
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>arr[i];
	search((int*)arr,n);
	return 0;
}
