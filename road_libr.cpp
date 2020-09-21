#include<bits/stdc++.h>
using namespace std;

int solve(vector<pair<int,int>>grp,int cost_lib,int cost_road,int node){
    int store[node]={0};
    int count=0,cost=0,asign=0;
    for(pair<int,int>i:grp){
      if( store[i.first-1]==1  || store[i.second-1]==1){
	       //cout<<store[i.first]<<" "<<store[i.second]<<endl;
            if(store[i.first-1]!=1){
                count++;asign++;
                store[i.first-1]=1;
            }
            if(store[i.second-1]!=1){
                count++;asign++;
                store[i.second-1]=1;
            }  
//	    cout<<"Equal 1=> "<<store[i.first-1]<<" "<<store[i.second-1]<<endl;
        }
	else{

            if((cost_lib+(count-1)*cost_road) < (cost_lib*count) && count!=0)
                       cost+=cost_lib+(count-1)*cost_road;
            else
                       cost+=cost_lib*count;
            store[i.first-1]=1; 
            store[i.second-1]=1;

//	    cout<<"Cost=> " <<cost<<endl;
//	    cout<<"Not 1=> "<<store[i.first-1]<<" "<<store[i.second-1]<<endl;
            count=2;asign+=2;
        }
       
    }

    if((cost_lib+(count-1)*cost_road) < (cost_lib*count) && count!=0)
                       cost+=cost_lib+(count-1)*cost_road;
            else
                       cost+=cost_lib*count;
    cost+=(node-asign)*cost_lib;
//cout<<"count=>"<<count;
//    for(auto i : store)
//	    cout<<i<<"\t";
    return cost;
}

int main(){
    int q;
    int node,edge,cost_lib,cost_road;
    cin>>q;
    while(q--){
        cin>>node>>edge>>cost_lib>>cost_road;
        vector<pair<int,int>>grp;
        while(edge--){
            int x,y;
            cin>>x>>y;
            grp.push_back(make_pair(x,y));
        }
	cout<<solve(grp,cost_lib,cost_road,node)<<endl; 
    }
    return 0;
}
