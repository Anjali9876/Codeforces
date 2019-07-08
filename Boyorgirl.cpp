#include <iostream>
#include <string.h>
#include <stdio.h>
 
using namespace std;
 
int main()
{  int m,ctr=0,flag;
   char s[100];
   gets(s);
   m=strlen(s);
   for(int i=0;i<m-1;++i)
   { flag=0;
     for(int j=i+1;j<m;++j)
     { if(s[i]!=s[j])
          continue;
       else
       {  flag=1;
          break;  }
     }
     if(flag==0)
       ctr++;  
   }
   if(ctr%2==0)
     cout<<"IGNORE HIM!";
   else
     cout<<"CHAT WITH HER!";
          
   return 0;
}

