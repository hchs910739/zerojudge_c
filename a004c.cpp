#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(void){
    double x,y,a=0;
    while(scanf("%lf %lf",&x,&y)!=EOF)
    {
		a=atan(y/x);
		printf("%.2lf\n",a*180*(1/3.1415926));
		if(x>0&&y>0)printf("�Ĥ@�H��\n");
		else if(x==0)printf("Y�b\n");
		else if(y==0)printf("X�b\n");
		else if(x<0&&y>0)printf("�ĤG�H��\n");
		else if(x<0&&y<0)printf("�ĤT�H��\n");
		else printf("�ĥ|�H��\n");
	}
system("pause");
return 0;
}
