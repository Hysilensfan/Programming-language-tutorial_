from math import sqrt as s


def is_prime(x: int) -> bool:
    return x > 1 and all(x % i != 0 for i in range(2, int(x ** 0.5) + 1, 1))


def same_difference(z: int) -> bool:
    double: list = list(f"{s(z):.3f}"[-3:])
    return int(double[0]) - int(double[1]) == int(double[1]) - int(double[2])


def is_unhappy(y: int) -> bool:
    dire: set = set()
    while y != 1 and y not in dire:
        dire.add(y)
        y: int = sum(int(c) ** 2 for c in str(y))
    return not y == 1


def specific_prime(w: int) -> bool:
    return is_prime(w) and is_unhappy(w) and same_difference(w)


u: list = [i for i in range(1, int(input()) + 1)]
for k in u:
    if specific_prime(k):
        print(k)
