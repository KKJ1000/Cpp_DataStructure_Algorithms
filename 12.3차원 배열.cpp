#include <iostream>

// 3차원 배열
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


	// 3차원 배열은 가독성이 매우 낮아, 2차원 배열을 두개 만들어 사용한다. 
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