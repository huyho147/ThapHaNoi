#include <iostream>
using namespace std;

void move(int n, char A, char B, char C)
{
	if (n == 1)
		cout << A << "==>" << C;
	else 
	{
		move(n - 1, A, C, B);
		cout << A << " ==> " << C << endl;;
		move(n - 1, C, B, A);
		cout << endl;

	}
}

int main()
{
	int n;
	cout << "Nhap N: ";
	cin >> n;
	move(n,'A','B','C');
}