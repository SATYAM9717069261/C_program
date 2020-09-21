#include<bits/stdc++.h>
using namespace std;

int main(){
	int size;
	int mul;
	int num;
	int j=0;
// Prepair Dictonery
	vector <pair<int,int>> vec;
	cin>>size;
	cin>>mul;
	cin>>num;
	vec.push_back(make_pair(num,1));
	for(int i=0;i<size-1;i++){
		cin>>num;
		if(num%mul==0 || num==1){
			if(vec[j].first==num){
				vec[j].second+=1;
			}else{
				vec.push_back(make_pair(num,1));
				j++;
			}

		}
	}
// end dictonery

// Finding OPeration
int sum=0;
	for(int i=0;i<=(j-2);i++)
		sum+=(vec[i].second*vec[i+1].second*vec[i+2].second);
			

cout<<"Sum="<<sum<<endl;
//	for(int i=0;i<=j;i++)
//		cout<<vec[i].first<<" -> "<<vec[i].second<<endl;
	return 0;
}
