a: str = input().lower()
print(chr((ord(a) - ord('a') + 3) % 26 + ord('a')))
