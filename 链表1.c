#include <stdio.h>
#include <stdlib.h>//动态分配

	struct Node{
		int a;
		struct Node *next;
	};


int main(){
	
	struct Node *head;
	head=(struct Node*)malloc(sizeof(struct Node));
	
	head->a=10;
	head->next=NULL;
	
	printf("第一个节点数据 %d \n",head->a);
	
	struct Node *second;
	second=(struct Node*)malloc(sizeof(struct Node));
	second->a=20;
	head->next=second;
	
	struct Node *p=head;
	
	struct Node *san=(struct Node *)malloc(sizeof(struct Node));
	
	san->a=30;
	san->next=NULL;
	second->next=san;
	
	while(p!=NULL){
		printf("节点数据为%d\n",p->a);
		p=p->next;
	}
	
	
	return 0;
}

