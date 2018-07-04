#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    char a[100];
    int n=0,l;
    while(scanf("%s",a)!=EOF)
    {
                             n++;
                             l=strlen(a);
                             if(a[0]==35)break;
                             else if(a[0]==72&&a[1]==69&&a[2]==a[3]&&a[3]==76&&a[4]==79&&l==5)printf("Case %d: ENGLISH\n",n);
                             else if(a[0]==72&&a[1]==79&&a[2]==76&&a[3]==65&&l==4)printf("Case %d: SPANISH\n",n);
                             else if(a[0]==72&&a[1]==65&&a[2]==a[3]&&a[3]==76&&a[4]==79&&l==5)printf("Case %d: GERMAN\n",n);
                             else if(a[0]==66&&a[1]==79&&a[2]==78&&a[3]==74&&a[4]==79&&a[5]==85&&a[6]==82&&l==7)printf("Case %d: FRENCH\n",n);
                             else if(a[0]==67&&a[1]==73&&a[2]==65&&a[3]==79&&l==4)printf("Case %d: ITALIAN\n",n);
                             else if(a[0]==90&&a[1]==68&&a[2]==82&&a[3]==65&&a[4]==86&&a[5]==83&&a[6]==84&&a[7]==86&&a[8]==85&&a[9]==74&&a[10]==84&&a[11]==69&&l==12)printf("Case %d: RUSSIAN\n",n);
                             else printf("Case %d: UNKNOWN\n",n);
    }
system("pause");
return 0;
}
