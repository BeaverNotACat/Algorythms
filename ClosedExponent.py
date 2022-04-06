def gcd_extended(num1, num2):
    if num1 == 0:
        return (num2, 0, 1)
    else:
        div, x, y = gcd_extended(num2 % num1, num1)
    return (div, y - (num2 // num1) * x, x)

print("Нахождение закрытой экспоненты RSA")
c = int(input("c = "))
p = int(input("p = "))
q = int(input("q = "))
e = int(input("e = "))

n = p*q
print(f"n = {n}")
Fn = (p-1)*(q-1)
print(f"Fn = {Fn}")

temp = gcd_extended(Fn,e)
if temp[1] > 0:
    d = temp[1]
else:
    d = temp[2]
print(f"d = {d}")

m = pow(c, d, n)
print(f"M = {m}")
input()