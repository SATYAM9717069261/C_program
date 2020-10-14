#include<bits/stdc++.h>
#include<math.h>
using namespace std;

class prime_list{
	private : vector<int> prime_data;
		  bool chk_list(int n){
                            for(int i:prime_data){
                                    if(n%i==0)
                                            return false;
                            }
                            return true;
                    }

	protected :
		    bool elemination(int n){
			    if(n==1)
				    return false;
			    if(n==2)
				    return false;
			    if(n>2 && n%2==0)
				    return false;
			   // if(chk_list(n)==false)
			//	    return false;                             

			    int limit=floor(sqrt(n));
                       
			    for(int i=3;i<=limit;i+=2){
		//		    cout<<"date=> "<< n<<" "<<i<<" "  <<limit <<endl;
				    if(n%i==0)
					    return false;    
			    }
			    prime_data.push_back(n);
			    return true;
		    }	
	public :
		    int data_generator(int strt,int limit){
			    for(int i=strt;i<=limit;i++){
			    	//cout<<i<<" is prime : "<< elemination(i)<<endl;	
				elemination(i);		    
			    }
			    return 0;
		    }
};

int main(int arg,char* strt_end[]){
	clock_t tStart = clock();
        prime_list obj1;
	obj1.data_generator(stoi(strt_end[1]),stoi(strt_end[2]));
//	cout<<stoi(strt_end[1])<<strt_end[2];
        cout<<"Time taken"<< (double)(clock() - tStart)/CLOCKS_PER_SEC;
	return 0;
}


