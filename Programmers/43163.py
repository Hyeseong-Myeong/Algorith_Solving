from collections import deque

def isAdjacent(a, b):
    return sum(1 for x, y in zip(a, b) if x != y) == 1
    # length = len(words)
    # result = [False for _ in range(length)]
    
    # for i in range(length):
    #     b = words[i]
    #     diff = 0
    #     for j in range(len(a)):
    #         if(a[j] != b[j]):
    #             diff += 1
    #     if diff == 1:
    #         result[i] = True

    # return result



def solution(begin, target, words):
    
    if target not in words:
        return 0
    
    queue = deque([(begin, 0)])
    visited = set()

    while queue:
        current, depth = queue.popleft()

        if current == target:
            return depth
        
        for word in words:
            if word not in visited and isAdjacent(current, word):
                visited.add(word)
                queue.append((word, depth + 1))

    return 0



begin = "hit"
target = "cog"
words = ["hot", "dot", "dog", "lot", "log", "cog"]

solution(begin, target, words)