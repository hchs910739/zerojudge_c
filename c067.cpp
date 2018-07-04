#include<stdio.h>
#include<stdlib.h>
int main(){
	int x,a[51],all=0,n,ans=0,t=1;
	while(scanf("%d",&x)!=EOF)
	{
		if(x==0)break;
		for(int i=1;i<=x;i++)
		{
			scanf("%d",&a[i]);
			all=all+a[i];
		}
		n=all/x;
		for(int i=1;i<=x;i++)
		{
			if(a[i]>n)ans=ans+(a[i]-n);
		}
		printf("Set #%d\n",t++);
		printf("The minimum number of moves is %d.\n",ans);
		all=0;
		ans=0;
	}
system("pause");
return 0;
}
