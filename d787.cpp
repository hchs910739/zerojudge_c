#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    int x,A,B,l,ans=0;
    char c,d;
    while(scanf("%d",&x)!=EOF)
    {
        for(int i=1;i<=x;i++)
        {
			char all[101]={0},a[101]={0},b[101]={0};
			scanf("%s %s",a,b);
			A=strlen(a);
			B=strlen(b);
			if(A>B)l=A;
			else l=B;
			//for(int j=0;j<l;j++)printf("%d %d\n",a[j]-48,b[j]-48);
			for(int j=A-1,k=0;j>=(A+1)/2;j--,k++)
			{
				c=a[j];
				a[j]=a[k];
				a[k]=c;
			}
			for(int j=B-1,k=0;j>=(B+1)/2;j--,k++)
			{
				d=b[j];
				b[j]=b[k];
				b[k]=d;
			}
			//for(int j=0;j<l;j++)printf("%d %d\n",a[j]-48,b[j]-48);
			for(int j=0;j<l;j++)
			{
				if(a[j]==0)a[j]=48;
				if(b[j]==0)b[j]=48;
				//printf("%d %d\n",a[j]-48,b[j]-48);
				all[j]=all[j]+(a[j]+b[j]-96);
				if(all[j]>9)
				{
					all[j+1]++;
					all[j]=all[j]%10;
					ans++;
				}
				all[j]=0;
			}
			printf("%d\n",ans);
			ans=0;
		}
    }
system("pause");
return 0;
}
