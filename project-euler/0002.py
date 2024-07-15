total = 2
last = [1, 2]
cur = 0
while(1):
    cur = last[0] + last[1]
    last[0] = last[1]
    last[1] = cur
    if cur%2 == 0:
        total += cur
    if cur > 4000000:
        break
print(total)