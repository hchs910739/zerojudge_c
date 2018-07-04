#include<stdio.h>
#include<stdlib.h>
int main(){
    int x,y;
    while(scanf("%d %d",&x,&y)!=EOF)
    {
                    if(x==0)printf("0\n");
                    else if(x==1||x==3||x==4)
                    {
                         if(y<=9)printf("0\n");
                         else if(y>=10&&y<=29)printf("%d\n",((y-10)*3)+1);
                         else if(y>=30&&y<=69)printf("%d\n",((y-10)*3)+2);
                         else if(y>=70&&y<=119)printf("%d\n",((y-10)*3)+3);
                         else if(y>=120&&y<=200)printf("%d\n",((y-10)*3)+6);
                    }
                    else if(x==2)
                    {
                         if(y<=7)printf("0\n");
                         else if(y>=8&&y<=29)printf("%d\n",((y-8)*3)+1);
                         else if(y>=30&&y<=69)printf("%d\n",((y-8)*3)+2);
                         else if(y>=70&&y<=119)printf("%d\n",((y-8)*3)+3);
                         else if(y>=120&&y<=200)printf("%d\n",((y-8)*3)+6);
                    } 
    }
system("pause");
return 0;
}
