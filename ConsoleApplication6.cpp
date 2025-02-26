#include <iostream>

int main() {

    setlocale(LC_ALL, "Ru");
    
    //int a = 5;  // 0101 в двоичном виде
    //int b = 3;  // 0011 в двоичном виде
    //int result = a & b;  // Побитовое И

    //b &= a; // b = b & a;

    //std::cout << "a & b = " << result << std::endl;  // 0001 (1 в десятичном виде)

    /*int number = 7;
    if ((number & 1) == 0) {
        std::cout << "Число четное" << std::endl;
    }
    else {
        std::cout << "Число нечетное" << std::endl;
    }*/
    
    //const int READ = 1; //  0001
    //const int WRITE = 2; // 0010
    //const int EXEC = 4; //  0100
    //const int HIDDEN = 8; //1000

    //int status_file = 7;  //0111

    //if ((status_file & READ) != 0)
    //    std::cout << "Файл можно читать" << std::endl;

    //if ((status_file & WRITE) != 0)
    //    std::cout << "Файл можно писать" << std::endl;

    //if ((status_file & EXEC) != 0)
    //    std::cout << "Файл можно исполнять" << std::endl;

    //if ((status_file & HIDDEN) != 0)
    //    std::cout << "Файл скрытый" << std::endl;


   /* int number = 20;

    for (; number != 1 ;) {

        if (number % 2 != 0) {
            std::cout << "Не степень двойки" << std::endl;
            break;
        }
        number /= 2;

    }
    if (number == 1)
        std::cout << "Cтепень двойки" << std::endl;

  
    number = 20;

    if ((number & (number - 1)) == 0) {
        std::cout << "Число является степенью двойки" << std::endl;
    }
    else {
        std::cout << "Число не является степенью двойки" << std::endl;
    }*/

    //int a = 5;  // 0101 в двоичном виде
    //int b = 3;  // 0011 в двоичном виде
    //int result = a | b;  // Побитовое ИЛИ

    //b |= a;

    //std::cout << "a | b = " << result << std::endl;  // 0111 (7 в десятичном виде)

    //const int READ = 1; //  0001
    //const int WRITE = 2; // 0010
    //const int EXEC = 4; //  0100
    //const int HIDDEN = 8; //1000

    //int status_file = READ | EXEC | WRITE;  //0111

    //if ((status_file & READ) != 0)
    //    std::cout << "Файл можно читать" << std::endl;

    //if ((status_file & WRITE) != 0)
    //    std::cout << "Файл можно писать" << std::endl;

    //if ((status_file & EXEC) != 0)
    //    std::cout << "Файл можно исполнять" << std::endl;

    //if ((status_file & HIDDEN) != 0)
    //    std::cout << "Файл скрытый" << std::endl;


   // int a = 5;
   // int b = 10;

   // std::cout << " a = " << a << " b = " << b << std::endl;

   ///* int t = a;
   // a = b;
   // b = t;

   // std::cout << " a = " << a << " b = " << b << std::endl;*/

   // a = a ^ b;  // a = 5 ^ 10
   // b = a ^ b;  // b = (5 ^ 10) ^ 10 = 5
   // a = a ^ b;  // a = (5 ^ 10) ^ 5 = 10

   // std::cout << " a = " << a << " b = " << b << std::endl;


    int arr[]{ 1,2,7,3,3,4,4,15,15,6,6,7,2,8,1,8,19 };

    int result = arr[0];
    for (int i = 1; i < sizeof(arr) / sizeof(arr[0]); i++)
        result ^= arr[i]; // result = result ^ arr[i]

    std::cout << result << std::endl;




}

