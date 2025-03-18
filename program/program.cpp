#include <iostream>
#include <vector>
using namespace std;




#pragma region 계수 정렬
    // 데이터의 값을 비교하지 않고 각 원소에 데이터가
    // 몇 개 있는지 갯수를 세어 저장한 다음 정렬하는 알고리즘 입니다.

void countSort(vector<int>&arr) {
    int maxVal = *max_element(arr.begin(), arr.end());


    vector<int> count(maxVal + 1, 0);
    for (int num : arr) {
        count[num]++;
    }


    int index = 0;
    for (int i = 0; i <= maxVal; i++) {
        while (count[i] > 0) { 
            arr[index++] = i; 
            count[i]--;      
        }
    }
}

int main() {
    vector<int> arr = { 1, 1, 3, 1, 2, 3, 4, 4, 2, 5 };

    cout << "정렬 전: ";
    for (int num : arr) cout << num << " ";
    cout << endl;

    countSort(arr);

    cout << "정렬 후: ";
    for (int num : arr) cout << num << " ";
    cout << endl;

    return 0;
}




#pragma endregion




