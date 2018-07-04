#include<stdio.h>
#include<stdlib.h>
int main(){
    int x,i,j;
    float a[101],y,ans=0;
    while(scanf("%d",&x)!=EOF)
    {
                              for(i=1;i<=x;i++)
                              {
                                               scanf("%f",&y);
                                               for(j=1;j<=y;j++)
                                               {
                                                                scanf("%f",&a[j]);
                                                                ans=ans+a[j];
                                               }
                                               printf("%.2f\n",ans/y);
                                               ans=0;
                              }
    }
system("pause");
return 0;
}
