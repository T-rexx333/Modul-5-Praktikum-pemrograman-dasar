#include <stdio.h> 

int maximum(int a, int b){ 
// Lengkapi Function ini
int max = a;
if (b > max){
    max = b;
}
return max;
} 

int minimum(int a, int b){ 
// Lengkapi Function ini 
int min = a;
if (b < min){
    min = b;
}
return min;
} 

int main(){ 
int batas = 0; 
int maks = -100000; 
int minim = 100000; 
int bilangan; 
scanf("%d", &bilangan); 
while(batas < bilangan){ 
int nilai; 
scanf("%d", &nilai); 
maks = maximum(maks, nilai); 
minim = minimum(minim, nilai); 
batas++; 
} 
printf("%d %d",maks,minim); 
} 