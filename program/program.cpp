#include <iostream>
using namespace std;

int main() {

#pragma region 삽입 정렬
    // 데이터를 하나씩 확인하면서 이미 정렬된

    int arr[] = { 9, 6, 8, 1, 3 };
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "초기 배열: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    for (int i = 1; i < size; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;

        cout << i << " 회전: ";
        for (int k = 0; k < size; k++) {
            cout << arr[k] << " ";
        }
        cout << " (key: " << key << ")";
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


