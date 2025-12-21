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
        int size, del;
        string str;
        cin >> size >> del >> str;

        int oddPairs = 0;
        set<char> Set(str.begin(), str.end());
        for (char ch : Set)
            oddPairs += count(str.begin(), str.end(), ch) % 2;
        
        cout << (oddPairs - del <= 1 ? "YES" : "NO") << endl;        
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
        int size, del;
        string str;
        cin >> size >> del >> str;

        map<char, int> freq;
        for (char ch : str) freq[ch]++;

        int oddPairs = 0;
        for (auto [key, val] : freq) oddPairs += val % 2;
        cout << (oddPairs - del <= 1 ? "YES" : "NO") << endl;
    }

    return 0;
}

