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

class LinearGraph
{

public:
    vector<vector<bool>> visited;

    LinearGraph(vector<vector<pair<int, int>>> _graph)
    {
        graph = _graph;
    }

    void bfs(vector<int> starts = {0})
    {
        visited.assign(graph.size(), vector<bool>(1024, false));

        queue<pair<int, int>> queue;

        for (auto start : starts)
        {
            queue.push({start, 0});
            visited.at(start).at(0) = true;
        }

        while (!queue.empty())
        {
            auto current = queue.front();
            queue.pop();

            auto current_xor = current.second;

            for (auto next : graph.at(current.first))
            {
                int next_xor = current_xor ^ next.second;

                if (visited.at(next.first).at(next_xor))
                {
                    continue;
                }

                queue.push({next.first, next_xor});
                visited.at(next.first).at(next_xor) = true;
            }
        }
    }

private:
    vector<vector<pair<int, int>>> graph;
};

int main()
{
    init();

    int N, M;
    cin >> N >> M;

    vector<vector<pair<int, int>>> g(N);

    rep(i, M)
    {
        int a, b, w;
        cin >> a >> b >> w;

        g.at(a - 1).push_back({b - 1, w});
    }

    LinearGraph graph(g);
    graph.bfs();
    auto visited = graph.visited;

    rep(i, 1024)
    {
        if (visited.at(N - 1).at(i))
        {
            cout << i << endl;

            return 0;
        }
    }

    cout << -1 << endl;

    return 0;
}
