#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
    int x,y,z,a,b,c;
    while(scanf("%d %d",&x,&y)!=EOF)
    {
                    if(x==0&&y==0)break;
                    a=sqrt((x*x)+(y*y));
                    b=sqrt((x*x)-(y*y));
                    c=sqrt((y*y)-(x*x));
                    if((a*a)==((x*x)+(y*y)))printf("%d\n",a);
                    else if((x*x)==((b*b)+(y*y)))printf("%d\n",b);
                    else if((y*y)==((x*x)+(c*c)))printf("%d\n",c);
                    else printf("Wrong\n");
    }
system("pause");
return 0;
}
