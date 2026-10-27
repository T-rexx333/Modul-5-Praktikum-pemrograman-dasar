#include <stdio.h> 
int reverse(int n){ 
// Lengkapi Function ini 
    int result = 0;
    while(n > 0){
        result = result * 10 + n % 10;
        n = n / 10;
    }
    return result;
} 
int main() { 
int A, B; 
scanf("%d %d",&A,&B); 
A=reverse(A); 
B=reverse(B); 
int C = A+B; 
printf("%d",reverse(C)); 
} 