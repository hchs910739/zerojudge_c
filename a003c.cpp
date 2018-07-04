#include<stdio.h>
#include<stdlib.h>
int main(void){
    int a,b,c=0;
    while(scanf("%d %d",&a,&b)!=EOF)
    {
                    c=a*2+b;
                    if(c%3==0)
                    {
                              printf("´¶³q\n");
                    }
                    if(c%3==1)
                    {
                              printf("¦N\n");
                    }
                    if(c%3==2)
                    {
                              printf("¤j¦N\n");
                    }
    }
system("pause");
return 0;
}
