a: str = input()
b: int = int(input())
print(f"mov rsi, 0\nmov {a}, {b}\nsyscall\n")
