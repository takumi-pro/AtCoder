n = int(input())
a = list(map(int, input().split()))
b = 1
count = 0
while True:
    for i in range(n):
        if a[i] % 2 != 0:
            b = 0
            break
        else:
            count += 1
            a[i] = a[i] / 2

    if b == 0:
        break

print(int(count / n))
