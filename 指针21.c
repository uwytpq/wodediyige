#include <stdio.h>

typedef struct{
	int xue;
	char name[20];
}student;
 
int main(){
	student a={1,"³Â±úÀ¤"};
	student *p;
	p=&a;
	printf("%d %s",p->xue,p->name);
	
	
	
	
	
	return 0;
}







