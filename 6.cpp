#include <iostream>
using namespace std;

struct node
{
	int data;
	node* next;
};

struct queue
{
	int size;
	node* first;
	node* last;
};

//Создание очереди..
void create(queue *q)
{
	q->first = new node();
	q->first->next = NULL;
	q->last = q->first;
	q->size = 0;
}

//Проверка очереди на пустоту..
bool isempty(queue *q)
{
	if (q->first == q->last) return true;
	else return false;
}

//Добавление элемента в начало очереди..
void addFirst(queue* q)
{

}

//Добавление элемента в конец очереди..
void addLast(queue *q)
{
	int value; 
	cout << "Введите значение: ";
	cin >> value;
	q->last = q->last->next;
	q->last->next = NULL;
	q->last->data = value;
	q->size++;
	cout << "Элемент добавлен.";
}

//Удаление элемента из очереди..
void del(queue *q)
{
	node *temp = new node();
	temp = q->first;
	q->first = q->first->next; 
	q->size--;
	delete temp;
	cout << "Элемент удален.";
}

//Вывод элементов очереди с начала..
void printFirst(queue* q)
{
	if (isempty(q))
	{
		cout << "Очередь пуста!";
		return;
	}
	node* p = q->first;
	while (p)
	{
		cout << p->data;
		p = p->next;
	}
	cout << endl;
}

//Вывод эдементов очереди с конца..
void printLast()
{

}

//Очистка очереди..
void clear()
{

}

//Индивидуальное задание..
void ex()
{

}


int main()
{
	setlocale(LC_ALL,"ru");

	queue* q;
	create(queue * q);

	int choice; cin >> choice;
	while (true)
	{
		switch (choice)
		{
		case 1:
			add(queue * q);
			break;
		case 2:

			break;
		case 3:

			break;
		}
		cout << "Выберите действие:" << endl
			<< "1)Добавление элемента в очередь;" << endl
			<< "2)Удаление элемента из очереди;" << endl
			<< "3)Вывод элементов очереди с начала;" << endl
			<< "4)Вывод элементов очереди с конца;" << endl
			<< "5)Очистка очереди;" << endl
			<< "6)Индивидуальное задание;" << endl
			<< "7)Выход;" << endl;
		cin >> choice;
	}
	return 0;
}