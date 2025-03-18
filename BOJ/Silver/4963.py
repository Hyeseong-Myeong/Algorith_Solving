from sys import stdin
import sys
sys.setrecursionlimit(10000)

visited = [[]]
dx = [-1, 1, 0, 0, 1, 1, -1, -1]
dy = [0, 0, -1, 1, 1, -1, 1, -1]

def dfs(i, j):
    visited[i][j] = True

    if maps[i][j] == 1:
        for x in range(8):
            nx = i + dx[x]
            ny = j + dy[x]

            if 0 <= ny < len(maps[0]) and 0 <= nx < len(maps) and not visited[nx][ny]:
                dfs(nx, ny)



while True:
    answer = 0
    w, h = map(int, stdin.readline().split())
    if w == 0 and h == 0 :
        break

    maps = [[0] * w for k in range(h)]
    visited = [[0] * w for k in range(h)]

    for i in range(h):
        maps[i] = list(map(int, stdin.readline().split()))

    for i in range(h):
        for j in range(w):
            if not visited[i][j] and maps[i][j] == 1:
                dfs(i, j)
                answer += 1
            else:
                continue

    print(answer)

    

