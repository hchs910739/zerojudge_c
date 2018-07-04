#include<stdio.h>
#include<stdlib.h>
#include<cstring>
int main(void){
    char a[10000];
    int b,c;
    while(scanf("%s",&a)!=EOF)
    {
                              b=strlen(a);
                              for(int i=0;i<b;i++)
                              {
                                      c=a[i];
                                      c=c-7;
                                      a[i]=c;
                                      printf("%c",a[i]);
                              }
                              printf("\n");
    }
system("pause");
return 0;
}
