#include <iostream>
using namespace std;

int main()
{
	int mat1[10][10];
	int mat2[10][10];
	int mat3[10][10];

	int i, j, n, m;
	
	cin >> n >> m;

	for(i = 0; i < n; i++)
		for(j = 0; j < m; j++)
			cin >> mat1[i][j];

	for(i = 0; i < n; i++)
		for(j = 0; j < m; j++)
			cin >> mat2[i][j];

	for(i = 0; i < n; i++)
		for(j = 0; j < m; j++)
			mat3[i][j] = mat1[i][j] + mat2[i][j];

	for(i = 0; i < n; i++)
	{
		for(j = 0; j < m; j++)
		{
			cout << mat3[i][j];
			cout << " ";
		}
		cout << endl;
	}


	return 0;
}
