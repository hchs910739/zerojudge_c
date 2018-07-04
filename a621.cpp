#include<stdio.h>
#include<stdlib.h>
int main(){
    int x,ans=1;
    while(scanf("%d",&x)!=EOF)
    {
                              printf("2^0 = 1\n");
                              for(int i=1;i<=x;i++)
                              {
                                      ans=ans*2;
                                      printf("2^%d = %d\n",i,ans);
                              }
                              ans=1;
    }
system("pause");
return 0;
}
