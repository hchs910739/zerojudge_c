#include<iostream>
using namespace std;
main(){
       long long int x,y,i,a=0,X,Y;
       while(cin>>x>>y)
       {
                       if(x<0&&y<0)break;
                       X=x;
                       Y=y;
                       a++;
                       for(i=1;;i++)
                       {
                               if(x%2==1)x=x*3+1;
                               else x=x/2;
                               if(x>y)break;
                               if(x==1)
                               {
                                       i++;   
                                       break;
                               }
                       }
                       cout<<"Case "<<a<<": A = "<<X<<", limit = "<<Y<<", number of terms = "<<i<<endl;
       }
system("pause");
return 0;
}
