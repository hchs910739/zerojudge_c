#include<stdio.h>
#include<stdlib.h>
int main(){
    int a[10001],x;
    a[1]=1;
    a[2]=2;
    while(scanf("%d",&x)!=EOF)
    {
                              for(int i=3;i<=x;i++)
                              {
                                      a[i]=a[i-1]+a[i-2];
                                      a[i]=a[i]%2012;
                              }
                              printf("%d\n",a[x]);
    } 
system("pause");
return 0;
}
