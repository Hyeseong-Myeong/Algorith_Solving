n = int(input())

cost = [list(map(int, input().split())) for _ in range(n)]
dp = [[0] * 3 for _ in range(n)]

for i in range(3):
    dp[0][i] = cost[0][i]

for i in range(1, n):
    dp[i][0] = min(dp[i -1][1], dp[i - 1][2]) + cost[i][0]
    dp[i][1] = min(dp[i -1][0], dp[i - 1][2]) + cost[i][1]
    dp[i][2] = min(dp[i -1][0], dp[i - 1][1]) + cost[i][2]
    
result = min(dp[n - 1][0],dp[n - 1][1], dp[n - 1][2])

print(result)