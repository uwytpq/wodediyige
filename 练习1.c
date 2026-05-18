#include <stdio.h>

	int main (){
	printf ("输入两个整数\n");
		int m ,n = 0;
		scanf ("%d%d",&m,&n);
		if (n == 0){printf ("n不能输入0\n");
		}
		
		printf ("除法  %d / %d = %d\n",m,n,m/n);
		
		printf ("取余  %d %% %d = %d\n",m,n,m%n);
		
		printf ("浮点数  %d / %d = %.2f\n",m,n,(float)m/n);
		
		return 0;
		
	}










