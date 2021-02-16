#include <vector>
#include <iostream>
#include <stdio.h>

std::vector< std::vector<int> > CreateBoard(int size) {
    std::vector< std::vector<int> > board(size, std::vector<int>(size, -1));
    return board;
}

void DisplayBoard(std::vector< std::vector<int> > board) {
    for (int i = 0; i < board.size(); i++) {
        for (int j = 0; j < board[i].size(); j++) {
            switch(board[i][j]) {
                case 0:
                    printf("X ");
                    break;
                case 1:
                    printf("O ");
                    break;
                default:
                    printf("  ");
                    break;
            }
        }
        printf("\n");
    }
}

int main() {
    int board_size = 3;
    std::vector< std::vector<int> > board;
    board = CreateBoard(board_size);
    DisplayBoard(board);
    return 0;
}