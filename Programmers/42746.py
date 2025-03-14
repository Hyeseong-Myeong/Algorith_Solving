def solution(numbers):
    answer = ''
    numbers = list(map(str, numbers))

    answer = sorted(numbers, key = lambda x: x * 4, reverse=True)

    answer = ''.join(answer)
    
    if(answer[0] == '0'):
        answer = '0'

    return answer

numbers = [0, 0, 0, 0]
solution(numbers)