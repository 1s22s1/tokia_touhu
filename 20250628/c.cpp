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
        ll height = A.at(0);
        ll last_height = A.at(N - 1);

        sort(A.begin(), A.end());

        while (height * 2 < last_height)
        {
            auto it = lower_bound(A.begin(), A.end(), height * 2);
            if (it == A.end())
            {
                answer = -1;
                break;
            }
            else
            {
                it--;

                if (*it == height)
                {
                    answer = -1;
                    break;
                }

                answer++;
                height = *it * 2;

                cout << *it << endl;
            }
        }

        cout << answer << endl;
    }

    return 0;
}
