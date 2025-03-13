from sys import stdin

def solution():
    n = int(input())
    inputData = list(map(int, stdin.readline().split()))

    stack = []
    returnData = [0 for i in range(n)]

    for i, h in enumerate(inputData):
        while stack and stack[-1][1] <= h:
            stack.pop()

        if len(stack) != 0:
            returnData[i] = stack[-1][0]

        stack.append((i+1, h))


    print(*returnData)
        

solution()