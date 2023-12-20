#include <iostream>

using namespace std;

int AddRightDigit(int D, int K)

{

	K = K * 10 + D;

	return K;

}

int main()

{

	int D, K;

	cout << "Enter interger num: ";

	cin >> K;

	for (int i = 0; i < 2; i++)

	{

		do

		{

			cin >> D;

		} while (D < 0 || D > 9);

		K = AddRightDigit(D, K);

		cout << "Result #" << i + 1 << " = " << K << endl;

	}

	system("pause>nul");

	return 0;

}