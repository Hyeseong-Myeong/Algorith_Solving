def solution():
    data = input()
    stack = []
    for i in data:
        if(i == "("):
            stack.append("(")
        elif(i == ")"):
            if(len(stack) == 0):
                print("NO")
                return
            else:
                stack.pop()
    
    if(len(stack) == 0):
        print("YES")
    else:
        print("NO")




num = input()
for i in range(0, int(num)):
    solution()