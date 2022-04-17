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
bool check(queue *q)
{
	if (q->first == q->last) return true;
	else return false;
}

//Добавление элемента в очередь..
void add(queue *q)
{
	int value; 
	cout << "Введите значение: ";
	cin >> value;
	q->last = q->last->next;
	q->last->data = value;
	q->last->next = NULL;
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

//Вывод очереди..
void show()
{

}

//Удаление очереди..
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
	
}