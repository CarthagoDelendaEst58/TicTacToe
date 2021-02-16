#include <vector>
#include <iostream>
#include <stdio.h>
#include <string>

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

void GetPlayerChoice(int & x, int & y) {
    std::string response;
    printf("Enter x coordinate for next move: ");
    std::cin >> response;
    printf("\n");
    x = std::stoi(response);
    printf("Enter y coordinate for next move: ");
    std::cin >> response;
    printf("\n");
    y = std::stoi(response);
}

std::vector< std::vector<int> > PlaceMarker(int const x, int const y, std::string marker, std::vector< std::vector<int> > board) {
    if (x >= 0 && x < board.size() && y >= 0 && y < board.size()) {
        if (board[y][x] == -1) {
            if (marker == "X" || marker == "x") {
                board[y][x] = 0;
            }
            else if (marker == "O" || marker == "o") {
                board[y][x] = 1;
            }
            else {
                printf("Invalid marker type...\n");
                return board;
            }
            return board;
        }
        else {
            printf("Space is already occupied...\n");
            return board;
        }
    }
    else {
        printf("Coordinates not in bounds...\n");
        return board;
    }
}

int main() {
    int board_size = 3;
    std::vector< std::vector<int> > board;
    board = CreateBoard(board_size);
    int x = -1;
    int y = -1;
    GetPlayerChoice(x, y);
    std::string marker = "X";
    board = PlaceMarker(x, y, marker, board);
    DisplayBoard(board);
    return 0;
}