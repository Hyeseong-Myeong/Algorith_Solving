from sys import stdin
from collections import deque

def solution(n, a):

    queue = deque([(0, 0)])
    visited = set([0])
 
    while queue:
        current, depth = queue.popleft()
        
        if current == n - 1:
            return depth

        for i in range(a[current]):
            next = current + i + 1
            if next < n and next not in visited:
                visited.add(next)
                queue.append((next, depth + 1))

    return -1


n = int(input())
a = list(map(int, stdin.readline().split()))

print(solution(n,a))