#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<int> solution(vector<int> a, int n)
{
	vector<int> b(n);

	b[0] = a[0] + a[1];
	for (int i = 1; i < n - 1; i++)
	{
		b[i] = a[i - 1] + a[i] + a[i + 1];
	}
	b[n - 1] = a[n - 2] + a[n - 1];
	for (int i = 0; i < n; i++)
	{
		cout << b[i];
	}
	return b;
}

int main()
{
	vector<int> a = { 4, 0, 2, -1, 1 };
	solution(a, a.size());
}