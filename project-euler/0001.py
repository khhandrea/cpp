mode = [3, 2, 1, 3, 1, 2, 3]
total = 0
num = 0
loop = 0

while(1):
    num += mode[loop]
    if num < 1000:
        total += num
    else:
        break
    if loop < 6:
        loop += 1
    else:
        loop = 0
        
print(total)