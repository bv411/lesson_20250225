#include <iostream>
#include <chrono>
#include <thread>


/*
#include <windows.h>

HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
    std::cout << "Этот текст красный" << std::endl;

// Сброс к стандартному цвету
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
*/

//#define BLACK   "\033[30m"      /* Black */
//#define GREEN   "\033[32m"      /* Green */
//#define YELLOW  "\033[33m"      /* Yellow */
//#define BLUE    "\033[34m"      /* Blue */
//#define MAGENTA "\033[35m"      /* Magenta */
//#define CYAN    "\033[36m"      /* Cyan */
//#define WHITE   "\033[37m"      /* White */


// ANSI коды для цветов текста
#define RESET   "\033[0m"
#define RED     "\033[31m"      /* Red */

const int size = 6;
int board[size][size] {};

int steps [8][2]{{-1,2},{1,2},{1,-2},{-1,-2},{-2,1},{2,1},{-2,-1},{2,-1}};

void print_board() {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++)
            std::cout << board[i][j] << "\t";
        std::cout << std::endl;
    }
}


void print_board(int count_move) {
    system ("clear");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++){
            if (board[i][j] == count_move)
                std::cout <<RED<< board[i][j] <<RESET<< "\t";
            else
                std::cout << board[i][j] << "\t";
        }
        std::cout << std::endl;
    }
    std::this_thread::sleep_for(std::chrono::milliseconds(1000));
}


bool is_valid_step(int x, int y) {
    return (x >= 0 && x < size && y >= 0 && y < size && board[x][y] == 0);
}

bool move(int x, int y, int count_move) {

    if (count_move == size * size)
        return true;

    for (int i = 0; i < 8; i++) {

        int new_x = x + steps[i][0];
        int new_y = y + steps[i][1];

        if (is_valid_step(new_x, new_y)) {
            board[new_x][new_y]= count_move+1;

            // Для иллюстрации вывода работы алгоритма
            //print_board(count_move+1);

            if (move(new_x, new_y, count_move + 1)) {
                return true;
            }
            board[new_x][new_y] = 0;
        }
    }
    return false;
}

int main() {
    setlocale(LC_ALL, "");

    int start_x, start_y;
    std::cout << "Введите координаты начальной точки коня от 0 до 5(через пробел)" << std::endl;
    std::cin >> start_x >> start_y;

    if (start_x < 0 || start_x >= size || start_y < 0 || start_y >= size) {
        std::cout << "Неверные координаты!" << std::endl;
        return 0;
    }

    board[start_x][start_y] = 1;

    if (move(start_x, start_y, 1)) {
        std::cout << "Путь найден!" << std::endl;
        print_board();
    } else
        std::cout << "Путь не найден! " << std::endl;

    return 0;
}
