#include<bits/stdc++.h>
using namespace std;
int s=0;

int* merge(int* arr, int strt, int end){
	int mid=(end-strt)/2;
	mid+=strt;
	int *result=(int*)malloc(sizeof(int)*end-strt+1);
	int *right=(int*)malloc(sizeof(int)*( ((end-strt)/2)+1));
	int *left=(int*)malloc(sizeof(int)*(((end-strt)/2)+1));

	if(strt!=end){
		left=merge(arr,strt,mid);
		mid+=1;
		right=merge(arr,mid,end);
	}else
		return (arr+strt);
	
	int i=0;
	int j=0; // For Result only	
	int k=0;
	while( (i<=(mid-strt) ) &&(k<=(end-mid)  ) ){
		cout<<"Left=>"<<*(left+i) <<"Right=> " <<*(right+k)<<endl;
		if(*(left+i)>*(right+k)){
			*(result+j)=*(right+k);
			k++;
			s++;
	//		cout<<" S=> "<<s <<"Swap=> "<<*(left+i) <<" "<<*(right+k) <<endl;
		}else{
			*(result+j)=*(left+i);
			i++;
		}
		j++;
	}
//merge Left and Right Remaning part
	for(i,j;i<=(mid-strt);i++,j++){
		s++;
	//	cout<<" S=>"<<s <<"ADD=> " <<*(left+i)<<endl;
		*(result+j)=*(left+i);
	}
	for(i,j;k<=(end-mid);i++,j++,k++){
		*(result+j)=*(right+k);
		s++;
	//	cout<<"S=> "<<s<<"ADD=> " <<*(right+k)<<endl;
	}
	return result;
} 

int main(){
int n;
cout<<"Enter Limit=>";
cin>>n;
int* arr=(int*)malloc( sizeof(int) *n);
for(int i=0;i<n;i++)
	cin>>*(arr+i);
int* result=merge(arr,0,n-1);
for(int i=0;i<n;i++)
	cout<<*(result+i)<<"\t";
cout<<"NO => "<<s;
return 0;
}

