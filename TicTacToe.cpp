#include <vector>
#include <iostream>
#include <stdio.h>

std::vector< std::vector<int> > CreateBoard(int size) {
    std::vector< std::vector<int> > board(size, std::vector<int>(size, -1));
    return board;
}

void DisplayBoard(std::vector< std::vector<int> > board, int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            std::cout << board[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

int main() {
    int board_size = 3;
    std::vector< std::vector<int> > board;
    board = CreateBoard(board_size);
    // for (int i = 0; i < board_size; i++) {
    //     for (int j = 0; j < board_size; j++) {
    //         printf("%d ", board[i][j]);
    //     }
    //     printf("\n");
    // }
    return 0;
}