#include<stdio.h>
#include<stdlib.h>
using namespace std;
int main(){
       long long int x;
       while(scanf("%d",&x))
       {
                          if(x<0)
                          {
                                 printf("-1");
                                 break;
                          }
                          printf("%o\n",x);
       }
system("pause");
return 0;
}
