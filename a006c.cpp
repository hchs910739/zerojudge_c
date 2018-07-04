#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(void){
    int a,b,c,D,x,y;
    while(scanf("%d %d %d",&a,&b,&c)!=EOF)
    {
                    D=(b*b)-4*a*c;
                    if(D<0)
                    {
                           printf("No real root\n");
                    }
                    else if(D==0)
                    {
                         x=(-b)/(2*a);
                         printf("Two same roots x=%d\n",x);
                    }
                    else
                    {
                        x=(-b+sqrt(D))/(2*a);
                        y=(-b-sqrt(D))/(2*a);
                        printf("Two different roots x1=%d , x2=%d\n",x,y);
                    }
                    x=0;
                    y=0;
    }
system("pause");
return 0;
}
