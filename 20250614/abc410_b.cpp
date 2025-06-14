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

    vector<int> haco(N, 0);
    vector<int> X(Q);
    rep(i, Q)
    {
        cin >> X.at(i);
    }

    vector<int> answer;

    for (auto x : X)
    {
        if (0 == x)
        {
            auto min_it = min_element(haco.begin(), haco.end());
            auto target_index = distance(haco.begin(), min_it);

            answer.push_back(target_index);
            haco.at(target_index)++;
        }
        else
        {
            answer.push_back(x - 1);
            haco.at(x - 1)++;
        }
    }

    for (auto a : answer)
    {
        cout << a + 1 << " ";
    }

    cout << endl;

    return 0;
}
