input()
inps = input()

temp = inps[0]
mv = 0

for ch in inps[1:]: 

    if ch == temp: mv += 1
    temp = ch

print(mv)
