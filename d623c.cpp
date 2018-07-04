#include<stdio.h>
#include<stdlib.h>
int main(){
    float a,b,c,d,x;
    while(scanf("%f %f %f %f",&a,&b,&c,&d)==4)
    {
                    x=(a*d)-(b*c);
                    if(a==0&&b==0&&c==0&d==0)break;
                    else if(x==0)printf("cheat!\n");
                    else
                    {
                        printf("%.5f %.5f\n",d/x,(-b)/x);
                        printf("%.5f %.5f\n",(-c)/x,a/x);
                    }
    }
system("pause");
return 0;
}
