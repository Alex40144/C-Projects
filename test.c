#include <stdio.h>
#include <windows.h>
 
int main(void) {
    int tiles[3][3][3];
    for (int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            for(int k = 0; k < 3; k++){
                tiles[i][j][k] = rand() % 100;
            }
        }
    }

    for (int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            for(int k = 0; k < 3; k++){
                printf("%d\n", tiles[i][j][k]);
            }
        }
    }
}
