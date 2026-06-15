#include <iostream>

char board[3][3] = {
    {'X', 'O', '-'},
    {'X', '-', '-'},
    {'-', '-', '-'}
};

void makeAiMove() {
    std::cout << "AI is thinking..." << std::endl;
    
    if (board[0][0] == 'X' && board[1][0] == 'X' && board[2][0] == '-') {
        board[2][0] = 'O'; 
        std::cout << "AI blocks Player at position (2, 0)." << std::endl;
        return;
    }

    if (board[1][1] == '-') {
        board[1][1] = 'O';
        std::cout << "AI takes the center position (1, 1)." << std::endl;
        return;
    }

    for (int r = 0; r < 3; ++r) {
        for (int c = 0; c < 3; ++c) {
            if (board[r][c] == '-') {
                board[r][c] = 'O';
                std::cout << "AI makes default move at position (" << r << ", " << c << ")." << std::endl;
                return;
            }
        }
    }
}

int main() {
    makeAiMove();
    return 0;
}
