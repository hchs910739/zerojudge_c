#include<stdio.h>
#include<stdlib.h>
int main(void){
    int x;
    long long int a[10000][4];
    while(scanf("%d",&x)!=EOF)
    {
                              for(int i=1;i<=x;i++)
                              {
                                      scanf("%lld %lld %lld",&a[i][1],&a[i][2],&a[i][3]);
                              }
                              for(int j=1;j<=x;j++)
                              {
                                      if(a[j][1]==1)
                                      {
                                                    printf("%lld\n",a[j][2]+a[j][3]);
                                      }
                                      else if(a[j][1]==2)
                                      {
                                           printf("%lld\n",a[j][2]-a[j][3]);
                                      }
                                      else if(a[j][1]==3)
                                      {
                                           printf("%lld\n",a[j][2]*a[j][3]);
                                      }
                                      else if(a[j][1]==4)
                                      {
                                           printf("%lld\n",a[j][2]/a[j][3]);
                                      }
                              }
    }
system("pause");
return 0;
}
