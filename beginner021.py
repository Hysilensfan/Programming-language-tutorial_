from itertools import combinations as co


def validity_of_3_sides(d, e, f) -> bool:
    three_side: list = [d, e, f]
    if any(x <= 0 for x in three_side):
        return False
    for a1, a2 in co(three_side, 2):
        if a1 + a2 <= sum(three_side) - a1 - a2:
            return False
    return True


a, b, c = [int(input()) for i in range(3)]
if not validity_of_3_sides(a, b, c):
    print("N")
else:
    s: float = (a + b + c) / 2
    A: float = (s * ((s - a) * (s - b) * (s - c))) ** 0.5
    check: str = str(A).split('.')[1]
    print(s, f"{A:.1f}" if any(x in "123456789" for x in check) else int(A), sep='\n')
