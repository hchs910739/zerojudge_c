#include<stdio.h>
#include<stdlib.h>
int main(){
    float a,b,c,d,e,f,x=0,y=0;
    while(scanf("%f %f %f %f %f %f",&a,&b,&c,&d,&e,&f)!=EOF)
    {
                    if((b*d)-(a*e)==0&&(d*c)-(a*f)==0&&(c*e)-(b*f)==0)printf("Too many\n");
                    else if((b*d)-(a*e)==0&&(d*c)-(a*f)!=0&&(c*e)-(b*f)!=0)printf("No answer\n");
                    else
                    {
                       x=((c*e)-(f*b))/((a*e)-(d*b));
                       y=((d*c)-(a*f))/((b*d)-(a*e));
                       printf("x=%.2f\n",x);
                       printf("y=%.2f\n",y);
                    }
    }
system("pause");
return 0;
}
