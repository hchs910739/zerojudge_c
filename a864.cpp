#include<stdio.h>
#include<stdlib.h>
int main(){
	char name[100];
	double a,b;
	char c;
	while(scanf("%s",name)!=EOF)
	{
		if(name[0]=='E'&&name[1]=='N'&&name[2]=='D')break;
		scanf("%lf %lf",&a,&b);
		if(a-b<=-0.251)c='O';
		else if(a-b<=-0.001&&a-b>=-0.25)c='B';
		else if(a-b<=0.249&&a-b>=0)c='A';
		else if(a-b<=0.499&&a-b>=0.25)c='F';
		else if(a-b<=0.999&&a-b>=0.5)c='G';
		else if(a-b<=1.499&&a-b>=1)c='K';
		else if(a-b<=2&&a-b>=1.5)c='M';
		printf("%s %.2lf %c\n",name,a-b,c);
	}
system("pause");
return 0;
}
