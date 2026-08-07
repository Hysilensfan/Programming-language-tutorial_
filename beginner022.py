y0, y1, x0, x1 = [int(input()) for _ in range(4)]
print((y1 - y0) / (x1 - x0) if x1 - x0 != 0 else "the slope is undefined")
