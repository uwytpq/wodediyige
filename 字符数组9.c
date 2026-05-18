#include <stdio.h>
#include <time.h>
#include <string.h>
int main(){
	printf("欢迎 S级新生 !! \n"
			"  				\n"
			"    路明非 !!  " 
	);
	getchar();
	
	printf("\n请输入姓名\n");
	char str[20];
	scanf("%s",str);
	printf("请输入密码\n");
	char mi[50];
	scanf("%s",mi);
	printf("现进行人机验证\n");
	srand((unsigned int)time(NULL));
	int n=rand()%9000/100; 
	printf("输入比%d大10的数\n",n);
	int x=0;
	scanf("%d",&x);
	while(1){
			if(x!=n+10){
		printf("验证失败\n");
		return 0;
		} else{
			printf("验证成功\n");
			break;
		}
	}
	char ch[10]="路明非";
	char nmi[50]="2025173076anwoxihuananjiayu";
	if(strcmp(str,ch)!=0){
		printf("姓名输入错误\n");
		return 0; 
	} else{
		if(strcmp(mi,nmi)!=0){
			printf("密码错误\n");
			return 0;
		} else{
			printf("信息正确\n");
			getchar();
		}
	}

	printf("欢迎你 路明非 ！！\n");
	printf("你收到一封信件\n");
	getchar();
	printf("亲爱的路明非，我是陈雯雯,下周一我们有个同学聚会希望你能来参加"
			"													  -陈雯雯"
	);
	return 0;
}
