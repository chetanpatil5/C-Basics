#include<iostream>
using namespace std;

int main()
{
	//Used to allocate a single 
	int *ptr = new int(10);
	cout << sizeof(ptr)<<endl;
	cout << *ptr<<endl;
	cout << sizeof(*ptr)<<endl;
	cout << endl;

	int *ptr1 = new int[5];
	cout << sizeof(ptr1) << endl;
	cout << *ptr1 << endl;
	cout << sizeof(*ptr1)+ sizeof(*(ptr1 + 1))+ sizeof(*(ptr1 + 2))+ sizeof(*(ptr1 + 3))+ sizeof(*(ptr1 + 4));

	int c = 3;
	int	r = 3;
	int *ptr2 = new int[r*c];
	int cnt = 0;
	for(int i=0;i<r;i++)
		for (int j = 0; j < c; j++)
		{
			*(ptr2 + i * c + j)=cnt;
			cnt++;
		}
	cout << "\n";
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			cout << " " << *(ptr2 + i * c + j);
		}
		cout << "\n";
	}
		


}