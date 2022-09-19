#include <iostream>
#include <vector>


void comb(int mas[], int n) 
{
	double special = 1.25; 
	int k = n - 1; 

	int tmp;
	while (k >= 1)
	{
		for (int i = 0; i + k < n; i++)
		{
			if (mas[i] > mas[i + k])
			{
				tmp = mas[i];
				mas[i] = mas[i + k];
				mas[i + k] = tmp;
			}
		}
		k =  k /special;
	}
}



int main()
{
	int mas[10];
	int n = 10;
	for (int i = 0; i < n; i++) {
		mas[i] = rand() % 10;
		std::cout << mas[i] << " ";
	}

	std::cout << std::endl;

	comb(mas, n);

	for (int i = 0; i < n; i++) {
		std::cout << mas[i] << " ";
	}
	

}

