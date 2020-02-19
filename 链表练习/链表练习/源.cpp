#include <iostream>
using namespace std;
typedef int myint;
struct LNode{
	myint x;
	LNode* next;
};
typedef LNode* point;
void input(myint* a)
{
	cin >> *a;
}
void creat(point* l, int n, void (*input)(myint* a))
{
	point s;
	(*l) = new LNode;
	(*l)->next = NULL;
	for (; n > 0; n--)
	{
		s = new LNode;
		input(&s->x);
		s->next = (*l)->next;
		(*l)->next = s;
	}
}
int main()
{
	point l; int n; cin >> n;
	creat(&l,n, input);
	return 0;
}