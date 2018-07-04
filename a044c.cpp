#include<stdio.h>
#include<stdlib.h>
int main(){
    int i,x,a=0,b=0,ans=0;
    while(scanf("%d",&x)!=EOF)
    {
                              for(i=1;i<=x;i++)
                              {
                                               b=b+i;
                                               a++;
                              }
                              ans=a+b;
                              printf("%d\n",ans);
                              ans=0;
                              b=0;
                              a=0;
    }
system("pause");
return 0;
}
