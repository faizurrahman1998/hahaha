solves = 0
for i in range(int(input())):

    if sum(map(int,input().rstrip().split(" "))) > 1: solves += 1

print(solves)
