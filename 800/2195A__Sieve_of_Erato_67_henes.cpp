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
        int size;
        cin >> size;
        vector<int> vec(size);
        bool flag = false;
        for (int &x : vec)
        {
            cin >> x;
            if (x == 67) flag = true;
        }
        cout << (flag ? "YES" : "NO") << endl; 
    }

    return 0;
}

