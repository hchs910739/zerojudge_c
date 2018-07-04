#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
	int ca,cb,cc,cd,x,a,b,c,d;
	while(scanf("%d %d %d %d",&ca,&cb,&cc,&cd)!=EOF)
	{
		int ct[10]={0};
		for(int i=0;i<=9;i++)
		{
			if(ca==i)ct[i]++;
			if(cb==i)ct[i]++;
			if(cc==i)ct[i]++;
			if(cd==i)ct[i]++;
		}
		scanf("%d",&x);
		for(int i=1;i<=x;i++)
		{
			scanf("%d %d %d %d",&a,&b,&c,&d);
			int t[10]={0},A=0,B=0;
			for(int j=0;j<=9;j++)
			{
				if(a==j)t[j]++;
				if(b==j)t[j]++;
				if(c==j)t[j]++;
				if(d==j)t[j]++;
			}
			for(int k=0;k<=9;k++)
			{
				if(ct[k]!=0&&t[k]!=0)
				{
					if(ct[k]==t[k])B=B+ct[k];
					else if(ct[k]>t[k])B=B+t[k];
					else if(ct[k]<t[k])B=B+ct[k];
				}
			}
			if(ca==a)
			{
				B--;
				A++;
			}
			if(cb==b)
			{
				B--;
				A++;
			}
			if(cc==c)
			{
				B--;
				A++;
			}
			if(cd==d)
			{
				B--;
				A++;
			}
			printf("%dA%dB\n",A,B);
		}
	}
system("pause");
return 0;
}
