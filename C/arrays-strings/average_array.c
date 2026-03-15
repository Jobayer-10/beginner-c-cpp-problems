#include <stdio.h>

int main() {
    int arr[100], n;
    float sum=0;

    printf("Enter size: ");
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }

    printf("Average = %.2f", sum/n);

    return 0;
}
