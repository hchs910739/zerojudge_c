#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
	bool a[46341];
	for(int i=0;i<=46340;i++)a[i]=true;
	
	a[0]=false;
	a[1]=false;
	for(int i=2;i<=215;i++)
	{
		if(a[i])
		{
			for(int j=i*i;j<=46340;j=j+i)
			{
				if(a[j])a[j]=false;
			}
		}
	}
	int prar[4793],num=1;
	for(int i=2;i<=46340;i++)
	{
		if(a[i])prar[num++]=i;
	}
	int x,y;
	while(scanf("%d",&x)!=EOF)
	{
		y=int(sqrt(x));	
		bool prime=true;
		if(x==0)break;
		else if(x==1)printf("獶借计\n");
		else if(x==2)printf("借计\n");
		else if(x==2147483647)printf("借计\n");
		else if(x%2==0&&x!=2)printf("獶借计\n");
		else if(x%3==0&&x!=3)printf("獶借计\n");
		else
		{
			for(int i=1;i<=4792;i++)
			{
				if(x%prar[i]==0)
				{
					prime=false;
					printf("獶借计\n");
					break;
				}
				else if(y<prar[i])break;
			}
			if(prime)printf("借计\n");
		}
	}
return 0;
}
