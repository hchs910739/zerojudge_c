#include<stdio.h>
#include<stdlib.h>
int main(){
	long long int x,y;
	int n;
	while(scanf("%d",&n)!=EOF)
	{
		for(int i=1;i<=n;i++)
		{
			scanf("%o %o",&x,&y);
			printf("%X\n",x+y);
		}
	}
system("pause");
return 0;
}
