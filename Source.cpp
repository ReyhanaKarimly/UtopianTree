#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
	int t;
	cin >> t;
	int H = 1;
	vector<int>height;
	for (int a0 = 0; a0 < t; a0++) {
		int n;
		cin >> n;
		H = 1;
		for (size_t i = 0; i < n; i++)
		{
			if (i % 2 == 0)
				H *= 2;
			else H++;

		}
		height.push_back(H);
	}
	for (size_t i = 0; i < height.size(); i++)
	{

		cout << height[i] << endl;
	}
	system("pause");
	return 0;
}
