#include<iostream>
#include<math.h>
using namespace std;
main(){
       int x,a;
       while(cin>>x)
       {
                    for(int k=2;k<=sqrt(x);k++)
                    {
                            if(x%k==0)
                            {
                                      a=1;
                                      break;
                            }
                    }      
                    if(a==1)
                    { 
                         cout<<"�D���"<<endl;
                         a=0;
                    }
                    else
                    {
                        cout<<"���"<<endl;
                        a=0;
                    }
       }
system("pause");
return 0;
}
