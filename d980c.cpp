#include<stdio.h>
#include<stdlib.h>
int main(){
    long long int x,a,b,c;
    while(scanf("%lld",&x)!=EOF)
    {
                              for(int i=1;i<=x;i++)
                              {
                                      scanf("%lld %lld %lld",&a,&b,&c);
                                      if(a==b&&b==c&&a>0&&b>0&&c>0)printf("Case %d: Equilateral\n",i);
                                      else if(a+b<=c||b+c<=a||a+c<=b||a<=0||b<=0||c<=0)printf("Case %d: Invalid\n",i);
                                      else if(a==b||b==c||c==a)printf("Case %d: Isosceles\n",i);
                                      else printf("Case %d: Scalene\n",i);
                              }
    }
system("pause");
return 0;
}
