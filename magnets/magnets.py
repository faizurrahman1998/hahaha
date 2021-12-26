ch = 0
temp = 0

for i in range(int(input())):
    inp = int(input())
    if temp == inp: ch += 1

    temp = inp
print(ch)
