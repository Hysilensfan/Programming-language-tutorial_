from random import randint as r

x, y = [int(input()) for i in range(2)]
print(f"{r(x, y + 1):.16f}")
