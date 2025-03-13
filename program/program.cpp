
#include <iostream>


using namespace std;

int main()
{
#pragma region 완전 탐색
	// 가능한 모든 경우의 수를 탐색하면서
	// 결과를 찾아내는 알고리즘 입니다.
/*
	int password[] = { 7,1,2 };

	for (int i = 0; i < 10; i++)
	{
		cout << password[0] << " ";
		for (int j = 0; j < 10; j++)
		{
			//cout << password[1] << " ";
			for (int k = 0; k < 10; k++)
			{
				cout << password[0] << " ";
				cout << password[1] << " ";
				cout << password[2] << " ";
				//cout << password[2] << " ";
				if (password[0] == i && password[1] == j && password[2] == k)
				{
					cout << "password Release" << " " << i << " " << j << " " << k << endl;

					break;
				}
			}
		}
	}
	*/


#pragma region 완전 탐색
	for (int i = 1; i <= 9; i++)  // 1부터 9까지 탐색
	{
		for (int j = 1; j <= 9; j++)  // 1부터 9까지 탐색
		{
			for (int k = 1; k <= 9; k++)  // 1부터 9까지 탐색
			{
				// 각 번호를 출력
				cout << i << " " << j << " " << k << endl;

				// 패스워드가 7, 1, 2인 경우 비밀번호를 찾았다고 출력하고 종료
				if (i == 7 && j == 1 && k == 2)
				{
					cout << "Password Released: " << i << " " << j << " " << k << endl;
					break;  // 세 번째 반복문을 종료
				}
			}

			// 두 번째 반복문에서 break가 실행되면, 첫 번째 반복문을 종료하도록 해야 함
			if (i == 7 && j == 1)
				break;
		}

		// 첫 번째 반복문에서 break가 실행되면 종료
		if (i == 7)
			break;
	}
#pragma endregion

		return 0;
	}

#pragma endregion

