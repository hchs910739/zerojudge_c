#include<stdio.h>
#include<stdlib.h>
int main(){
    int x,a[51];
    a[1]=1;
    a[2]=2;
    while(scanf("%d",&x)!=EOF)
    {
                              if(x==0)break;
                              else if(x==1)printf("1\n");
                              else if(x==2)printf("2\n");
                              else
                              {
                                  for(int i=3;i<=x;i++)
                                  {
                                          a[i]=a[i-1]+a[i-2];
                                  }
                                  printf("%d\n",a[x]);
                              }
    }
system("pause");
return 0;
}
