from sys import stdin

def solution(numbers):
    answer = sorted(numbers, reverse= True)

    print(answer[2])

n = int(input())
for i in range(0, n):
    numbers = list(map(int, stdin.readline().split()))
    solution(numbers)
