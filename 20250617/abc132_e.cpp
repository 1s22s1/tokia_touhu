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
    vector<vector<int>> visited;

    LinearGraph(vector<vector<int>> _graph)
    {
        graph = _graph;
    }

    void bfs(vector<int> starts = {0})
    {
        visited.assign(graph.size(), vector<int>(3, -1));

        queue<pair<int, int>> queue;

        for (auto start : starts)
        {
            queue.push({start, 0});
            visited.at(start).at(0) = 0;
        }

        while (!queue.empty())
        {
            auto current = queue.front();
            queue.pop();

            auto next_parity = (current.second + 1) % 3;

            for (int next : graph.at(current.first))
            {
                if (visited.at(next).at(next_parity) != -1)
                {
                    continue;
                }

                queue.push({next, next_parity});
                visited.at(next).at(next_parity) = visited.at(current.first).at(current.second) + 1;
            }
        }
    }

private:
    vector<vector<int>> graph;
};

int main()
{
    init();

    int N, M;
    cin >> N >> M;

    vector<vector<int>> g(N);

    rep(i, M)
    {
        int u, v;
        cin >> u >> v;

        g.at(u - 1).push_back(v - 1);
    }

    int S, T;
    cin >> S >> T;
    S--;
    T--;

    LinearGraph graph(g);
    graph.bfs({S});
    auto visited = graph.visited;

    if (visited.at(T).at(0) == -1)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << visited.at(T).at(0) / 3 << endl;
    }

    return 0;
}
