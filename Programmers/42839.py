import math
from itertools import permutations

def isPrime(num):
    for i in range(2, int(math.sqrt(num)) + 1):
         if num % i == 0:
             return False
    return True

def solution(numbers):
    answer = 0
    num =[]
    for n in numbers:
        num.append(n)
    
    numList = set('')

    for i in range(1, len(num) + 1):
        temp = list(permutations(num, i))
        for j in temp:
            numList.add(int(''.join(j)))

    numList.discard(0)
    numList.discard(1)

    for i in numList:
        if isPrime(i):
            print(i)
            answer += 1

    return answer

numbers = "011"
print(solution(numbers))