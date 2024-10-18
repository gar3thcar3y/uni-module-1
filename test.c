#include <stdio.h>

int main() {
    float num = 0.111;
    int arr[] = {1, 2, 3, 4, 5};
    printf("Hello World!");
    printf("\n%s","num=");
    printf("%f", num);
    printf("\n%d", arr[1]);
    printf("\n%lu", sizeof(arr));
    printf("\n%lu", sizeof(arr[0]));
    printf("\n%lu", sizeof(num));

    printf("\n{");
    for(int i=0; i<sizeof(arr)/sizeof(arr[0]); i++){
        printf("%d",arr[i]); printf(",");
    }
    printf("}");

    return 0;
}
