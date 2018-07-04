#include<stdio.h>
#include<stdlib.h>
int main(){
	int n,a,b,c;
	while(scanf("%d",&n)!=EOF)
	{
		for(int i=1;i<=n;i++)
		{
			int empty=0,drink=0;
			scanf("%d %d %d",&a,&b,&c);
			empty=a+b;
			while(empty/c!=0)
			{
				drink=drink+empty/c;
				empty=(empty%c)+(empty/c);
			}
			printf("%d\n",drink);
		}
	}
system("pause");
return 0;
}
