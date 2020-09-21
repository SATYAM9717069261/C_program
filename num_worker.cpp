#include<bits/stdc++.h>
using namespace std;

int main(){

	long long m,w,c,a,candie=0;
	cin>>m>>w>>c>>a;
	int i=0;
	for(i;candie<a;i++){
		candie+= m*w;
		cout<<"Candies "<<candie<<endl;
		if(candie<a && candie>=c){
			long long spend=candie/c;
			cout<<"spend=> "<<spend<<endl;
			candie-=c*spend;
			cout<<"Inner Candies=> "<<candie<<endl;
			
			if( ((m+spend)*w ) > ( m*(w+spend)) )
				m+=spend;
			else
				w+=spend;
		}
	}
	cout<<endl;
	cout<<i;
	return 0;

}



