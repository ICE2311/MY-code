#include <stdio.h>

int main() {
   int numbers[4];
   int loc = 0,n,a;
   printf("numbers");
   scanf("%d",&a);
   for(int i=1;i<=a;i++){
     scanf("%d",&numbers[i-1]);  
   }
    printf("Enter a number :- ");
    scanf("%d",&n);
    for(int j=0;j<=a;j++){
        if(numbers[j] == n){
           loc = n;
           break;
        }
    }
    if(loc==n){
        printf("number found");
    }
    else{
        printf("not found");
    }
    return 0;
}