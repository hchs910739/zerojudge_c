#include<iostream>  
using namespace std;   
int main()
{   
   int n;   
   while(cin>>n)   
   {   
      int j,b=0;   
      for(int i=2;i<=n;i++)   
      {   
         if(n%i==0)
         {
            b++;   
            if(b==1)
            {   
               cout<<i;  
            } 
            else  
            {
               cout<<" * "<<i;
            }
         }   
         for(j=0;n%i==0;j++)
         {
            n=n/i;
         }
         if(j==0||j==1);   
         else  
            cout<<"^"<<j;   
      }   
      cout<<endl;    
   }
}

