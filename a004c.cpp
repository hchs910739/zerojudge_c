#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(void){
    double x,y,a=0;
    while(scanf("%lf %lf",&x,&y)!=EOF)
    {
		a=atan(y/x);
		printf("%.2lf\n",a*180*(1/3.1415926));
		if(x>0&&y>0)printf("第一象限\n");
		else if(x==0)printf("Y軸\n");
		else if(y==0)printf("X軸\n");
		else if(x<0&&y>0)printf("第二象限\n");
		else if(x<0&&y<0)printf("第三象限\n");
		else printf("第四象限\n");
	}
system("pause");
return 0;
}
