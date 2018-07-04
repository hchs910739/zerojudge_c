#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	char a[200000];
	int x;
	while(1)
	{
		gets(a);
		x=strlen(a);
		for(int i=0;i<x;i+=2)
		{
			for(int j=i+2;j<x;j+=2)
			{
				if(a[i]==a[j])
				{
					//printf("%c %c\n",a[i],a[j]);
					for(int k=j+2;k<x;k+=2)
					{
						if(a[k]==a[i])
						{
							a[i]=2;
							a[j]=2;
							a[k]=2;
							//printf("%d %d %d\n",i,j,k);
							break;
						}
					}
					break;
				}
			}
		}
		for(int i=0;i<x;i+=2)
		{
			if(a[i]!=2)
			{
				printf("%c\n",a[i]);
				break;
			}
		}
	}
system("pause");
return 0;
}
