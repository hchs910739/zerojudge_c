#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	char x[101];
	int a,d;
	while(scanf("%s",x)!=EOF)
	{
		a=strlen(x);
		for(int i=0;i<a;i++)x[i]=x[i]-48;
		for(int i=a-1;i>=1;i--)
		{
			d=x[i];
			if(x[i-1]-(5*d)<0)
			{
				x[i-2]--;
				x[i+1]=x[i+1]+10;
			}
			else
			{
				x[i-1]=x[i-1]-(5*d);
			}
		}
		for(int i=0;i<a;i++)printf("%d ",x[i]);
		printf("\n");
	}
system("pause");
return 0;
}
