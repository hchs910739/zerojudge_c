#include<stdio.h>
#include<stdlib.h>
int main(){
	int x,a,b;
	while(scanf("%d",&x)!=EOF)
	{
		for(int i=1;i<=x;i++)
		{
			scanf("%d %d",&a,&b);
			if(a>=b)
			{
				for(int j=a;;j++)
				{
					if(j%a==0&&j%b==0)
					{
						printf("%d\n",j);
						break;
					}
				}
			}
			else
			{
				for(int k=b;;k++)
				{
					if(k%a==0&&k%b==0)
					{
						printf("%d\n",k);
						break;
					}
				}
			}
		}
	}
system("pause");
return 0;
}
