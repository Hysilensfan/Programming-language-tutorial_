for i in range(int(input())):
    x, s, n = [int(input()) for _ in range(3)]
    print(s * 2 // n - x if n > 0 else 'N')
