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
        int col;
        cin >> col;
        string str1, str2;
        cin >> str1 >> str2;
        
        replace(str1.begin(), str1.end(), 'B', 'G');
        replace(str2.begin(), str2.end(), 'B', 'G');
        cout << (str1 == str2 ? "YES" : "NO") << endl;
    }

    return 0;
}