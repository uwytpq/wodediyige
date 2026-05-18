#include <stdio.h>
#include <stdlib.h>

struct Node{
	int a;
	struct Node *next;
};

int main(){
	struct Node *hear=NULL;
	
	
	struct Node *now1=(struct Node *)malloc(sizeof(struct Node));
	now1->a=1;
	now1->next=NULL;
	hear=now1;
	
	struct Node *now2=(struct Node*)malloc(sizeof(struct Node));
	now2->a=2;
	now2->next=NULL;
	
	struct Node *p=hear;
	
	while(p->next!=NULL){
		p=p->next;
	}
	
	p->next=now2;
	
	p=hear;
	
	while(p!=NULL){
		printf("%d ",p->a);//前两个尾插节点1，2 
		p=p->next;
	}
	
	printf("\n");
	
	struct Node *now3=(struct Node*)malloc(sizeof(struct Node));
	now3->a=3;
	now3->next=NULL;
	
	p=hear;
	
	while(p->next!=NULL){
		p=p->next;
	}
	
	p->next=now3;
	
	while(hear!=NULL){
		printf("%d ",hear->a);
		hear=hear->next;
	}
	
	return 0;
}




