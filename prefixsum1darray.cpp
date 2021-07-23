//given an array a of n int . given q queries and in each query given l and r print sum of array elements from l and r

// #include<bits/stdc++.h>
// using namespace std;
// const int N=1e5+10;
// const int M=1e9+7;
// int a[N];
// int main(){
//     int n;
//     cin>>n;
//     for(int i=1 ; i<=n;i++){
//         cin>>a[i];
//     }
//     int q;
//     cin>>q;
//     while(q--){
//         int l,r;
//         cin>>l>>r;
//         long long sum=0;
//         for(int i=l;i<=r;i++){
//             sum+=a[i];
//         }
//         cout<<sum<<endl;
//     }
//     return 0;
//} //O(n)+O(q*N)=//O(n^2)

#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
const int M=1e9+7;
int a[N];
int pf[N];
int main(){
    int n;
    cin>>n;
    for(int i=1 ; i<=n;i++){
        cin>>a[i];
        pf[i]=pf[i-1]+a[i];
    }
    int q;
    cin>>q;
    while(q--){
        int l,r;
        cin>>l>>r;
        cout<<pf[r]-pf[l-1]<<endl;
    }
    return 0;
}
//O(n)+O(1)=O(n)