#include <bits/stdc++.h>

using namespace std;

#define endl '\n'
#define ll long long
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int init()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    return 0;
}

int main()
{
    init();

    int N, Q;

    cin >> N >> Q;

    vector<pair<int, int>> vec;

    rep(i, Q)
    {
        int A;
        cin >> A;

        auto first_it = find_if(vec.begin(), vec.end(),
                                [A](const pair<int, int> &p)
                                { return p.first == A; });

        if (first_it != vec.end())
        {
        }
    }

    return 0;
}

// 何かセグメント木のにおいがするなぁ～。。。
