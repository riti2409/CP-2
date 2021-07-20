#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    string s_rev;
    for (int i = s.size() - 1; i >= 0; i--)
    {
        s_rev.push_back(s[i]);
    }
    cout << s_rev;
    return 0;
}
