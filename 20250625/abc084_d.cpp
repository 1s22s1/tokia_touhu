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

class Sieve
{
public:
    vector<bool> prime_vector;

    Sieve(int n)
    {
        prime_vector.assign(n + 1, true);

        prime_vector.at(0) = false;
        prime_vector.at(1) = false;

        for (int p = 2; p <= n; p++)
        {
            if (!prime_vector.at(p))
            {
                continue;
            }

            for (int q = p * 2; q <= n; q += p)
            {
                prime_vector.at(q) = false;
            }
        }
    }

    bool is_prime(int n)
    {
        return prime_vector.at(n);
    }
};

int main()
{
    init();

    ll n = 100000;
    Sieve sieve(n);

    vector<ll> sn = {0};

    for (int i = 1; i <= n; i++)
    {
        if (sieve.is_prime(i) && sieve.is_prime((i + 1) / 2))
        {
            sn.push_back(sn.back() + 1);
        }
        else
        {
            sn.push_back(sn.back());
        }
    }

    ll q;
    cin >> q;

    rep(i, q)
    {
        ll l, r;
        cin >> l >> r;

        cout << sn.at(r) - sn.at(l - 1) << endl;
    }

    return 0;
}
