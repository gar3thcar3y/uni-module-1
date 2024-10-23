#include <stdio.h>
#include <string.h>
#include <limits.h> // For INT_MAX
#include <unistd.h>
#include <stdbool.h>

struct PIECE{
    char type [];
}

struct SPACE{
    struct PIECE piece;
    bool used = false;

}


//
struct BOARD{
    struct SPACE spaces[8][8];
}
//

int main(){
    
    return 0;
}