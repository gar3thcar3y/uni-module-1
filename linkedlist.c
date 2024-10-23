#include <stdio.h>

struct list{
    int value;
    struct *listobj next;
}


struct list get(struct list *LIST, int ind){
    struct list value = *LIST;
    for(int i = 0; i < ind; i++){
        value = *(value.next);
    }
    return value
}
void append(struct list *LIST, int value){
    struct list last = get()
}


int main(){
    printf("hello world");
    return 0;
}