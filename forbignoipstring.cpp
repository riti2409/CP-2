#include<bits/stdc++.h>
using namespace std;
int main(){
    
        string s;
        getline(cin,s);
//if we use(int) before s.size it would give the ascii value associated to it 
//we use string to deal with big numb like 10pow100 like
        int last_digit=s[s.size()-1]-'0';
        cout<<last_digit<<endl;
    
}