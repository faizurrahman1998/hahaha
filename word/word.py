word = input()

low, high = 0, 0

for ch in word: 
    if ch.islower(): low += 1
    else: high += 1

print(word.lower() if low >= high else word.upper())
