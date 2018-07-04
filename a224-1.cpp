#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	int ans[27]={0},l,odd=0;
	char a[1010];
	while(scanf("%s",a)!=EOF)
	{
		l=strlen(a);
		for(int i=0;i<l;i++)
		{
			if(a[i]<='Z'&&a[i]>='A')
			{
				ans[a[i]-64]++;
			}
			else if(a[i]<='z'&&a[i]>='a')
			{
				ans[a[i]-96]++;
			}
		}
		for(int i=1;i<=26;i++)
		{
			if(ans[i]%2!=0)odd++;
			ans[i]=0;
		}
		if(odd>1)printf("no...\n");
		else printf("yes !\n");
		odd=0;
	}
system("pause");
return 0;
}
