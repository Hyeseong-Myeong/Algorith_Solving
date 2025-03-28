save = [[0 for _ in range(500)] for i in range(500)]

def dp(triangle, depth):
    if(depth == len(triangle) - 1):
        for i in range(depth + 1):
            save[depth][i] = triangle[depth][i]
        return;
    dp(triangle, depth + 1)
    
    for i in range(depth + 1):
        a = save[depth + 1][i]+ triangle[depth][i]
        b = save[depth + 1][i + 1] + triangle[depth][i]
        save[depth][i] = a if a > b else b
    


def solution(triangle):
    dp(triangle, 0)
    return save[0][0]
    
    

triangle = [[7], [3, 8], [8, 1, 0], [2, 7, 4, 4], [4, 5, 2, 6, 5]]

solution(triangle)
