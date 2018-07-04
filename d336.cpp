#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	int x,l,ans=0;
	char a[9001];
	while(scanf("%d",&x)!=EOF)
	{
		for(int i=1;i<=x;i++)
		{
			scanf("%s",a);
			l=strlen(a);
			if(l%2==1)
			{
				for(int j=l-1;j>=0;j--)
				{
					if(a[j]==49)
					{
						if(j%2==0)ans=ans+a[j]-48;
						else ans=ans+a[j]-47;
					}
				}
			}
			else
			{
				for(int j=l-1;j>=0;j--)
				{
					if(a[j]==49)
					{
						if(j%2==0)ans=ans+a[j]-47;
						else ans=ans+a[j]-48;
					}
				}
			}
			if(ans%3==0)printf("Yes\n");
			else printf("No\n");
			ans=0;
		}
	}
system("pause");
return 0;
}
