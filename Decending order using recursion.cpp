#include <iostream> 
using namespace std;
void printdescending(int n)
{
	if (n == 0)
	{
		return;
	}
	cout << n << " ";
	printdescending(n - 1);
}
int main()
{
	int n;
	cout << "Enter any Number " << endl;
	cin >> n;
	cout << "Number Descending order for is " << endl;
	printdescending(n);
	system("pause");
	return 0;
}
