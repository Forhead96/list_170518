#include "List.h"
#include "List.cpp"
using namespace std;
int main()
{
	List<int>L;
	L.add_last(5);
	L.add_last(12);
	L.add_last(112);
	L.add_front(100);
	L.add_front(67);
	L.add_front(58);
	L.remove_last();
	cout << L.size() << endl;
	cout << "The current pointer depends where it is in the index and how many elements are there and if it is in the frontPtr or lastPtr " << endl;
	cout << "Where is it?" << endl;
	cout << "whats it's value" << endl;
	L.print();
	system("pause");
	return 0;
}