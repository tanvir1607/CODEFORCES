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
        int size, h, w, cntH = 0, cntW = 0;
        cin >> size >> h >> w;
        if (h > w) swap(h, w);
        vector<int> vec(size);
        for (int &x : vec)
        {
            cin >> x;
            if (x <= h) cntH++;
            if (x <= w) cntW++;
        }
        cout << min(cntH, cntW / 2) << endl;
    }

    return 0;
}





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
        int size, h, w;
        cin >> size >> h >> w;
        vector<int> vec(size);
        for (int &x : vec) cin >> x;

        sort(vec.begin(), vec.end());
        if (h > w) swap(h, w);
        int cntH = upper_bound(vec.begin(), vec.end(), h) - vec.begin();
        int cntW = upper_bound(vec.begin(), vec.end(), w) - vec.begin();
        cout << min(cntH, cntW / 2) << endl;
    }

    return 0;
}
