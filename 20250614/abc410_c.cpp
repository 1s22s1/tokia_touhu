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

    ll N, Q;

    cin >> N >> Q;

    vector<ll> sequence(N);
    rep(i, N)
    {
        sequence.at(i) = i + 1;
    }

    ll cur = 0;

    rep(i, Q)
    {
        int pattern;

        cin >> pattern;

        switch (pattern)
        {
        case 1:
            ll a, b;
            cin >> a >> b;

            sequence.at(a - 1) = b;

            break;
        case 2:
            ll c;
            cin >> c;

            cout << sequence.at((cur + c - 1) % N) << endl;

            break;
        case 3:
            ll d;
            cin >> d;

            cur += d;
            cur %= N;

            break;
        }
    }

    return 0;
}
