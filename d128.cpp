#include<stdio.h>
#include<stdlib.h>
int main(){
	int a,b,c,m,n;
	while(scanf("%d %d %d",&a,&b,&c)!=EOF)
	{
		if(a>=b)
		{
			if(b>=c)//abc
			{
				m=((b*10)+c)*a;
				n=a*b*c;
				if(m>n)printf("%d\n",m);
				else printf("%d\n",n);
			}
			else if(c>=b)
			{
				if(a>=c)//acb
				{
					m=((c*10)+b)*a;
					n=a*b*c;
					if(m>n)printf("%d\n",m);
					else printf("%d\n",n);
				}
				else if(c>=a)//cab
				{
					m=((a*10)+b)*c;
					n=a*b*c;
					if(m>n)printf("%d\n",m);
					else printf("%d\n",n);
				}
			}
		}
		else if(b>a)
		{
			if(a>=c)//bac
			{
				m=((a*10)+c)*b;
				n=a*b*c;
				if(m>n)printf("%d\n",m);
				else printf("%d\n",n);
			}
			else if(c>a)
			{
				if(b>c)//bca
				{
					m=((c*10)+a)*b;
					n=a*b*c;
					if(m>n)printf("%d\n",m);
					else printf("%d\n",n);
				}
				else if(c>b)//cba
				{
					m=((b*10)+a)*c;
					n=a*b*c;
					if(m>n)printf("%d\n",m);
					else printf("%d\n",n);
				}
			}
		}
	}
system("pause");
return 0;
}
