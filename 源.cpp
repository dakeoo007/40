//#include<iostream>
//
//using namespace std;
//int main()
//{
//	float a, max, min,total, ave;
//	cout << "输入评分" << endl;
//	cin >> a;
//	max = min = total = a;
//	for (int i = 0; i < 9; i++)
//	{
//		cin >> a;
//		if (max < a)max = a;
//		if (min > a)min = a;
//		total = total + a;
//	}
//	total = total - max - min;
//	ave = total / 8;
//	cout << "平均=" << ave;
//	return 0;
//}

#include<iostream>

using namespace std;
void reverse(int*, int);
int main()
{
	int a[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int n = sizeof(a) / sizeof(a[0]);
	reverse(a, n);
	for (int i = 0; i < 10; i++)
	{
		cout << a[i] << " ";
	}
	return 0;
}
void reverse(int*a, int n)
{
	int temp;
	for (int i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
	}
}