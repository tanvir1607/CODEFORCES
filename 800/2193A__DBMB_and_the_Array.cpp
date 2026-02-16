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
        int size, s, x, sum = 0;
        cin >> size >> s >> x;
        vector<int> vec(size);
        for (int &num : vec)
            cin >> num, sum += num;

        int diff = s - sum;
        cout << (diff >= 0 && diff % x == 0 ? "YES" : "NO") << endl;    
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
        int size, s, x, sum = 0;
        cin >> size >> s >> x;
        vector<int> vec(size);
        for (int &num : vec)
            cin >> num, sum += num;

        cout << (sum > s || (sum - s) % x ? "NO" : "YES") << endl; 
    }

    return 0;
}

