#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define endl '\n'
#define optimize() ios::sync_with_stdio(false); cin.tie(nullptr);

ll sumOfDigit(ll num)
{
    ll sum = 0;
    while (num)
    {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}
int main() 
{
    optimize();

    int test;
    cin >> test;
    while (test--)
    {
        ll x;
        cin >> x;
        
        int cnt = 0;
        for (int y = x + 1; y <= x + 81; y++)
            if (y - sumOfDigit(y) == x) 
                cnt++;
        cout << cnt << endl;
    }

    return 0;
}

