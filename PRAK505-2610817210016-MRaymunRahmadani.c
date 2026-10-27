#include <stdio.h>

void Biodata(int yearofbirth, char name[], char origin[]){
    int current_year = 2020;
    int age = current_year - yearofbirth;
    int generation = yearofbirth + age;


    printf("Perkenalkan Nama Saya : %s\n", name);
    printf("Umur Saya : %d\n", age);
    printf("Saya Adalah Angkatan : %d\n", generation);
    printf("Asal Saya dari : %s\n", origin);
}


int main() {
    int yearofbirth;
    char A[20], B[15];
    scanf(" %d",&yearofbirth);
    scanf(" %[^\n]%*c",&A);
    scanf(" %[^\n]%*c",&B);
    Biodata(yearofbirth, A, B);
    return 0;
}