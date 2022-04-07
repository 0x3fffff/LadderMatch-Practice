//#include <iostream>
//using namespace std;
//
//int cal(int x,int &y) {
//	int n=1,i=3;
//	for (; n <= x; i+=2)
//	{
//		n += i * 2;
//	}
//	y = i - 4;
//	n -= (i-2) * 2;
//	return n;
//}
//
//void printChar(char ch,int y) {
//	for (int i = y; i >=3; i -= 2)
//	{
//		for (int j = 0; j < (y-i)/2; j++)
//		{
//			cout << ' ';
//		}
//		for (int j = 0; j < i; j++)
//		{
//			cout << ch;
//		}cout << endl;
//	}
//	for (int i = 0; i < y / 2; i++)
//	{
//		cout << ' ';
//	}cout << ch << endl;
//
//	for (int i = 3; i <= y; i+=2)
//	{
//		for (int j = 0; j < (y - i)/2; j++)
//		{
//			cout << ' ';
//		}
//		for (int j = 0; j < i; j++)
//		{
//			cout << ch;
//		}cout << endl;
//	}
//}
//int main() {
//	int n,row,tol;
//	char ch;
//	cin >> n >> ch;
//	tol = cal(n, row);
//	printChar(ch, row);
//	cout << n - tol;
//}