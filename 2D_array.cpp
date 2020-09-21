#include<bits/stdc++.h>
using namespace std;

void print(string* matrix){
	cout<<"\n";
	for(int i=0; i<4;i++){
               for(int j=0; j<4;j++) {
		       int count=(4*i)+j;
                       cout<<*(matrix+count)<<"\t";
	       }
               cout<<"\n";
       }
}
void plot_queen(char a,string* strt_add,int pos_x,int pos_y){
	// Left-Right Diagonals  *((arr+i*n) + j)`
	int i,j;
	int l=4*pos_x;  // here define start point
	int k=(4*pos_x)+pos_y;
	while(k!=l && k<16){
			*(strt_add+k)=a;
			k+=3;
			l+=4;	       
		}
	if(k<16)
		*(strt_add+k)=a;
        // Right Diagonal
	k=(4*pos_x)+pos_y;
	l=(4*pos_x)+3;      //here define end point	
	while(k!=l && k<16){
                *(strt_add+k)=a;
		k+=5;
		l+=4;
        } 
	if(k<16)
		*(strt_add+k)=a;
	// + Sign Generate in matrix 
	for(i=0,k=4*pos_x,j=pos_y; i<4;i++,j+=4,k++){
		*(strt_add+k)=a;   
		*(strt_add+j)=a;
	}		
}

int queen(char name,string* strt_add,int pos_x,int pos_y,int* pos_stor,int i){
	i++;
	int k=(4*pos_x)+pos_y;
        cout<<"k="<<k;
	cout<<"("<<pos_x<<","<<pos_y<<")\n";
	if((*(strt_add+k))!="Q" ){
		for(int j=0;j<4;j++){
	//		int Q_pos_stor=2*i;
		 	if(i<4){
				plot_queen('Q',strt_add,pos_x,pos_y);// plot a queen
				print((string*) strt_add);
				queen(name,(string *)strt_add,i,j,(int *)pos_stor,i);
			}
			
			
			
			
			
			
			/**		if( (*(strt_add+k))!="Q"){
	//			string Q_name(1, *(name+i));
				cout<<"("<<pos_x<<","<<pos_y<<")\n";
				plot_queen(Q_name,strt_add,pos_x,pos_y);// plot a queen
				// Record Queen Position
	//			*(pos_stor+Q_pos_stor)=i;
	//			*(pos_stor+Q_pos_stor+1)=j;
				// Recursion
	//			print((string*) strt_add);
				if(i<4)
					queen((char *)name,(string *)strt_add,i,j,(int *)pos_stor,i); 
			} **/

		}
	}

	return 0;
}

int main(){
	int Q_pos[4][2]={{0,0},
	                 {0,0},
                         {0,0},
                         {0,0}	};
	char Q_Name='Q';
        string mat[4][4]={{"","","",""},
		          {"","","",""},
			  {"","","",""},
			  {"","","",""}
	                 };
     	
       //Plot Queen
      // plot_queen('Q',(string *)mat,1,3);
       int j=0;
      for(j;j<4;j++)
	       queen(Q_Name,(string *)mat,0,j,(int *)Q_pos,0 );	
cout<<"\n";
     /**  for(int i=0; i<4;i++){
	       for(int j=0; j<4;j++)
		       cout<<mat[i][j]<<"\t";
	       cout<<"\n";
       } **/ 
       cout<<"\n"<<"Queen Postions\n ";

       for(int i=0;i<4;i++)
	       cout<<Q_pos[i][0]<<","<<Q_pos[i][1];

       return 0;
}
