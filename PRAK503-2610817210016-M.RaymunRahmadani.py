def maximum(a, b):
    maks = a
    if b > maks:
        maks = b
    return maks

def minimum(a, b):
    mini = a
    if b < mini:  
        mini = b
    return mini

def main():
    n = int(input())

    nilai_list = list(map(int, input().split()))
    
    maks = nilai_list[0]
    minim = nilai_list[0]
    
    batas = 0
    while batas < n:
        nilai = nilai_list[batas]
        maks = maximum(maks, nilai)
        minim = minimum(minim, nilai)
        batas += 1

    print(f"{maks} {minim}")

if __name__ == "__main__":
    main()