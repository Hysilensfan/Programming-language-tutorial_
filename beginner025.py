Arr: list[int] = list(map(int, input().split(',')))
print('Y' if all(x in [6, 28, 496, 8128, 33550336] for x in Arr) else 'Out of range.' if any(x > 2**32 - 1 for x in Arr) else 'Negative number.')
