input()
re, unsol = 0, 0

for n in map(int, input().split(" ")): 

    if (not re and n == -1): 
        unsol += 1 
        continue
    re += n

print(unsol)
