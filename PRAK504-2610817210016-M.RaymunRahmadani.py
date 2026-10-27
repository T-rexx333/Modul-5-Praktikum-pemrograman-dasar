def reverse(n):
    result = 0
    while n > 0:
        result = result * 10 + n % 10
        n = n // 10
    return result


def main():
    A, B = map(int, input().split())
    A = reverse(A)
    B = reverse(B)
    C = A + B
    print(reverse(C))


main()