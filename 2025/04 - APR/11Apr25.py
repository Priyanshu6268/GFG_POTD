from collections import defaultdict
class Solution:
    def dijkstra(self, V, edges, src):
        graph = defaultdict(list)
        for u, v, w in edges:
            graph[u].append((v, w))
            graph[v].append((u, w))
        dist = [float('inf')] * V
        dist[src] = 0
        visited = set()
        while len(visited) < V:
            u = -1
            min_dist = float('inf')
            for i in range(V):
                if i not in visited and dist[i] < min_dist:
                    min_dist = dist[i]
                    u = i
            if u == -1:
                break 
            visited.add(u)
            for v, weight in graph[u]:
                if v not in visited and dist[u] + weight < dist[v]:
                    dist[v] = dist[u] + weight
        return dist
