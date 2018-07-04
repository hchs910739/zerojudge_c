#include<stdio.h>
#include<stdlib.h>
int main(){
    int a,b[1000],i,ans=0;
    while(scanf("%d",&a)!=EOF)
    {
                              for(i=1;i<=a;i++)
                              {
                                               scanf("%d",&b[i]);
                                               if(b[i]>ans)ans=b[i];
                              }
                              printf("%d\n",ans);
                              ans=0;
    }
system("pause");
return 0;
}
