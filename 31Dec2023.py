from typing import List

class Solution:
    def solve(self, i, coins, N, sum, dp):
        if sum == 2024:
            return 1
        if sum != 0 and (sum % 20 == 0 or sum % 24 == 0):
            return 1
        if i >= N:
            return 0
        if dp[i][sum] != -1:
            return dp[i][sum]
        dp[i][sum] = self.solve(i + 1, coins, N, sum, dp) or self.solve(i + 1, coins, N, sum + coins[i], dp)
        return dp[i][sum]
        
    def isPossible(self, N : int, coins : List[int]) -> bool:
        dp = [[-1] * 2025 for _ in range(N + 1)]
        return self.solve(0, coins, N, 0, dp)
