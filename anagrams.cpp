#include<bits/stdc++.h>
using namespace std;
int main(){
	vector<pair<string,int>>vec;
	string str;
	cout<<"Enter String=> ";
	cin>>str;
	int count=0;
	for(int i=0;i<str.length();i++){
		for(int j=0;j<(str.length()-i);j++){
			string srch="";
			for(int k=j;k<=(j+i);k++)
				srch+=str[k]; //string making for Search
			int m=0;
			for(int l=0;l<vec.size();l++){
				if(vec[l].first == srch){
					vec[l].second+=1;
					//cout<<vec[l].first <<" =>"<<vec[l].second<<endl;
					//count++;
					m=1;
					break;
				}
			}
			if(m==0)
				vec.push_back(make_pair(srch,1));
		
//	cout<<srch<<endl;
//	vec.push_back(make_pair(srch,1));
//	cout<<vec.size()<<endl;
		}
	}

	//calculate count
	for(int i=0;i<vec.size();i++){
		cout<<vec[i].first<<" => " <<vec[i].second;
		count+=(vec[i].second*(vec[i].second-1)/2 );
		cout<<"Count=> "<<count<<endl;
	}

	cout<<"Count=> "<<count;
	return 1;
}
