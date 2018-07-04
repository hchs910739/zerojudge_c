#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<iostream>
using namespace std;
int main(){
	char a[1001];
	int x,n[256],ans[256]={0},A,N;
	while(1)
	{
		cin.getline(a,1001);
		x=strlen(a);
		for(int i=0;i<x;i++)
		{
			n[a[i]]=a[i];
			ans[a[i]]++;
		}
		for(int i=0;i<255;i++)
		{
			for(int j=i+1;j<=255;j++)
			{
				if(ans[i]==0||ans[j]==0)continue;
				if(ans[j]<ans[i])
				{
					N=n[j];
					n[j]=n[i];
					n[i]=N;
					A=ans[j];
					ans[j]=ans[i];
					ans[i]=A;
				}
			}
		}
		for(int i=0;i<255;i++)
		{
			if(ans[i]==0)continue;
			printf("%d %d\n",n[i],ans[i]);
			ans[i]=0;
		}
	}
system("pause");
return 0;
}
