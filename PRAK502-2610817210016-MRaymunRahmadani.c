#include <stdio.h> 
#include <math.h> 

int Count(int grade1, int grade2){ 
//Lengkapi Function ini 
return (grade1 - grade2);
} 

int mutlak(int number){ 
//Lengkapi Function ini 
if (number < 0){
    return -number;
}
return number;
} 

int main() 
{ 
int a,b,c,d, Result;
scanf("%d",&a); 
scanf("%d",&c); 
scanf("%d",&b); 
scanf("%d",&d); 
Result = Count(a,b) + Count(c,d); 
printf("%d",mutlak(Result)); 
return 0; 
} 