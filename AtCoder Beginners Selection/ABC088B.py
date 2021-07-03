n = int(input())
a = [int(i) for i in input().split()]

a_sum = 0
b_sum = 0

a.sort(reverse=True)
for i in range(n):
    if i % 2 == 0:
        a_sum += a[i]
    else:
        b_sum += a[i]
print(a_sum - b_sum)
