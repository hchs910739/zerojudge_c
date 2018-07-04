#include<stdio.h>
#include<stdlib.h>
int main(){
    int x,n=1,y=0,z=0;
    char *a,ans[10000],num[10000];
    while(scanf("%d",&x)!=EOF)
    {
				 a=(char *)malloc(sizeof(char));
                 scanf("%s",a);
                 for(int i=0;i<x;i++)
                 {
                         if(a[i]==a[i+1])n++;
                         else
                         {
                             num[y++]=n;
                             ans[z++]=a[i];
                             n=1;
                         }
                 }
                 if((z+y)>=x)
                 {
                           for(int k=0;k<x;k++)printf("%c",a[k]);
                 }
                 else
                 {
                     for(int j=0;j<y;j++)
                     {
                             printf("%d",num[j]);
                             printf("%c",ans[j]);
                     }
                 }
                 printf("\n");
                 y=0;
                 z=0;           
    }
system("pause");
return 0;
}
