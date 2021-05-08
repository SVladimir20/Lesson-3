#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	const int n = 3;
    int value = 1;
	int array3D[n][n][n];
    int *ptr = nullptr;
    ptr = &array3D[1][1][1];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < n; k++)
            {
                array3D[i][j][k] = value++;
            }
        }
    }
    cout << "«начение центральной €чейки трЄхмерного массива: " << *ptr;
	return 0;
}