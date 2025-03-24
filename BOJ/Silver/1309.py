dp = []

def solution(n):
    if(n == 1):
        return 3
    else:
        dp[1], dp[2] = 3, 7
        for i in range(3, n + 1):
            dp[i] = (2*(dp[i - 1]) + dp[i - 2])% 9901

        return dp[n] 

n = int(input())
dp = [0 for _ in range(n + 1)]


print(solution(n))
