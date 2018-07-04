#include<stdio.h>
#include<stdlib.h>
int main(){
	int a,b,n;
	while(scanf("%d %d %d",&a,&b,&n)!=EOF)
	{
		printf("%d.",a/b);
		for(int i=1;i<=n;i++)
		{
			a=a%b;
			a=a*10;
			printf("%d",a/b);
		}
		printf("\n");
	}
system("pause");
return 0;
}
