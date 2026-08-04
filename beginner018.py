a, b, n = [int(input()) for _ in range(3)]
for i in range(n):
    a, b = b, a + b
print(a)
