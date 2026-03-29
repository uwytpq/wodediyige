#include <stdio.h>
void fun(int *arr,int n){
	int *a=arr;
	int i=0;
	for(i=0;i<n;i++){
	if(*a % 2==0){
		*a*=2;
		} else {
			*a/=3;
		}
		a++;
	}
}
 int main(){
 	int narr[10]={11,12,13,14,15,16,17,18,19,20};
 	int nnarr[10]={11,12,13,14,15,16,17,18,19,20};
 	fun(narr,10);
 	
 	
 	int a=0;
 	for(a=0;a<10;a++){
 		if(nnarr[a] % 2 !=0){
 			printf("%d,",narr[a]);
			 } 
		 }
	for(a=0;a<10;a++){
		if(nnarr[a] % 2==0){
			printf("%d,",narr[a]);
		}
	} 
 	

 	
 	return 0;
 }













