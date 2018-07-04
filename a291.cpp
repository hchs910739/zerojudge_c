#include<stdio.h>
#include<stdlib.h>
int main(){
	int a[5],x,b[5],A=0,B=0,c[5];
	while(scanf("%d %d %d %d %d",&a[1],&a[2],&a[3],&a[4],&x)!=EOF)
	{
		for(int i=1;i<=x;i++)
		{
			scanf("%d %d %d %d",&b[1],&b[2],&b[3],&b[4]);
			c[1]=a[1];
			c[2]=a[2];
			c[3]=a[3];
			c[4]=a[4];
			if(a[1]==b[1])
			{
				A++;
				b[1]=10;
				c[1]=11;
			}
			if(a[2]==b[2])
			{
				A++;
				b[2]=10;
				c[2]=11;
			}
			if(a[3]==b[3])
			{
				A++;
				b[3]=10;
				c[3]=11;
			}
			if(a[4]==b[4])
			{
				A++;
				b[4]=10;
				c[4]=11;
			}
			for(int j=1;j<=4;j++)
			{
				for(int k=1;k<=4;k++)
				{
					if(c[j]==b[k])B++;
				}
			}
			printf("%dA%dB\n",A,B);
			A=0;
			B=0;
		}
	}
system("pause");
return 0;
}
