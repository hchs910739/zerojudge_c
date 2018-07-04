#include<stdio.h>
#include<stdlib.h>
int main(){
	int a[1001],x,ans=0,c;
	while(scanf("%d",&x)!=EOF)
	{
		for(int i=1;i<=x;i++)scanf("%d",&a[i]);
		for(int i=1;i<=x;i++)
		{
			for(int j=i+1;j<=x;j++)
			{
				if(a[j]<=a[i])
				{
					c=a[j];
					a[j]=a[i];
					a[i]=c;
					ans++;
				}
			}
		}
		printf("Minimum exchange operations : %d\n",ans);
		ans=0;
	}
system("pause");
return 0;
}
