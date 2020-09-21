#include<bits/stdc++.h>
using namespace std;
int sw=0;

void swap(int* a,int* b){
	int tmp=*a;
	*a=*b;
	*b=tmp;
}

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
	int j=0;
	int k=0;
        for(i,j;i<=(mid-strt);i++,j++)
                *(result+j)=*(left+i);
        for(i,j;k<=(end-mid);i++,j++,k++)
                *(result+j)=*(right+k);

	for(int i=(end-strt);i>=0;i--){
		int max=*(result+i);
		for(int j=0;j<=i;j++){
			if(max<=*(result+j))
				max=*(result+j);
			else{
				swap(max,*(result+j));
				sw++;
			}
		}
	}
	cout<<"Swap=> "<<sw;
        return result;
}


int main(){
	cout<<"Enter Limit=>";
	int limit;
	cin>>limit;
	int* arr=(int*)malloc(sizeof(int)*limit);
	for(int i=0;i<limit;i++)
		cin>>*(arr+i);
	int* res=merge(arr,0,limit-1);

	for(int i=0;i<limit;i++)
		cout<<*(res+i)<<"\t";
	return 0;
}

