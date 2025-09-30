#include <iostream>
#include <bitset>

//2d Rendering 엔진 , 애니메이션까지 FBX
using namespace std;

long Multply(int A, int B)
{
	return A * B;
}


int main()
{
	int N = 0;
	unsigned long long X = 0;
	unsigned long long Result = 0;

	cin >> N;
	for (int i = 0; i < N; ++i)
	{
		cin >> X;
		unsigned long long NPOT = 2;
		for (int j = 1; j < 64; ++j)
		{
			if (NPOT >= X)
			{
				if (i == 0)
				{
					Result = NPOT;
				}
				else
				{
					Result = Result ^ NPOT;
				}
				break;
			}

			NPOT = NPOT << 1;
		}
	}

	cout << Result << endl;

	return 0;
}
