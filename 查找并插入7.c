#include <stdio.h>
#include <stdlib.h>

struct node{
	int a;
	struct node *next;
};

int main(){
		
		
	struct node *hear=NULL;
	struct node *tail=NULL;
	
	int i;
	for(i=1;i<=10;i++){
		struct node *now=(struct node*)malloc(sizeof(struct node));
		now->a=i;
		now->next=NULL;
		
		if(hear==NULL){
			hear=now;
			tail=now;
		} else{
			tail->next=now;
			tail=now;
		}
	}
	
	struct node *p=hear;
	while(p!=NULL){
		printf("%d ",p->a);
		p=p->next;
	}
	
	printf("\n");
	int a=6;
	
	struct node *x=hear;//±éÀúÑ°ÕÒ
	
	while(x!=NULL){
		if(x->a==6){
			
			struct node *now=(struct node *)malloc(sizeof(struct node));
			now->a=100; 
			now->next=x->next;
			x->next=now;
			break;
		}
		x=x->next;
	}
	
	p=hear;
	while(p!=NULL){
		printf("%d ",p->a);
		p=p->next;
	}
	
	return 0; 
}
