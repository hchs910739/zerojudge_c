#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
	int x,a,b,c,d;
	while(scanf("%d",&x)!=EOF)
	{
		for(int i=1;i<=x;i++)
		{
			scanf("%d %d %d %d",&a,&b,&c,&d);
			if(c-a==0)printf("%d\n",abs(d-b)+1);
			else if(d-b==0)printf("%d\n",abs(c-a)+1);
			else if(abs(c-a)<abs(d-b))
			{
				for(int j=abs(c-a);j>=1;j--)
				{
					if(abs(c-a)%j==0&&abs(d-b)%j==0)
					{
						printf("%d\n",j+1);
						break;
					}
				}
			}
			else 
			{
				for(int j=abs(d-b);j>=1;j--)
				{
					if(abs(c-a)%j==0&&abs(d-b)%j==0)
					{
						printf("%d\n",j+1);
						break;
					}
				}
			}
		}
	}
system("pause");
return 0;
}
