#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	char a[1001],b[1001];
	int l,x=0;
	bool t=true;
	while(scanf("%s",a)!=EOF)
	{
		l=strlen(a);
		for(int i=0;i<l;i++)
		{
			if((a[i]<='z'&&a[i]>='a')||(a[i]<='Z'&&a[i]>='A'))
			{
				if(a[i]<='Z')a[i]=a[i]+32;
				b[x++]=a[i];
			}
		}
		for(int i=0,j=x-1;i<x/2;i++,j--)
		{
			if(b[i]!=b[j])
			{
				t=false;
				break;
			}
		}
		if(t)printf("yes !\n");
		else printf("no...\n");
		x=0;
		t=true;
	}
system("pause");
return 0;
}
