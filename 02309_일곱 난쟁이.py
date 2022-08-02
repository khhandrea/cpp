heights = []

for i in range(9):
    heights.append(int(input()))

heights_sum = sum(heights)

for height in heights:
    if (heights_sum - height - 100 in heights) and (heights_sum - height - 100 != height):
        heights.remove(height)
        heights.remove(heights_sum - height- 100)
        break

for height in sorted(heights):
    print(height)