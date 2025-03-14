#include <iostream>
using namespace std;

int main() {

#pragma region 거품 정렬
    // 서로 인접한 두 원소를 비교하여 정렬하는 알고리즘 입니다.

    int arr[] = { 13, 8, 97, 1, 36 };
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "초기 배열: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < size - 1; i++) {
        bool swapped = false;
        for (int j = 0; j < size - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }

        cout << i + 1 << " 회전: ";
        for (int k = 0; k < size; k++) {
            cout << arr[k] << " ";
        }
        cout << endl;

        if (!swapped) break;
    }

    cout << "정렬 완료: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;


#pragma endregion


}
