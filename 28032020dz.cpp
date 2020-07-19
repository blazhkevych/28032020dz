/*
#include <iostream>
using namespace std;
double LinearEquation(double a, double b)
{
	int x = 0;
	if (a == 0)
	{
		if (b == 0) cout << "Infinite set of roots; \n";
		else        cout << "No roots; \n";
	}
	else
	{
		x = (-b / a == -0) ? b / a : -b / a;
		cout << x << "; \n";
	}
	return x;
}
int main()
{
	int a, b, n = 0;
	while (cin >> a >> b) {
		cout << ++n << ") ";
		LinearEquation(a, b);
	}
	return 0;
}
*/
/*
#include <iostream>
using namespace std;
void QuadraticEquation(int a, int b, int c)
{
	double d;
	d = (b * b) - (4 * a * c);
	if (d > 0) {
		int x1, x2;
		x1 = (-b + sqrt(d)) / (2 * a);
		x2 = (-b - sqrt(d)) / (2 * a);
		cout << "Two roots: " << ((x1 > x2) ? x2 : x1) << " " << ((x1 > x2) ? x1 : x2);
	}
	else
		if (d == 0) {
			cout << "One root:" << " " << -b / (2 * a) << endl;
		}
		else
			cout << "No roots" << endl;
}
int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	QuadraticEquation(a, b, c);
	return 0;
}
*/
/*

#include <iostream>
#include <ctime>
using namespace std;
int** Create(size_t n, size_t m) {
	int** M = new int* [n];
	for (size_t i = 0; i < n; ++i) {
		M[i] = new int[m];
	}
	return M;
}
void Free(int** M, size_t n) {
	for (size_t i = 0; i < n; ++i) {
		delete[] M[i];
	}
	delete[] M;
}
void FillRandomNumbers(int** matrix, const size_t rows, const size_t columns)
{
	srand((unsigned int)time(0));

	for (size_t row = 0; row < rows; row++)
		for (size_t column = 0; column < columns; column++)
			matrix[row][column] = rand() % 10;
}
void Print(int** M, size_t n, size_t m) {
	for (size_t i = 0; i < n; ++i) {
		for (size_t j = 0; j < m; ++j) {
			std::cout << M[i][j] << ' ';
		}
		std::cout << std::endl;
	}
}
void ArrayElementZeroPosition(int** A, int n, int m)
{
	for (size_t i = 0; i < n; i++)
	{
		for (size_t j = 0; j < m; j++)
		{
			if (A[i][j] == 0)
				cout << "[" << i << "]" << "[" << j << "]" << '\t';
		}
	}
}
void MaxElPosVal(int** A, int n, int m)
{
	int str = 0, stl = 0;
	int	max = A[0][0];
	for (size_t i = 0; i < n; i++)
	{
		for (size_t j = 0; j < m; j++)
		{
			if (A[i][j] > max)
			{
				max = A[i][j];
				str = i + 1;
				stl = j + 1;
			}
		}
	}
	cout << "\nMaximum: " << max << " raspolojen v " << str << " stroke, stolbze " << stl << endl;
}
int main()
{
	srand(time(0));
	size_t n, m;
	std::cout << "Enter the number of rows of the matrix: ";
	std::cin >> n;
	std::cout << "Enter the number of matrix columns: ";
	std::cin >> m;
	int** A = Create(n, m);
	FillRandomNumbers(A, n, m);
	Print(A, n, m);
	//ArrayElementZeroPosition(A, n, m);
	MaxElPosVal(A, n, m);
	Free(A, n);
}
*/
/*

#include <iostream>
#include <ctime>
using namespace std;
int** Create(size_t n, size_t m) {
	int** M = new int* [n];
	for (size_t i = 0; i < n; ++i) {
		M[i] = new int[m];
	}
	return M;
}
void Free(int** M, size_t n) {
	for (size_t i = 0; i < n; ++i) {
		delete[] M[i];
	}
	delete[] M;
}
void FillRandomNumbers(int** matrix, const size_t rows, const size_t columns)
{
	srand((unsigned int)time(0));

	for (size_t row = 0; row < rows; row++)
		for (size_t column = 0; column < columns; column++)
			matrix[row][column] = rand() % 10;
}
void Print(int** M, size_t n, size_t m) {
	for (size_t i = 0; i < n; ++i) {
		for (size_t j = 0; j < m; ++j) {
			std::cout << M[i][j] << ' ';
		}
		std::cout << std::endl;
	}
}
void ArrayElementZeroPosition(int** A, int n, int m)
{
	for (size_t i = 0; i < n; i++)
	{
		for (size_t j = 0; j < m; j++)
		{
			if (A[i][j] == 0)
				cout << "[" << i << "]" << "[" << j << "]" << '\t';
		}
	}
}
int main()
{
	srand(time(0));
	size_t n, m;
	std::cout << "Enter the number of rows of the matrix: ";
	std::cin >> n;
	std::cout << "Enter the number of matrix columns: ";
	std::cin >> m;
	int** A = Create(n, m);
	FillRandomNumbers(A, n, m);
	Print(A, n, m);
	ArrayElementZeroPosition(A, n, m);
	Free(A, n);
}
*/
/*

#include <iostream>
using namespace std;
int XY(int x, int y)
{
	return pow(x, y);
}
int main()
{
	int x, y;
	while (cin >> x >> y) {
		cout << XY(x, y) << endl;
	}
}
*/