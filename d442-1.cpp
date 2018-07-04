#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	bool ans[1000];
	int x,y,a,n=0,t=0,z=0;
	for(int i=1;i<=729;i++)
	{
        a=i;
        while(n!=i)
        {
            while(a>0)
            {
                n=n+(a%10)*(a%10);
                a=a/10;    
            }
            a=n;
            //printf("%d %d \n",a,i);
            if(a==1)
            {
                t=0;
                break;
            }
            else if(a==4)
            {
                t=1;
                break;
            }
            n=0;
        }
        if(t==0)ans[i]=true;
        else if(t==1)ans[i]=false;
        t=0;
        n=0;
	}
	char ha[11];
	int l,all=0,num;
	while(scanf("%d",&num)!=EOF)
	{
		for(int k=1;k<=num;k++)
		{
			scanf("%s",ha);
			z++;
			l=strlen(ha);
			for(int i=0;i<l;i++)
			{
				all=all+(ha[i]-48)*(ha[i]-48);
			}
			if(ans[all]==true)printf("Case #%d: %s is a Happy number.\n",z,ha);
			else printf("Case #%d: %s is an Unhappy number.\n",z,ha);
			all=0;
		}
	}
system("pause");
return 0;
}
