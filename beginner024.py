def is_prime(x: int) -> bool:
    return x > 1 and all(x % i != 0 for i in range(2, int(x ** 0.5) + 1, 1))


sc_pw: list = []
for j in range(123, 488):
    if j % 2 != 0 and str(j)[2] not in "59" and sum(int(x) for x in str(j)) % 2 != 0 and is_prime(j):
        sc_pw.append(j)

while sc_pw:
    print(sc_pw.pop(), end='\n\n')
