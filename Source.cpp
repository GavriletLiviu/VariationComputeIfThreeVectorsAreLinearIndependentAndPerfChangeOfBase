#include<iostream>
using namespace std;
int main()
{
	int i,j, matrice[3][3], vector[3], matriceS[3][3];
	int delta1, delta2, delta3;
	cout << " This program shall compute whether or not a set of three vectors is linear independent or not \n ";
	cout << " Please input vectors : \n ";
	for (i = 0; i <= 2; i++)
	{
		for (j = 0; j <= 2; j++)
		{
			cin >> matrice[i][j];
		}
	}
	double delta;
	delta = matrice[0][0] * matrice[1][1] * matrice[2][2] + matrice[1][0] * matrice[2][1] * matrice[0][2] + matrice[2][0] * matrice[0][1] * matrice[1][2] - matrice[2][0] * matrice[1][1] * matrice[0][2] - matrice[0][0] * matrice[2][1] * matrice[1][2] - matrice[1][0] * matrice[0][1] * matrice[2][2];
	cout << "Delta of the matrix is = " << delta << "\n";
	if (delta != 0)
	{
		cout << "vectors are linear independent \n ";
		cout << " please enter vector in which you want to change the base to = ";
		for (i = 0; i <= 2; i++)
		{
			cin >> vector[i];
		}
		for (i = 0; i <= 2; i++)
		{
			for (j = 0; j <= 2; j++)
			{
				matriceS[i][j] = matrice[i][j];
			}
		}
		//compute delta1 
		matrice[0][0] = vector[0];
		matrice[1][0] = vector[1];
		matrice[2][0] = vector[2];
		delta1 = matrice[0][0] * matrice[1][1] * matrice[2][2] + matrice[1][0] * matrice[2][1] * matrice[0][2] + matrice[2][0] * matrice[0][1] * matrice[1][2] - matrice[2][0] * matrice[1][1] * matrice[0][2] - matrice[0][0] * matrice[2][1] * matrice[1][2] - matrice[1][0] * matrice[0][1] * matrice[2][2];
		cout << "alpha equals = " << delta1 / delta; cout << "\n";
		matrice[0][0] = matriceS[0][0];
		matrice[1][0] = matriceS[1][0];
		matrice[2][0] = matriceS[2][0];
		//compute delta2
		matrice[0][1] = vector[0];
		matrice[1][1] = vector[1];
		matrice[2][1] = vector[2];
		delta2 = matrice[0][0] * matrice[1][1] * matrice[2][2] + matrice[1][0] * matrice[2][1] * matrice[0][2] + matrice[2][0] * matrice[0][1] * matrice[1][2] - matrice[2][0] * matrice[1][1] * matrice[0][2] - matrice[0][0] * matrice[2][1] * matrice[1][2] - matrice[1][0] * matrice[0][1] * matrice[2][2];
		cout << "beta equals = " << delta2 / delta; cout << "\n";
		matrice[0][1] = matriceS[0][1];
		matrice[1][1] = matriceS[1][1];
		matrice[2][1] = matriceS[2][1];
		//compute delta 3
		matrice[0][2] = vector[0];
		matrice[1][2] = vector[1];
		matrice[2][2] = vector[2];
		delta3 = matrice[0][0] * matrice[1][1] * matrice[2][2] + matrice[1][0] * matrice[2][1] * matrice[0][2] + matrice[2][0] * matrice[0][1] * matrice[1][2] - matrice[2][0] * matrice[1][1] * matrice[0][2] - matrice[0][0] * matrice[2][1] * matrice[1][2] - matrice[1][0] * matrice[0][1] * matrice[2][2];
		cout << "gama equals = " << delta3 / delta; cout << "\n";
	}
	else
		cout << "vectors are linear dependent \n";
}
