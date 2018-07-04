#include<stdio.h>
#include<stdlib.h>
int main(){
	long long int n=30000,x,ans[30001]={0},c[5]={1,5,10,25,50};
	ans[0]=1;
	for(long long int i=0;i<5;i++)
	{
		for(long long int j=c[i];j<=n;j++)
		{
			ans[j]=ans[j]+ans[j-c[i]];
		}
	}
	while(scanf("%lld",&x)!=EOF)
	{
		if(ans[x]>1)printf("There are %lld ways to produce %lld cents change. \n",ans[x],x);
		else if(ans[x]==1)printf("There is only %lld way to produce %lld cents change.\n",ans[x],x);
	}
system("pause");
return 0;
}
