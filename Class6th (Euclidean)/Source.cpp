#include <iostream>
using namespace std;



int evclid(int x, int y)
{
    // 1. 두 개의 자연수 x,y가 있습니다.
    //    그리고 x와 y로 나눈 나머지를 R이라고 합니다.

    // 2. R이 0이라면, x와 y의 최대공약수 y가 됩니다.

    // 3. R이 0이 아니라면, x와 y의 최대 공약수는 y와 R의
    //    최대 공약수가 같기 때문에 x에는 y 그리고 y에는 R을
    //    대입한 후 1번으로 돌아갑니다.


    while (y != 0) {
        int r = x % y;
        cout << x << " % " << y << " = " << r << endl;
        x = y;
        y = r;
    }
    return x;


}

int main() {
    /*
#pragma region 유클리드 호제버
    // 2개의 자연수 또는 정식의 최대 공약수를 구하는 방식으로
    // 두 수가 서로 상대방 수를 나누어서 원하는 수를 얻어내는 알고리즘 입니다.

    int a = 24;
    int b = 48;

    int result = 0;

    for (int i = 1; i <= a && i <= b; i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            result = i;
        }
    }

    cout << "최대 공약수 : " << result << endl;

#pragma endregion
    */
    int a = 106, b = 16;
    int z = evclid(a, b);

    cout << "최대공약수: " << z << endl;
    return 0;


}



