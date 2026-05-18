#include <stdio.h>
#include <stdlib.h>

struct Node{
	int a;
	struct Node *next;
};

int main(){
	struct Node *hear=(struct Node*)malloc(sizeof(struct Node));
	hear->a=0;
	hear->next=NULL;
	
	
	int i=1;
	for(i=1;i<=10;i++){
		struct Node *nowhear=(struct Node*)malloc(sizeof(struct Node));
		nowhear->a=i;
		nowhear->next=hear;
		hear=nowhear;
	}
	struct Node *p=hear;
	
	while(hear!=NULL){
		printf("%d ",hear->a);
		hear=hear->next;
	}
	
	
	return 0;
}










