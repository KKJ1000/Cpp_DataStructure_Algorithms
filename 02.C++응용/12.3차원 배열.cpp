#include <iostream>

// 3���� �迭
int main()
{
    int arr[2][2][5] = {};

	for (size_t z = 0; z < 2; z++)
	{
		for (size_t y = 0; y < 2; y++)
		{
			for (size_t x = 0; x < 5; x++)
			{
				arr[z][y][x] = 1;
			}
		}
	}


	// 3���� �迭�� �������� �ſ� ����, 2���� �迭�� �ΰ� ����� ����Ѵ�. 
	int arrA[2][5] = {};
	int arrB[2][5] = {};
	for (size_t y = 0; y < 2; y++)
	{
		for (size_t x = 0; x < 5; x++)
		{
			arrA[y][x] = 1;
		}
	}
	for (size_t y = 0; y < 2; y++)
	{
		for (size_t x = 0; x < 5; x++)
		{
			arrB[y][x] = 1;
		}
	}

    return 0;
}