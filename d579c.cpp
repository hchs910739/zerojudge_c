#include<stdio.h>
#include<stdlib.h>
int main(){
    double x;
    while(scanf("%lf",&x)!=EOF)
    {
                              if(x>0)printf("|%.4lf|=%.4lf\n",x,x);
                              else printf("|%.4lf|=%.4lf\n",x,-x);
    }
system("pause");
return 0;
}
