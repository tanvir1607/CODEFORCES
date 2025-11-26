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
        int size, x;
        cin >> size >> x;
        vector<int> vec(size);
        for (int &x : vec) cin >> x;

        int ans = vec.front();
        for (int i = 1; i < size; i++) ans = max(vec[i] - vec[i - 1], ans);
        ans = max(ans, 2 * (x - vec.back()));
        cout << ans << endl;
    }

    return 0;
}