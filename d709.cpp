#include<iostream>
#include<math.h>
using namespace std;
main(){
       int x,a=0;
       while(cin>>x)
       {
                    for(int k=2;k<=sqrt(x);k++)
                    {
                            if(x%k==0)
                            {
                                      cout<<1<<endl;
                                      break;
                            }
                            else
                            {
                                cout<<0<<endl;
                            }
                    }      
       }
system("pause");
return 0;
}
