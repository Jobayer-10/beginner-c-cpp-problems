#include <stdio.h>

int main() {
    int n, original, reverse=0, r;

    printf("Enter number: ");
    scanf("%d",&n);

    original=n;

    while(n!=0){
        r=n%10;
        reverse=reverse*10+r;
        n/=10;
    }

    if(original==reverse)
        printf("Palindrome");
    else
        printf("Not Palindrome");

    return 0;
}
