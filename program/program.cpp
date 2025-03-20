#include <iostream>

#define SIZE 8

using namespace std;

#pragma region 이진 탐색 (Two Pointer)
	// 탐색 범위를 반으로 나누어 찾는 값을 포함하는 범위를
	// 좁혀나가는 방식으로 동작하는 알고리즘 입니다.

	// 배열 left와 right 엇갈린 상태인 경우에는 함수 종료
	// left > right


void binary_search(int list[], int key) {
	int left = 0;
	int right = SIZE - 1;

    while (left <= right) {
        int middle = (left + right) / 2;

        if (list[middle] == key) {
            cout << "Key Found : " << list[middle] << endl;
            
            return;
        }
        else if (list[middle] > key) {
            right = middle - 1;
        }
        else {
            left = middle + 1;
            
        }
    }
    cout << "Not Key Found" << endl;
}


int main()
{
	int list[8] = { 5,6,11,13,27,55,66,99 };


	binary_search(list, 99);

	return 0;

}

#pragma endregion
