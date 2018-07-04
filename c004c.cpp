#include<stdio.h>
#include<stdlib.h>
int main(){
	int a,x,y,ans1,ans2;
	while(scanf("%d",&a)!=EOF)
	{
		for(int i=1;i<=a;i++)
		{
			scanf("%d %d",&x,&y);
			ans1=(x+y)/2;
			ans2=ans1-y;
			if(ans2<0||(ans1+ans2)!=x)
			{
				printf("impossible\n");
				continue;
			}
			printf("%d %d\n",ans1,ans2);
		}
	}
system("pause");
return 0;
}
