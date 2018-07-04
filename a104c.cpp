#include<stdio.h>
#include<stdlib.h>
int main(){
    int x,a[1001],max=0;
    while(scanf("%d",&x)!=EOF)
    {
                              for(int i=1;i<=x;i++)
                              {
                                      scanf("%d",&a[i]);
                                      if(a[i]>max)max=a[i];
                              }
                              for(int j=0;j<=max;j++)
                              {
                                      for(int k=1;k<=x;k++)
                                      {
                                              if(a[k]==j)printf("%d ",a[k]);
                                      }
                              }
                              printf("\n");
                              max=0;
    }
system("pause");
return 0;
}
