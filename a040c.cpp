#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
    double x,y;
    int t=0,ans=0,a,b;
    while(scanf("%lf %lf",&x,&y)!=EOF)
    {
                     for(double i=x;i<=y;i++)
                     {
                             a=i;
                             while(a/10>=1)
                             {
                                           t++;
                                           a=a/10;
                             }
                             b=i;
                             for(int j=1;j<=t;j++)
                             {
                                     ans=ans+pow((b%10),t);
                                     b=b/10;
                             }
                             if(i==ans)
                             {
                                       printf("%lf ",i);
                             }
                             t=0;
                             ans=0;
                     }
                    //printf("%.0lf",pow(x,y));
    }
system("pause");
return 0;
}
