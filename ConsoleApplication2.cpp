#include <iostream>
#include <bitset>

struct person {
	std::string name;
	int age;
	std::string phone;

};

bool isYoung(int v) {
	return (v < 16);
}

void print_person(const struct person& abstruct_persona) {
	std::cout << "Name  = " << abstruct_persona.name << std::endl;
	std::cout << "Age  = "  << abstruct_persona.age << std::endl;
	std::cout << "Phone  = " << abstruct_persona.phone << std::endl;

	
}

struct Test
{
	int a;
	int b;

};

struct Test1
{
	//double b;	
	//int a;
	char c2;	
	char c1;
	char c4;
	char c3;
	char c5;
};

void print_stars(int c) {

	if (c == 0)
		return;

	for (int i = 0; i < c ; i++)
		std::cout << "*";
	std::cout << std::endl;

	print_stars(c - 1);
}


int factorial(int a) {

	if (a == 0)
		return 1;
		
	return a * factorial(a - 1);

}

int main_23()
{
	int a = 5, b = 10;
	a = a ^ b;  // a = 5 ^ 10
	b = a ^ b;  // b = (5 ^ 10) ^ 10 = 5
	a = a ^ b;  // a = (5 ^ 10) ^ 5 = 10
	std::cout << "a = " << a << ", b = " << b << std::endl;  // a = 10, b = 5

	print_stars(10);


	/*int a = 5;
	int f = 1;

	for (int i = 5; i > 0; i--) {
		f *= i;
	}

	std::cout << f << std::endl;
	std::cout << factorial(a) << std::endl;*/

	//std::cout << "Size = " << sizeof(Test1) << std::endl;

	return 0;


	Test t{ 1,2 };

	std::cout <<"Size = " << sizeof(t) << std::endl;
	std::cout << "t.a = " << t.a << " t.b = " << t.b << std::endl;

	Test* ptr = &t;

	std::cout << "ptr = " << ptr << std::endl;

	std::cout << "*ptr = " << ptr->a << std::endl;

	char* ptr1 = (char*)&t;

	std::cout << "ptr1 = " << ptr1 << std::endl;

	for (int i = 0 ; i < sizeof(t); i++)
		std::cout << (int) ptr1[i] << std::endl;

	//struct person p = {"Ivan", 133, "+79211111111"};

	//print_person(p);
	//print_person({ "Ivan", 133, "+79211111111" });
	////p.age = 33;
	////p.name = "Kostya";
	////p.phone = "+7921111111";


	//person p1;

	//person arr[10]{ 
	//	{"Kostya 1", 33, "+79211111111"},
	//	{"Kostya 2", 33, "+79211111111"},
	//	{"Kostya 3", 33, "+79211111111"},
	//	{"Kostya 4", 33, "+79211111111"},
	//	{ "Kostya 5", 33, "+79211111111" },
	//	{},{},
	//	{"Kostya 7", 33, "+79211111111"} };

	//for (int i = 0; i < 10; i++) {
	//	std::cout << "Person " << (i + 1) << std::endl;
	//	std::cout << "--------------------------------" << std::endl;
	//	print_person(arr[i]);
	//	if (isYoung(arr[i].age)) {
	//		std::cout << " It`s young person!" << std::endl;
	//	}
	//	else {
	//		std::cout << " It`s OLD person!" << std::endl;
	//	}
	//		
	//	std::cout << "--------------------------------" << std::endl;
	//	

	//	person* ptr = new person;

	//	(*ptr).age = 67;

	//	ptr->age = 67;

	//	delete ptr;

	//	person* ptr1 = new person[100];

	//	ptr1[99].age = 896;
	//	
	//	delete [] ptr1;
	//		
	//	//std::cout << arr[i].name << " " << arr[i].age << " " << arr[i].phone << std::endl;
	//}
	
}


