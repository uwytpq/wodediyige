#include <time.h>
#include <stdlib.h>
int main(){
	
	
	Sleep(500);
	int a;
	srand((unsigned int)time(NULL));
	a=rand() % 10 ;
	printf("%d",a);
	return 0;
}
