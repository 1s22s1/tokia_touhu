#include <bits/stdc++.h>

using namespace std;

#define endl '\n'
#define ll long long
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)

int init()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    return 0;
}

int main()
{
    init();

    int N;
    cin >> N;

    ll answer = 0;

    rep(i, N)
    {
        ll a;
        cin >> a;

        while (a % 2 == 0)
        {
            a /= 2;
            answer++;
        }
    }

    cout << answer << endl;

    return 0;
}
