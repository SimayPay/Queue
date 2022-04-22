#include <iostream>
#include <queue>
using namespace std;

//Добавление элемента в начало очереди..
void push_back()
{

}

//Добавление элемента в конец очереди..
void push_front()
{

}

//Просмотр очереди с конца..
void print_back()
{

}

//Просмотр очереди с начала..
void print_front()
{

}

//Индивидуальное задание..
void ex()
{

}


int main()
{
	setlocale(LC_ALL, "RU");

	queue <int> q;

	cout << "Выберите действие: " << endl
		<< "1 .Добавить элемент в конец очереди;" << endl
		<< "2. Добавить элемент в начало очереди;" << endl
		<< "3. Вывести очередь с конца;" << endl
		<< "4 .Вывести очередь с начала;" << endl
		<< "5. Индивидуальный вариант;" << endl
		<< "6. Выход;" << endl;

	int choose; cin >> choose;
	while (choose != 6)
	{
		switch (choose)
		{
		case 1:
			push_back();
			break;
		case 2:
			push_front();
			break;
		case 3:
			print_back();
			break;
		case 4:
			print_front();
			break;
		case 5:
			ex();
			break;
		case 6:
			return 0;
		default:
			cout << "Неправильно выбрано действие..";
			break;
		}

		cout << "Выберите действие: " << endl
			<< "1 .Добавить элемент в конец очереди;" << endl
			<< "2. Добавить элемент в начало очереди;" << endl
			<< "3. Вывести очередь с конца;" << endl
			<< "4 .Вывести очередь с начала;" << endl
			<< "5. Индивидуальный вариант;" << endl
			<< "6. Выход;" << endl;
		cin >> choose;
	}
}

