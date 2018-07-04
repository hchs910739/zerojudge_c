#include<stdio.h>
#include<stdlib.h>
int main(){
	double x,y;
	while(scanf("%lf %lf",&x,&y)!=EOF)
	{
		printf("%.4lf\n",(1000*x)/y);
	}
system("pause");
return 0;
}
