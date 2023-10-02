#include <stdio.h>

char board[4][4];

void initialize_board() {
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 4; j++)
            board[i][j] = ' ';
}

void print_board() {
    printf(" %c | %c | %c | %c\n", board[0][0], board[0][1], board[0][2], board[0][3]);
    printf("---+---+---+---\n");
    printf(" %c | %c | %c | %c\n", board[1][0], board[1][1], board[1][2], board[1][3]);
    printf("---+---+---+---\n");
    printf(" %c | %c | %c | %c\n", board[2][0], board[2][1], board[2][2], board[2][3]);
    printf("---+---+---+---\n");
    printf(" %c | %c | %c | %c\n", board[3][0], board[3][1], board[3][2], board[3][3]);
}

int check_winner(char player) {
    for (int i = 0; i < 4; i++) {
        if (board[i][0] == player && board[i][1] == player && board[i][2] == player && board[i][3] == player)
            return 1;
        if (board[0][i] == player && board[1][i] == player && board[2][i] == player && board[3][i] == player)
            return 1;
    }
    if (board[0][0] == player && board[1][1] == player && board[2][2] == player && board[3][3] == player)
        return 1;
    if (board[0][3] == player && board[1][2] == player && board[2][1] == player && board[3][0])
        return 1;
    return 0;
}

int is_board_full() {
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 4; j++)
            if (board[i][j] == ' ')
                return 0;
    return 1;
}

int main() {
    int row, col, currentPlayer = 1;
    initialize_board();

    printf("Tic Tac Toe\n");
    printf("Player 1 (X) - Player 2 (O)\n");

    while (1) {
        print_board();

        printf("Player %d, enter row (0-3) and column (0-3) to place your symbol: ", currentPlayer);
        scanf("%d %d", &row, &col);

        if (row < 0 || row > 3 || col < 0 || col > 3 || board[row][col] != ' ') {
            printf("Invalid move. Try again.\n");
            continue;
        }

        board[row][col] = (currentPlayer == 1) ? 'X' : 'O';

        if (check_winner(board[row][col])) {
            print_board();
            printf("Player %d wins!\n", currentPlayer);
            break;
        } else if (is_board_full()) {
            print_board();
            printf("It's a draw!\n");
            break;
        }

        currentPlayer = (currentPlayer == 1) ? 2 : 1;
    }

    return 0;
}