n = int(input())
d = [int(input()) for i in range(n)]
d.sort(reverse=True)
count = 0
di = 1000

for i in range(n):
    if d[i] < di:
        count += 1
        di = d[i]
print(count)
