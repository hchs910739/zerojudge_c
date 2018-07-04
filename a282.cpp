#include<stdio.h>
#include<stdlib.h>
int main(){
	bool ans[2010];
	for(int i=0;i<=2000;i++)ans[i]=false;
	int x,a;
	while(scanf("%d",&x)!=EOF)
	{
		for(int i=1;i<=x;i++)
		{
			scanf("%d",&a);
			ans[a]=true;
		}
		for(int i=1;i<=2000;i++)
		{
			if(ans[i]==false)
			{
				printf("%d\n",i);
				break;
			}
		}
		for(int i=0;i<=2000;i++)ans[i]=false;
	}
system("pause");
return 0;
}
