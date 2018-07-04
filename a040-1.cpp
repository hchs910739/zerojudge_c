#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
	int x,y,a,b,ans;
	while(scanf("%d %d",&x,&y)!=EOF)
	{
		bool t=false;
		for(int i=x;i<=y;i++)
		{
			a=i;
			b=i;
			double num=0,n=1;
			while((a/10)!=0)
			{
				n++;
				a=a/10;
			}
			//printf("%d ",n);
			for(int j=1;j<=n;j++)
			{
				num=num+pow((b%10),n);
				//printf("%lf ",num);
				b=b/10;
			}
			ans=(int)num;
			//printf("%d ",ans);
			if(ans==i)
			{
				t=true;
				printf("%d ",i);
			}
		}
		if(t==false)
		{
			printf("none\n");
		}
		else printf("\n");
	}
system("pause");
return 0;
}
