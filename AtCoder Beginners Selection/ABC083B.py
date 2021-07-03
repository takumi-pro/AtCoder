n, a, b = map(int, input().split())
arr = list(range(n + 1))


def sumf(x):
    sum = 0
    while x > 0:
        sum += int(x % 10)
        x = int(x / 10)
    return sum


count = 0
for i in arr:
    sum = sumf(i)
    if sum >= a and sum <= b:
        count += arr[i]
print(count)
