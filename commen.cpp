#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,m;
	cin>>n>>m;
	vector<pair<int,int>> v;
	for(int a0=0;a0<m;a0++){
		int a,b,k;
		cin>>a>>b>>k;
		v.push_back(make_pair(a,k));
		v.push_back(make_pair(b+1,-1*k));
	}

	sort(v.begin(),v.end());
	long mx=0;
	long sum=0;

	for(int i=0;i<2*m;i++){
		sum+=v[i].second;
		mx=max(mx,sum);
	}
	cout<<mx;
	return 0;

}
