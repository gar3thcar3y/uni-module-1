#include <stdio.h>
#include <string.h>
#include <limits.h> // For INT_MAX
#include <unistd.h>
#include <stdbool.h>
#include <string.h>


#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int *data;
    size_t size;
    size_t capacity;
} Vector;

// Initialize the vector
void vector_init(Vector *vector) {
    vector->size = 0;
    vector->capacity = 4;  // Starting with an initial capacity
    vector->data = (int *)malloc(vector->capacity * sizeof(int));
}

// Resize the vector if needed
void vector_resize(Vector *vector) {
    vector->capacity *= 2;
    vector->data = (int *)realloc(vector->data, vector->capacity * sizeof(int));
}

// Add an element to the vector
void vector_add(Vector *vector, int value) {
    if (vector->size >= vector->capacity) {
        vector_resize(vector);
    }
    vector->data[vector->size++] = value;
}

// Get an element at a specific index
int vector_get(Vector *vector, size_t index) {
    if (index >= vector->size) {
        printf("Index out of bounds!\n");
        exit(1);
    }
    return vector->data[index];
}

// Free the allocated memory
void vector_free(Vector *vector) {
    free(vector->data);
}




float rtotal(float r1, float r2, float r3){
    if (r1 == 0 || r2 == 0 || r3 == 0) {
        printf("Error: Resistance values must be greater than zero.\n");
        return -1;
    }
    return 1/(1/r1 + 1/r2 + 1/r3);
}

void printarr(int* arr, int size){
    printf("\n{");
    for(int i=0; i<size; i++){
        printf("%d",arr[i]); printf(",");
    }
    printf("}\n");
}

void edit(char* ch){
    *ch = 'h';
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
        printf("%d",arr[i]); printf(", ");
    }
    printf("}\n");

    printarr(arr, sizeof(arr)/sizeof(arr[0]));


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

    //pointers test

    int anum = 10;
    int* pointer = &anum;
    printf("\na number: "); printf("%d", anum);
    printf("   \nthe pointer: "); printf("%p", pointer);
    printf("\nvalue from pointer: "); printf("%d", *pointer);
    char achar = 'a';
    printf("\n%c", achar);
    edit(&achar);
    printf("\n%c", achar);

    bool mathstuff = false;
    printf("\n %d", mathstuff);

    int num3 = 7;
    int* pointer1 = &num3;
    int** pointer2 = &pointer1;
    **pointer2 = 11;
    printf("\n%d", **pointer2);

    Vector alist;
    vector_init(&alist);
    vector_add(&alist, 10);
    printf("\n%d", vector_get(&alist, 0));
    vector_add(&alist, 100);
    printf("\n index 1: %d", vector_get(&alist, 1));
    char str1 = "hello";
    char str2 = "world";
    strcat(str1, str2);
    printf("\n", str1);
    return 0;
}
