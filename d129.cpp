#include<iostream>
using namespace std;
main(){
       int a=1;
       for(int i=2;;i++)
       {
               if(i%2==0||i%3==0||i%5==0)a++;
               if(a==11)
               {
                          cout<<i<<endl;
                          break;
               }
       }
system("pause");
return 0;
}
