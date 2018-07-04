#include<stdio.h>
#include<stdlib.h>
int main(){
    int y[1001],ans=0,x,ave=0;
    while(scanf("%d",&x)!=EOF)
    {
                              if(x==0)break;
                              for(int i=1;i<=x;i++)
                              {
                                      scanf("%d",&y[i]);
                                      ave=ave+y[i];
                              }
                              for(int j=1;j<=x;j++)
                              {
                                      if(ave>(y[j]*x))ans++;
                              }
                              printf("%d\n",ans);
                              ans=0;
                              ave=0;
    }
system("pause");
return 0;
}
