#include <iostream>

#define SIZE 8

using namespace std;

// 병합 함수: 두 개의 정렬된 부분 배열을 합침
void combine(int list[], int start, int middle, int end) {
    int count = 0;
    int left = start;
    int right = middle + 1;
    int* container = new int[end - start + 1];  // 동적 배열 생성

    // 두 부분을 병합하는 과정
    while (left <= middle && right <= end) {
        if (list[left] <= list[right]) {
            container[count++] = list[left++];
        }
        else {
            container[count++] = list[right++];
        }
    }

    // 남은 요소 복사 (왼쪽 부분)
    while (left <= middle) {
        container[count++] = list[left++];
    }

    // 남은 요소 복사 (오른쪽 부분)
    while (right <= end) {
        container[count++] = list[right++];
    }

    // 원래 배열에 복사
    for (int i = 0; i < count; i++) {
        list[start + i] = container[i];
    }

    delete[] container;
}


void merge_sort(int arr[], int start, int end) {
    if (start >= end) return;

    int middle = (start + end) / 2;


    merge_sort(arr, start, middle);

    merge_sort(arr, middle + 1, end);

    combine(arr, start, middle, end);
}

int main() {
    int arr[SIZE] = { 3, 5, 2, 7, 4, 1, 8, 6 };

    cout << "Before Sorting: ";
    for (int i = 0; i < SIZE; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    merge_sort(arr, 0, SIZE - 1);

    cout << "After Sorting: ";
    for (int i = 0; i < SIZE; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

#pragma region 병합 정렬
// 하나의 리스트를 두 개의 균일한 크기로 분할하고 분할된
// 부분 리스트를 정렬한 다음, 두 개의 정렬된 부분 리스트를
// 합하여 전체가 정렬된 리스트가 되게 하는 방법입니다.

// 1. 리스트의 길이가 0 또는 1이면 이미 정렬된 것으로 봅니다.

// 2. 그렇지 않은 경우

// 2-1. 정렬되지 않은 리스트를 절반으로 잘라 비슷한 크기의
//		두 부분 리스트로 나눕니다.

// 2-2. 각 부분 리스트를 재귀적으로 병합 정렬을 이용하여 정렬합니다.

// 2-3. 두 부분 리스트를 다시 하나의 정렬된 리스트로 병합합니다.


#pragma endregion

