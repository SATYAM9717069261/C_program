#include<bits/stdc++.h>
using namespace std;
struct node{
	int data;
	struct node *next;
};

struct node* head=NULL;
struct node* tail=NULL;
node* insert(int in_data,node* address){
	struct node* ptr=(node*)malloc(sizeof(struct node));
	ptr->data=in_data;
	if(head==NULL){
		head=ptr;
		return ptr;
	}
        address->next=ptr;
	return ptr;
}

void swap(int* a,int* b){
	int temp=*a;
	*a=*b;
	*b=temp;
}

void merge_sort(int n){
	struct node* l=head;
       for(int i=0; i<n;i++){
	       for(int j=0;j<(n-1)-i;j++){
		       if( (l->data) > (l->next->data) ){
//			       cout<<"swap "<< (l->data) <<","<<(l->next->data)<<"\n";
			       swap( (l->data) , (l->next->data)  );
		       }
		        l=(l->next);
	       }
	       l=head;
       }
}

int main(){
       int j,data;
       cout<<"How many Element ->";
       cin>>j;
       for(int k=0;k<j;k++){
	       cin>>data;
	       tail=insert(data,tail);
       }


       merge_sort(j);
	struct node* i=head;
	for(i;(i->next)!=NULL;i=(i->next))   
            cout<<i->data<<"\t";
      cout<<i->data;


	return 0;
}






















