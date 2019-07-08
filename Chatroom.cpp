#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
 
int main() 
{   char s[100], a[6];
    strcpy(a,"hello");
    int j = 0, ctr = 0;
    gets(s);
    for (int i = 0; i < strlen(s); i++) 
    {
        if (s[i] == a[j]) 
        {
            j++;
            ctr++;
        }
    }
    if (ctr == 5) 
        cout << "YES";
    else 
        cout << "NO";
return 0;
}
