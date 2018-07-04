#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    int x,l,t=0;
    char a[101];
    while(scanf("%d",&x)!=EOF)
    {
                              scanf("%s",a);
                              l=strlen(a);
                              for(int i=0;i<(l/2);i++)
                              {
                                      if(a[i]!=a[l-i-1])t=1;
                              }
                              if(t==0)printf("yes\n");
                              else printf("no\n");
                              t=0;
    }
system("pause");
return 0;
}
