uname = input()
i = 0
while(i < len(uname) - 1):

    if uname[i] in uname[i+1:]: 
        uname = uname[:i] + uname[i+1:]
        i -= 1
    i += 1
print("CHAT WITH HER!" if len(uname) % 2 == 0 else "IGNORE HIM!")

