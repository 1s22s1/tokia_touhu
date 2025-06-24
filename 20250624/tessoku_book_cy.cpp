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

    int N;
    cin >> N;

    Sieve sieve(N);

    for (int i = 1; i < N + 1; i++)
    {
        if (sieve.is_prime(i))
        {
            cout << i << endl;
        }
    }

    return 0;
}