int main()
{
	//unsigned int number{ 0b0000'1100 };
	//std::cout << number << std::endl;
	//
	////
	//unsigned int a = 2 << 2; // 2 = 10 (в двоичной); 1000 = 8 (в десятичной)
	//unsigned int b = 16 >> 3; // 16 = 10000 (в двоичной); 10 = 2 (в десятичной) 

	//std::cout << a << std::endl;
	//std::cout << b << std::endl;

	//int e = 5 | 2; // | - поразрядная дизъюнкция (ИЛИ)
	//// 5 = 101
	//// 2 = 010
	//// 7 = 111
	//// Если хотя бы один из соответсвующих разрядов = 1, то разряд итогового
	//// числа = 1

	//int f = 6 & 2; // & - поразрядная конъюнкция (И)
	//// 6 = 110
	//// 2 = 010
	//// 2 = 010
	//// Если оба разряда равны = 1, то разряд итогового числа = 1

	//int c = 6 ^ 2; // ^ - поразрядное исключающее ИЛИ
	//// 6 = 110
	//// 2 = 010
	//// 4 = 100
	//// Итоговое число получает в разряд единицу только в том случае,
	//// если единице равен разряд ТОЛЬКО одного из чисел

	//int d = ~9; // ~ - поразрядное отрицание (инверсия)
	//// 9 = 0'1001
	//// -10 = 1'1010

	//std::cout << e << " " << f << " " << c << " " << d << std::endl;

	//int value1{ 3 };
	//int value2{ 2 };
	//int value3{ 1 };
	//int result{ 0b0000'0000 };

	//result = result | value1;
	//// 0b0000'0011
	//result = result << 2;
	//// 0b0000'1100
	//result = result | value2;
	//// 0b0000'1110
	//result = result << 2;
	//// 0b0011'1000
	//result = result | value3;
	//// 0b0011'1001
	//std::cout << result << std::endl;

	//int result_new{ 0b0011'1001 };
	//int newValue3 = result_new & 0b0000'0011;
	//// 0b0000'0001 = 1
	//result_new = result_new >> 2;
	//// 0b0000'1110
	//int newValue2 = result_new & 0b0000'0011;
	//// 0b0000'0010 = 2
	//result_new = result_new >> 2;
	//int newValue1 = result_new & 0b0000'0011;
	//std::cout << newValue3 << " " << newValue2 << " " << newValue1;
	//std::cout << std::endl;

	/*
		Одна из форм определения цвета представляет запись в формате RGB,
		где R,G и B - соответственно компоненты красного, зеленого и синего
		цвета. Каждая компонента может иметь значение 0 до 255.
		Напишите программу, которая считывает с консоли значения для трёх
		компонент цвета и сохраняет их в числовую переменную color.
	*/

	
	//std::cout << std::bitset<32>(-10)  << std::endl;

	//return 0;


	unsigned int color{}; // переменная для хранения итогового цвета RGB
	unsigned int c{}; // переменная для хранения ввода из консоли

	std::cout << "Red (0 - 255): ";
	std::cin >> c;
	color |= c; // <=> color = color | c;
	std::cout << "Color 1 = " << std::bitset<32>(color) << std::endl;

	std::cout << "Green: ";
	std::cin >> c;
	color <<= 8; // <=> color = color << 8;
	std::cout << "Color 2 = " << std::bitset<32>(color) << std::endl;
	color |= c;
	std::cout << "Color 3 = " << std::bitset<32>(color) << std::endl;

	std::cout << "Blue: ";
	std::cin >> c;
	color <<= 8;
	std::cout << "Color 4 = " << std::bitset<32>(color) << std::endl;
	color |= c;


	std::cout << std::bitset<32>(color) << std::endl << std::endl << std::endl;

	int blue = color & 0b1111'1111; //  0b1111'1111 = 255 =  0xFF
	color >>= 8;
	int green = color & 0b1111'1111;
	color >>= 8;
	int red = color & 0b1111'1111;

	std::cout << "Red = " << red << " Green = " << green << " Blue = " << blue << std::endl;

	/*
		1. Напишите программу, которая считывает с консоли три символа и упаковывает в одно число.
		2. Вывести полученное число в консоль.
		3. Распакуйте полученное число и выведете символы на экран.

		Подсказка:
			п.1. Символы == байты
			п.2. Максимальное значение символа = 255, или в виде {0xFF}
	*/
}