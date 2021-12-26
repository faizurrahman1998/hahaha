n = int(input())
 
numbers = list(map(int, input().rstrip().split(" ")))
 
counter, s, d = 0, 0, 0
 
while len(numbers): 
 
    m = max(numbers[0], numbers[-1])
 
    if counter % 2 == 0: s += m
    else : d += m
 
    if m == numbers[0]: numbers.remove(numbers[0])
    else : numbers.remove(numbers[-1])
 
    counter+=1
 
print(f"{s} {d}")
