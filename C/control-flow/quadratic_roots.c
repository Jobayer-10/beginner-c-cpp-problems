#include <stdio.h>
#include <math.h>

int main() {
    float a,b,c,root1,root2,discriminant;

    printf("Enter a, b, c: ");
    scanf("%f %f %f",&a,&b,&c);

    discriminant = b*b - 4*a*c;

    if(discriminant > 0){
        root1 = (-b + sqrt(discriminant)) / (2*a);
        root2 = (-b - sqrt(discriminant)) / (2*a);
        printf("Roots: %.2f and %.2f", root1, root2);
    }
    else if(discriminant == 0){
        root1 = -b/(2*a);
        printf("Equal Roots: %.2f", root1);
    }
    else{
        printf("Complex Roots");
    }

    return 0;
}
