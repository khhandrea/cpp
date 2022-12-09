buf = input()
stack = []
result = 0

for char in buf:
    if char == '(' or char == '[':
        stack.append(char)
    elif char == ')':
        if stack.pop() == '(':
            pass
        else:
            print('stack pop error')
            result = 0
            break
    elif char == ']':
        if stack.pop() == '[':
            pass
        else:
            print('stack pop error')
            result = 0
            break
print('finish')