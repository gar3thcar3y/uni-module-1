#include <stdio.h>
#include <string.h>
#include <limits.h> // For INT_MAX
#include <unistd.h>

float rtotal(float r1, float r2, float r3){
    if (r1 == 0 || r2 == 0 || r3 == 0) {
        printf("Error: Resistance values must be greater than zero.\n");
        return -1;
    }
    return 1/(1/r1 + 1/r2 + 1/r3);
}

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
    printf("}\n");


    char txt[] = "We are the so-called \"Vikings\" from the north.";
    printf(txt);
    
    char txt1[100] = "hello";
    char txt2[] = " world";
    strcat(txt1, txt2);
    printf("\n%s",txt1);

    printf("\n%f", rtotal(1, 2, 3));


    // Create an integer variable that will store the number we get from the user
    int myNum;

    // Ask the user to type a number
    printf("Type a number: \n");

    // Get and save the number the user types
    scanf("%d", &myNum);

    // Output the number the user typed
    printf("Your number is: %d", myNum);

    sleep(5);

    return 0;
}
