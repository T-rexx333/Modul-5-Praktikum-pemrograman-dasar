def count(grade1, grade2):
    return (grade1 - grade2)

def mutlak(number):
    if (number < 0): return -number
    return number

a, c, b, d = map(int, input().split())
Count = count(a,b) + count(c,d)

print(mutlak(Count))