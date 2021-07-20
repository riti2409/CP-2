#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    string s_rev;
    for (int i = 0;i<s.size()/2;i++)
    {
       if(s[i]==s[s.size()-i-1])
        cout<<"yes";
        
        else
        cout<<"no";
        break;
    }
    
    return 0;
}
