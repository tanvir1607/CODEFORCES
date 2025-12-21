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
        for (int &x : vec) cin >> x;

        for (int x : vec)
        {
            int val;
            string change;
            cin >> val >> change;
            for (char ch : change) x = (x + (ch == 'D' ? 1 : -1) + 10) % 10;
            cout << x << " ";
        }     
        cout << endl;  
    }

    return 0;
}


