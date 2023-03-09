#include <sstream>
#include <iostream>
#include <iomanip>

using namespace std;

struct Dlist
{

	int info;
	Dlist* next, * prev;

};


int main()
{

	Dlist* head, * p, * r;
	int x, k, y;
	int max, i, a, b;
	float sr;
	cin >> x;
	head = new Dlist;
	head->info = x;
	p = head;

	a = 0;
	k = 0;

	cin >> x;
	while (x)
	{
		r = new Dlist;
		r->info = x;
		r->prev = p;
		p->next = r;
		p = r;
		cin >> x;

	}

	head->prev = p;
	p->next = head;

	p = head;

	do
	{

		if ((p->info + p->prev->info) > p->next->info)
		{

			k++;

		}

		p = p->next;

	} while (p != head);

	cout << k;

}