def Biodata(yearofbirth, name, origin):
    current_year = 2020
    age = current_year - yearofbirth
    generation = yearofbirth + age

    print("Perkenalkan Nama Saya :", name)
    print("Umur Saya :", age)
    print("Saya Adalah Angkatan :", generation)
    print("Asal Saya dari :", origin)


def main():
    yearofbirth = int(input())
    A = input()
    B = input()
    Biodata(yearofbirth, A, B)

main()