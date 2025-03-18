visited = [False for i in range(200)]

def dfs(c, n, computer):
    visited[c] = True

    for i in range(n):
        if(i != c and computer[c][i] and visited[i] == False):
            dfs(i, n, computer)

def solution(n, computers):
    answer = 0
    for i in range(n):
        if(visited[i] == False):
            dfs(i, n, computers)
            answer += 1
        

    print(answer)
    return answer


n = 3
computers = [[1, 1, 0], [1, 1, 1], [0, 1, 1]]

solution(n, computers)