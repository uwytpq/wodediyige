#include <stdio.h>

int main(){
	printf("ÊäÈëÒ»´®×Ö·û´®\n");
	char str [20];
	scanf("%s",str);
	
	char a;
	int i=0,j=0;
	while(str[i]!='\0'){
		j++;
		i++;
	} 
	printf("%d\n",j);
	int n=0;
	for (n=0;n<6;n++){
		printf("%c",str[j]);
		j--;
	}

	

	
	
	return 0;
}


