#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	int l;
	char a[35];
	while(scanf("%s",a)!=EOF)
	{
		bool t[5],y1=false,y2=false;
		for(int j=1;j<=3;j++)t[j]=false;
		int ans=0;
		l=strlen(a);
		if(l>=8)t[1]=true;
		for(int i=0;i<l;i++)
		{
			if(a[i]<='Z'&&a[i]>='A')y1=true;
			if(a[i]<='z'&&a[i]>='a')y2=true;
			if(((a[i]<'A')||(a[i]>'Z'&&a[i]<'a')||(a[i]>'z'))&&(y1==true||y2==true))t[3]=true;
		}
		if(y1==true&&y2==true)t[2]=true;
		for(int k=1;k<=3;k++)
		{
			if(t[k])ans++;
		}
		if(ans==1)printf("This password is ACCEPTABLE\n");
		else if(ans==2)printf("This password is GOOD\n");
		else if(ans==3)printf("This password is STRONG\n");
		else if(ans==0)printf("This password is WEAK\n");
	}
system("pause");
return 0;
}
