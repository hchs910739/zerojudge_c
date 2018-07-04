#include<stdio.h>
#include<stdlib.h>
int main(){
    int a[6][6],x,b,ans=0;;
    while(scanf("%d",&x)!=EOF)
    {
                              for(int i=1;i<=5;i++)
                              {
                                      for(int j=1;j<=5;j++)
                                      {
                                              scanf("%d",&a[i][j]);
                                      }
                              }
                              for(int k=2;k<=x;k++)
                              {
                                      for(int l=1;l<=5;l++)
                                      {
                                              for(int m=1;m<=5;m++)
                                              {
                                                      scanf("%d",&b);
                                                      if(a[l][m]==1&&b==1)ans=ans+1;
                                                      else if(a[l][m]==1&&b==8)ans=ans+7;
                                                      else if(a[l][m]==8&&b==1)ans=ans+2;
                                                      else if(a[l][m]==8&&b==8)ans=ans+5;
                                                      a[l][m]=b;
                                              }
                                      }
                                      printf("%d\n",ans);
                                      ans=0;
                              }
    }
system("pause");
return 0;
}
