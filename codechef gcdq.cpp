// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n, q;
//         cin >> n >> q;
//         int a[n + 10];
//         for (int i = 1; i <= n; i++)
//         {
//             cin >> a[i];
//         }
//         while (q--)
//         {
//             int l, r;
//             cin >> l >> r;
//             int gc = 0;
//             for (int i = 1; i <= l - 1; i++)
//             {
//                 gc = __gcd(gc, a[i]);
//             }
//             for (int i = r + 1; i <= n; i++)
//             {
//                 gc = __gcd(gc, a[i]);
//             }
//         }
//     }
//     return 0;
// }
//O(t*(n+q*n))=//o(t*n+t*n*q)=n^3
//forward=1 to l-1
//backward=r+1 to n

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n >> q;
        int a[n + 10];
        int backward[n + 10];
        int forward[n + 10];
        forward[0] = backward[n + 1] = 0;
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        for (int i = 1; i <= n; i++)
        {
            forward[i] = __gcd(forward[i - 1], a[i]);
        }
        for (int i = n; i >= 1; i--)
        {
            backward[i] = __gcd(backward[i + 1], a[i]);
        }
        while (q--)
        {
            int l, r;
            cin >> l >> r;
            cout << __gcd(forward[l - 1], backward[r + 1]);
        }
    }
    return 0;
}
//O(T*(N+N))