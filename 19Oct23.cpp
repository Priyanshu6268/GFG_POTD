class Solution
{
	public:
	int nodeLevel(int V, vector<int> adj[], int X) 
	{
	    vector<bool> visited(V, false);
        vector<int> level(V, 0);

        queue<int> q;
        q.push(0);
        visited[0] = true;

        while (!q.empty())
        {
            int current = q.front();
            q.pop();

            for (int neighbor : adj[current])
            {
                if (!visited[neighbor])
                {
                    visited[neighbor] = true;
                    level[neighbor] = level[current] + 1;
                    q.push(neighbor);
                }
            }
        }

        if (visited[X])
            return level[X];
        else
            return -1;
	}
};
