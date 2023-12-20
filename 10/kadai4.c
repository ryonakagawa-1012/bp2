/* 
    魔方陣判定
    354017 中川 諒
*/

#include <stdio.h>

#define TRUE 1
#define FALSE 0

#include <stdio.h>

#define TRUE 1
#define FALSE 0

int is_Magic_Square(int square[3][3]){
    int vertical = 0;
    int side = 0;
    int diagonal_1 = 0;
    int diagonal_2 = 0;
    int is_same = FALSE;

    // printf("%d %d %d %d\n", vertical, side, diagonal_1, diagonal_2);

    for (int i = 0; i < 3; i++){
        vertical = side = diagonal_1 = diagonal_2 = 0;
        for (int j = 0; j < 3; j++){
            vertical += square[j][i];
            side += square[i][j];
            diagonal_1 += square[j][j];
            diagonal_2 += square[j][2-j];
            // printf("%d\n", square[j][j]);
        }
        // printf("%d %d %d %d\n", vertical, side, diagonal_1, diagonal_2);
        if (vertical == side && side == diagonal_1 && diagonal_1 == diagonal_2){
            is_same = TRUE;
        } else {
            is_same = FALSE;
            break;
        }
    }
    return is_same;
}

int main(){
    int square[3][3];

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            scanf("%d", &square[i][j]);
        }
    }

    /*
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            printf("%d ", square[i][j]);
    }
        printf("\n");
    }
    */

    if (is_Magic_Square(square)){
        printf("Magic Square\n");
    }else{
        printf("Not Magic Square\n");
    }

    return 0;
}
// C言語はクソ