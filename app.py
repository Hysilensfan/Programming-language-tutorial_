#!/usr/bin/python3

y = "XXXXXXXXXXX{XXX}"
print(*map(ord,[k for k in y]), sep = ',')
exit(0)
