#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
  string s="";
  getline(cin,s);
  char temp;
  for(int i=0;i<s.length();i++)
  {
      int count=1;
       if(s[i]!=s[i+1])
      {
          cout<<count<<s[i];
      }
      if(s[i]==s[i+1])
      {
          count=count+1;
           temp=s[i];
          for(int j=i+2;j<s.length();j++)
          {
               if(temp==s[j])
               {
                   count++;
               }
               if(temp!=s[j])
               {
                   i=j-1;
                   break;
               }
               if(count==9)
               {
                   i=j;
                   break;
               }
               if(j==s.length()-1)
               {
                   i=j;
               }
          }
     
      }
      if(count!=1)
      {
      cout<<count<<temp;
      }
     
  }
 return 0;
}
