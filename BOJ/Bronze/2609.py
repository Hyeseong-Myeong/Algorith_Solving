def GCD(a, b):
    if b == 0:
        return a
    return GCD(b, a % b)

def LCM(a, b, gcd):
    return a * b / gcd


a, b = map(int, input().split())
gcd = GCD(a, b)
lcm = LCM(a, b, gcd)

print(int(gcd))
print(int(lcm))
