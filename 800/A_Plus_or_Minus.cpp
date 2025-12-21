#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define endl '\n'
#define optimize() ios::sync_with_stdio(false); cin.tie(nullptr);

int main() 
{
    optimize();

    int test;
    cin >> test;
    while (test--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        cout << (a + b == c ? '+' : '-') << endl;
    }

    return 0;
}