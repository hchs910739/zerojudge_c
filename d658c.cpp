#include<stdio.h>
#include<stdlib.h>
int main(){
    int x,i,a=0,b=0;
    while(scanf("%d",&x)!=EOF)
    {
                              a++;
                              if(x<0)break;
                              else
                              {
                                  for(i=1;;i=i*2)
                                  {
                                                 b++;
                                                 if(i>=x)
                                                 {
                                                         printf("Case %d: %d\n",a,b-1);
                                                         break;
                                                 }
                                  }
                              }
                              b=0;
    }
system("pause");
return 0;
}
