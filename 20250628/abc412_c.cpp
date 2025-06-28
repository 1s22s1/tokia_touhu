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

    ll T;
    cin >> T;

    rep(i, T)
    {
        ll N;
        cin >> N;

        vector<ll> A(N);
        rep(j, N)
        {
            cin >> A.at(j);
        }

        ll answer = 1;
        ll height = A.at(0) * 2;

        while (height * 2 < A.at(N - 1))
        {
            auto it = upper_bound(A.begin(), A.end(), height);
            if (it == A.end())
            {
                answer = -1;
                break;
            }
            else
            {
                it--;
                answer++;
                height = *it * 2;
            }
        }

        cout << answer << endl;
    }

    return 0;
}
