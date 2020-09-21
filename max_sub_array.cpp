#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

long max(long a , long b){
    if(a>b)
        return a;
    else
        return b;
}

int dp[1000];
long maxSubsetSum(vector<int> arr) {
    
    dp[0]=max(0,arr[0]);
    if(arr.size()==1)
        return dp[0];
    for(int i=1;i<arr.size();i++)
    {

	cout<<"dp["<<i-1<<"]=> "<<dp[i-1];
	cout<<"\tdp["<<i-2<<"]=> "<<dp[i-2];
	cout<<"\tarr["<<i<<"]=> "<<arr[i]<<endl;
        dp[i]=max(dp[i-2],max(dp[i-1],dp[i-2]+arr[i]));

    }
    int n=arr.size();
    return max(dp[n-1],dp[n-2]);
}



int main(){
	vector<int> arr;
	int limit;
	cin>>limit;
	while(limit--){
		int data;
		cin>>data;
		arr.push_back(data);
	}
	cout<<"x=> "<<maxSubsetSum(arr);
	return 0;
}


