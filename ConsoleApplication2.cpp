#include <iostream>

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

int main()
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
