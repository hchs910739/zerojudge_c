#include<stdio.h>
#include<stdlib.h>
int gcd(int a,int b)
{
	int c;
	while(a!=0&&b!=0)
	{
		c=a%b;
	    a=b;
	    b=c;
	}
    return a;
}
int main(){
	int n;
	while(scanf("%d",&n)!=EOF)
	{
		int G=0;
		if(n==0)break;
		for(int i=1;i<n;i++)
		{
			for(int j=i+1;j<=n;j++)
			{
			    G=G+gcd(i,j);
			}
		}
		printf("%d\n",G);
		/* GCD()―ㄢ块计程そ计ㄧ计*/
	}
system("pause");
return 0;
}
