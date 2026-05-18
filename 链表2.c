#include <stdio.h>
#include <stdlib.h>

struct Node{
	int a;
	struct Node *next;
};


int main(){
	int i=0;
	
	struct Node *hear=(struct Node*)malloc(sizeof(struct Node));
	struct Node *nowhear=(struct Node*)malloc(sizeof(struct Node));
	
	hear->a=100;
	nowhear->a=200;
	hear->next=nowhear;
	nowhear->next=NULL;

	struct Node *p=hear;
	
	while(p!=NULL){
		printf("hear和nowhear的节点a的值 %d\n",p->a);
		p=p->next;
	}
	
	struct Node *dian=(struct Node*)malloc(sizeof(struct Node));
	dian->a=56;
	dian->next=hear;
	
	p=dian; 
	
	while(p!=NULL){
		printf("dian hear nowhear %d\n",p->a);
		p=p->next;
	}
	
	return 0;
}


