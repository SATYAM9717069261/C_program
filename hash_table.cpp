#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the whatFlavors function below.
void whatFlavors(vector<int> cost, int money) {
   map<int,vector<int>>data;
   vector<int> m;
   int k=1;
   for(auto i : cost){
	   data[i].push_back(k);
	   k++;
   }
   for(auto i:data){
	   cout<<i.first<<" => ";
	   for(auto j : i.second)
		   cout<<j;
	   cout<<endl;
   }
  // Find data using Key
  int j=1;
  for(auto i:cost){
	  int key=abs(money-i);
	 // cout<<"Key=> "<<key<<endl;
	  if(data.find(key) != data.end()){
		  m=data[key];
		 // cout<<"Size=> "<<m.size() <<" m[0]=> "<<m[0] <<" j=> "<<j<<endl;  
		 if(m[m.size()-1]!=j){                 // if money =10 and find 5:1
			cout<<j<<","<<m[m.size()-1];
			 break;
		 }
	  }
	  j++;
  }


}

int main(){
    int t;
  //  cin>>t;
   // while(t--){
        int cost;
        cin>>cost;

        int size;
        cin>>size;

        vector <int> prize(size);
        for(int i=0;i<size;i++)
            cin>>prize[i];
        whatFlavors(prize,cost);
   // }
    return 0;
}

