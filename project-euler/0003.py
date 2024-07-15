import math

def divideMinimalFactor(target):
    i = 2
    while (i<math.floor(target)):
        if (target%i == 0):
            print(i, end='*')
            divideMinimalFactor(target/i)
            return
        i += 1
    print(i)

target = 600851475143
print(target, end=' = ')
divideMinimalFactor(target)