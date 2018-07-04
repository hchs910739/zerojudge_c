#include<stdio.h>
#include<stdlib.h>
int main(){
    int x,a[1001],n=0,ans[1001],z=1,t=0,c;
    while(scanf("%d",&x)!=EOF)
    {
                              for(int i=1;i<=x;i++)
                              {
                                      scanf("%d",&a[i]);
                              }
                              while(n!=10)
                              {
                                         for(int k=1;k<=x;k++)
                                         {
                                                 if(a[k]%10==n)
                                                 {
                                                               ans[z++]=a[k];
                                                               t++;
                                                 }
                                         }
                                         //printf("%d %d\n",z,t);
                                         if(t>=2)
                                         {
                                                  //printf("%d\n",z);
                                                  for(int m=(z-t);m<z;m++)
                                                  {
                                                          for(int p=(z-t);p<z;p++)
                                                          {
                                                                  if(ans[m]>ans[p])
                                                                  {
                                                                                   c=ans[p];
                                                                                   ans[p]=ans[m];
                                                                                   ans[m]=c;
                                                                  }
                                                          }
                                                  }
                                         }
                                         n++;
                                         t=0;
                              }
                              for(int l=1;l<=x;l++)
                              {
                                      printf("%d ",ans[l]);
                              }
                              printf("\n");
                              z=1;
                              t=0;
                              n=0;
    }
system("pause");
return 0;
}
