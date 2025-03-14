#include <iostream>
using namespace std;

int main() {

#pragma region 선택 정렬
    // 주어진 리스트 중에 최소값을 찾은 다음 특정한 위치에서
    // 결과를 교체하는 방식으로 정렬하는 알고리즘 입니다.

    int arr[] = { 6, 2, 8, 1, 0 };
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "초기 배열: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < size - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);

        cout << i + 1 << " 회전: ";
        for (int k = 0; k < size; k++) {
            cout << arr[k] << " ";
        }
        cout << " (최소값: " << arr[i] << ")";
        cout << endl;
    }

    cout << "정렬 완료: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}


#pragma endregion


