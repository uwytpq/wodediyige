#include <stdio.h>
#include <stdlib.h>

struct node {
	int a;
	struct node *next;
};

void fan(struct node **x,int shu,struct node **y){
	struct node *now=(struct node*)malloc(sizeof(struct node));
	
	now->a=shu;
	now->next=NULL;
	
	if(*x==NULL){
		*x=now;
		*y=now;
	} else{
		(*y)->next=now;
		*y=now;
	}
}

int main(){
	int i=1;
	struct node *hear=NULL;
	struct node *tail=NULL;
	
	for(i=1;i<=10;i++){
		fan(&hear,i,&tail);
	}
	
	struct node *p=hear;
	
	while(p!=NULL){
		printf("%d ",p->a);
		p=p->next;
	}
	
}


