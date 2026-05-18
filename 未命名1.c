#include <stdio.h>
int  main(){
long long int s,f;
int n;

	f=1;
	s=0;
	for(n=1;n<20;n++){
		f*=n;
		s+=f;
	}
	
	printf("%lld",s);
	
	
	
	return 0;
}




