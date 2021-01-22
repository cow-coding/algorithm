#include <iostream>
using namespace std;

int main()
{
	int count{ 0 };
	while (count < 3)
	{
		bool yoot[4] = { 0,0,0,0 };
		int cnt = 0;

		for (int i = 0; i < 4; i++)
		{
			cin >> yoot[i];
		}

		for (int i = 0; i < 4; i++)
		{
			if (yoot[i] == true)
			{
				cnt++; // 등 확인시 카운트
			}
		}

		switch (cnt)
		{
		case 0:
			cout << "D\n";
			break;

		case 1:
			cout << "C\n";
			break;

		case 2:
			cout << "B\n";
			break;

		case 3:
			cout << "A\n";
			break;

		case 4:
			cout << "E\n";
			break;
		}
		count++;
	}
}
