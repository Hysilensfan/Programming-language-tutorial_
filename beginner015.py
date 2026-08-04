a: str = input()
b: str = input()
for i, o in zip(a, b):
    print('1'if i == o else i + o, end='')
print()
