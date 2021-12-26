burns = list(map(int, input().split(" ")))
inps = input()
burned = 0

for ch in inps: 

    burned += burns[int(ch) - 1]

print(burned)
