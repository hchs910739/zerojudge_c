#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
    long long int x,y,ans=1;
    while(scanf("%lld %lld",&x,&y)!=EOF)
    {
		if(x==0&&y==0)break;
		else
		{
			for(int i=1;i<=y;i++)
			{
				ans=ans*x;
			}
			printf("%lld\n",ans);
			ans=1;
		}
    }
system("pause");
return 0;
}
