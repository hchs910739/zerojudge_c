#include<stdio.h>
#include<stdlib.h>
int main(){
    double x;
    while(scanf("%lf",&x)!=EOF)
    {
                              printf("%.3lf\n",((x-32)*5)/9);
    }
system("pause");
return 0;
}
