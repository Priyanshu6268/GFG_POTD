class solution:
  def aggressiveCows(self, stalls, k):
        stalls.sort()
        left, right = 1, stalls[-1] - stalls[0]
        while left <= right:
            mid = left + (right - left) // 2
            prev, count = -10**8, 0
            for s in stalls:
                if s - prev >= mid:
                    count += 1
                    prev = s
            if count >= k:
                left = mid + 1
            else:
                right = mid - 1
        return right
