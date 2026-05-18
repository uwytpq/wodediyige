#include <stdio.h>
#include <stdlib.h>

struct node {
	int a;
	struct node *next;
};

	void fan(struct node **x,int shu){
		struct node *now=(struct node*)malloc(sizeof(struct node));
		now->a=shu;
		now->next=*x;
		*x=now;
	}

int main(){
	struct node *hear=NULL;
	
	int i;
	for(i=1;i<=10;i++){
		fan(&hear,i);
	}
	
	
	
	struct node *p=hear;
	
	while(p!=NULL){
		printf("%d ",p->a);
		p=p->next;
	}
	
	
	
}
