#include <stdio.h>

struct BOARD {
    char* spaces[8][8];  // Each element is a pointer to a string
};

void BOARD_init(struct BOARD* board) {
    // Use an array of strings to initialize the board
    char* initial_spaces[8][8] = {
        {"caW", "knW", "biW", "kiW", "quW", "biW", "knW", "caW"},
        {"paW", "paW", "paW", "paW", "paW", "paW", "paW", "paW"},
        {"   ", "   ", "   ", "   ", "   ", "   ", "   ", "   "},
        {"   ", "   ", "   ", "   ", "   ", "   ", "   ", "   "},
        {"   ", "   ", "   ", "   ", "   ", "   ", "   ", "   "},
        {"   ", "   ", "   ", "   ", "   ", "   ", "   ", "   "},
        {"paB", "paB", "paB", "paB", "paB", "paB", "paB", "paB"},
        {"caB", "knB", "biB", "quB", "kiB", "biB", "knB", "caB"}
    };
    
    // Copy initial values to the board structure
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            board->spaces[i][j] = initial_spaces[i][j];
        }
    }
}


const char knight_W[6][8] = {"   _/)  ",
                         "  /. |= ",
                         " /_) |= ",
                         "(/ ) (= ",
                         "  (   ) ",
                         " [_____]"};

const char caste_W[6][8] = {"  |||   ",
                        "  | |   ",
                        "  ) (   ",
                        "  ) (   ",
                        " (   )  ",
                        "[_____] "};
const char bishop_W[6][8] = {"   ^    ",
                         "  / \\   ",
                         "  ) (   ",
                         "  ) (   ", 
                         " (   )  ",
                         "[_____] "};
const char king_W[6][8] = {"   +    ",
                       "  ^^^   ",
                       "  ( )   ",
                       "  ) (   ",
                       " (   )  ",
                       "[_____] "};
const char queen_W[6][8] = {"   o    ",
                       "  ^^^   ",
                       "  ( )   ",
                       "  ) (   ",
                       " (   )  ",
                       "[_____] "};
const char pawn_W[6][8] = {"        ",
                       "        ",
                       "  ( )   ",
                       "  ) (   ",
                       " (   )  ",
                       "[_____] "};
const char knight_B[6][8] = {"   _/)  ",
                         "  /.||= ",
                         " /_)||= ",
                         "(/ )|(= ",
                         "  (|||) ",
                         " [|||||]"};

const char caste_B[6][8] = {"  |||   ",
                        "  | |   ",
                        "  )|(   ",
                        "  )|(   ",
                        " (|||)  ",
                        "[|||||] "};
const char bishop_B[6][8] = {"   ^    ",
                         "  /|\\   ",
                         "  )|(   ",
                         "  )|(   ", 
                         " (|||)  ",
                     "[|||||] "};
const char king_B[6][8] = {"   +    ",
                   "  ^^^   ",
                   "  (|)   ",
                   "  )|(   ",
                   " (|||)  ",
                   "[|||||] "};
const char queen_B[6][8] = {"   o    ",
                   "  ^^^   ",
                   "  (|)   ",
                   "  )|(   ",
                   " (|||)  ",
                   "[|||||] "};
const char pawn_B[6][8] = {"        ",
                   "        ",
                   "  (|)   ",
                   "  )|(   ",
                   " (|||)  ",
                   "[|||||] "};


void BOARD_move(struct BOARD* board, int sx, int sy, int ex, int ey){
    board->spaces[ex][ey] = board->spaces[sx][sy];
    board->spaces[sx][sy] = "   ";
}

void BOARD_display(struct BOARD* board) {

    for (int i = 0; i < 8; i++) {
        for(int l=0; l<6;l++){
            for (int j = 0; j < 8; j++) {
                if(board->spaces[i][j] == "knW"){
                    printf("%.8s", knight_W[l]); printf("|");
                }if(board->spaces[i][j] == "caW"){
                    printf("%.8s", caste_W[l]); printf("|");
                }if(board->spaces[i][j] == "biW"){
                    printf("%.8s", bishop_W[l]); printf("|");
                }if(board->spaces[i][j] == "kiW"){
                    printf("%.8s", king_W[l]); printf("|");
                }if(board->spaces[i][j] == "quW"){
                    printf("%.8s", queen_W[l]); printf("|");
                }if(board->spaces[i][j] == "paW"){
                    printf("%.8s", pawn_W[l]); printf("|");
                }if(board->spaces[i][j] == "knB"){
                    printf("%.8s", knight_B[l]); printf("|");
                }if(board->spaces[i][j] == "caB"){
                    printf("%.8s", caste_B[l]); printf("|");
                }if(board->spaces[i][j] == "biB"){
                    printf("%.8s", bishop_B[l]); printf("|");
                }if(board->spaces[i][j] == "kiB"){
                    printf("%.8s", king_B[l]); printf("|");
                }if(board->spaces[i][j] == "quB"){
                    printf("%.8s", queen_B[l]); printf("|");
                }if(board->spaces[i][j] == "paB"){
                    printf("%.8s", pawn_B[l]); printf("|");
                }if(board->spaces[i][j] == "   ") {
                    printf("        "); printf("|");
                }
            }
            printf("\n");
        }
        printf("\n");
    }
}

struct player_W{

};

struct player_B{

};

int main() {
    struct BOARD board;
    BOARD_init(&board);
    BOARD_display(&board);
    int x_move_F;
    int y_move_F;
    int x_move_T;
    int y_move_T;
    while(1==1){
        printf("\nselect piece");
        printf("\nx coordinate: ");
        scanf("%d", &x_move_F);
        printf("\ny coordinate: ");
        scanf("%d", &y_move_F);
        printf("\nselect piece");
        printf("\nx coordinate: ");
        scanf("%d", &x_move_T);
        printf("\ny coordinate: ");;
        scanf("%d", &y_move_T);
        BOARD_move(&board, x_move_F, y_move_F, x_move_T, y_move_T);
        BOARD_display(&board);
    }
    return 0;
}
