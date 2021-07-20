#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    string s_rev;
    for (int i = s.size() - 1; i >= 0; i--)
    {
       //not using s_rev=s_rev+s[i] coz complexity is more O(s.size())
        s_rev.push_back(s[i]); //O(1)
    }
    if(s==s_rev)
    cout<<"yes palindrome";
    else
    cout<<"no";
    return 0;
}
