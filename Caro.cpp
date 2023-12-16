#include <iostream>
#include <iomanip>
using namespace std;

#define max 500

void initializeBoard(char a[][max], int &m) {
    cout << "Enter the size of the board: ";
    cin >> m;

    while (m <= 5) {
        cout << "Please enter a valid size for the board: ";
        cin >> m;
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            a[0][j] = j + '0';
            a[i][0] = i + '0';

            if (i != 0 || j != 0)
                a[i][j] = '.';
        }
    }
}

int isFull(char a[][max], int m) {
    for (int i = 1; i < m; i++) {
        for (int j = 1; j < m; j++) {
            if (a[i][j] == '.')
                return 1;
        }
    }
    return 0;
}

int checkWin(char a[][max], int m, int i, int j, char player) {
    int count = 0;

    // Check row
    for (int col = 1; col < m; col++) {
        if (a[i][col] == player)
            count++;
        else
            count = 0;

        if (count == 5)
            return 1;
    }

    // Check column
    count = 0;
    for (int row = 1; row < m; row++) {
        if (a[row][j] == player)
            count++;
        else
            count = 0;

        if (count == 5)
            return 1;
    }

    // Check diagonal
    count = 0;
    int row = i, col = j;
    while (row > 0 && col > 0) {
        row--;
        col--;
    }

    while (row < m && col < m) {
        if (a[row][col] == player)
            count++;
        else
            count = 0;

        if (count == 5)
            return 1;

        row++;
        col++;
    }

    // Check anti-diagonal
    count = 0;
    row = i, col = j;
    while (row > 0 && col < m) {
        row--;
        col++;
    }

    while (row < m && col >= 0) {
        if (a[row][col] == player)
            count++;
        else
            count = 0;

        if (count == 5)
            return 1;

        row++;
        col--;
    }

    return 0;
}

void displayBoard(char a[][max], int m) {
    cout << "\nThe board is:\n";

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            if (i == 0 || j == 0)
                cout << setw(4) << a[i][j];
            else
                cout << setw(4) << a[i][j];
        }

        cout << "\n\n";
    }
}

int main() {
    int choice, size, win = 0;
    char player1[20], player2[20];
    char board[max][max];
    int row1, col1, row2, col2;

    cout << "Enter your choice:\n";
    cout << "1 - How to play\n";
    cout << "2 - Start the game\n";
    cout << "3 - Exit\n";
    cout << "Your choice: ";
    cin >> choice;

    do {
        switch (choice) {
            case 1:
                // Instructions function
                cout<<"'THE CARO GAME'."<<endl;
				 
                break;
            case 2:
                cout << "\nGAME START\n";
                cout << "Enter the name of player 1: ";
                cin >> player1;
                cout << "Enter the name of player 2: ";
                cin >> player2;
                initializeBoard(board, size);
                system("cls");
                displayBoard(board, size);

                do {
                    // Player 1's turn
                    if (isFull(board, size) == 1) {
                        cout << player1 << ", it's your turn.\n";
                        cout << "Enter row: ";
                        cin >> row1;
                        cout << "Enter column: ";
                        cin >> col1;

                        while (row1 <= 0 || col1 <= 0 || board[row1][col1] != '.') {
                            cout << "\nInvalid input! Please enter valid coordinates.\n";
                            cout << "Enter row: ";
                            cin >> row1;
                            cout << "Enter column: ";
                            cin >> col1;
                        }

                        board[row1][col1] = 'O';
                        system("cls");
                        displayBoard(board, size);

                        // Check for win conditions
                        if (checkWin(board, size, row1, col1, 'O')) {
                            cout << player1 << " WINS!\n";
                            win = 1;
                            break;
                        }

                        // Check for a draw
                        if (!isFull(board, size)) {
                            cout << "It's a DRAW!\n";
                            break;
                        }
                    }

                    // Player 2's turn
                    if (isFull(board, size) == 1) {
                        cout << player2 << ", it's your turn.\n";
                        cout << "Enter row: ";
                        cin >> row2;
                        cout << "Enter column: ";
                        cin >> col2;

                        while (row2 <= 0 || col2 <= 0 || board[row2][col2] != '.') {
                            cout << "\nInvalid input! Please enter valid coordinates.\n";
                            cout << "Enter row: ";
                            cin >> row2;
                            cout << "Enter column: ";
                            cin >> col2;
                        }

                        board[row2][col2] = 'X';
                        system("cls");
                        displayBoard(board, size);

                        // Check for win conditions
                        if (checkWin(board, size, row2, col2, 'X')) {
                            cout << player2 << " WINS!\n";
                            win = 1;
                            break;
                        }

                        // Check for a draw
                        if (!isFull(board, size)) {
                            cout << "It's a DRAW!\n";
                            break;
                        }
                    }

                } while (isFull(board, size) == 1 && win == 0);

                break;
            case 3:
                // Exit
                break;
            default:
                cout << "Invalid choice. Please enter a valid option.\n";
        }

    } while (choice != 3);

    return 0;
}

