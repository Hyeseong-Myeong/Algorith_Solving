def solution(arr):
    answer = []
    pastNum = -1

    for i in arr:
        if(i == pastNum):
            continue
        else:
            answer.append(i)
            pastNum = i
 
    return answer

x = [1,1,3,3,0,1,1]
solution(x)