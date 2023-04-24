#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cin>>a;
    cin>>b;
    int count =0;
    int flag=1;
    while(a!=b)
    {
        if(a<b)
        {
            if(a*2>b)
            {
                flag=0;
            }
           if(a*2<=b &&flag==1) 
           {
               a=a*2;
               count++;
           }
           if(flag==0 &&a!=b)
           {
               a=a+1;
               count++;
           }
        }
        else{
            if(a/2<b)
            {
                flag=0;
            }
            if(a/2>=b && flag==1)
            {
                a/=2;
                count++;
            }
            if(flag==0 && a!=b)
            {
                a-=1;
                count++;
            }
        }
    }
    cout<<count;

    return 0;
}
