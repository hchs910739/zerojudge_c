#include<stdio.h>
#include<stdlib.h>
int main(){
    int x;
    while(scanf("%d",&x)!=EOF)
    {
                              if(x<=5)printf("0\n"); 
                              if(x<=11&&x>=6)printf("590\n"); 
                              if(x<=17&&x>=12)printf("790\n"); 
                              if(x<=59&&x>=18)printf("890\n"); 
                              if(x>=60)printf("399\n"); 
    } 
system("pause");
return 0;
}
