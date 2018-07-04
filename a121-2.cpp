#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
	int a,b;
	while(scanf("%d %d",&a,&b)!=EOF)
	{
		int ans=0;
		if(a!=2&&a%2==0)a++;
		if(b!=2&&b%2==0)b--;
		for(int i=a;i<=b;i=i+2)
		{
			for(int j=3;j<=sqrt(i);j++)
			{
				if(j%2==0)continue;
				
			}
		}
	}
system("pause");
return 0;
}
