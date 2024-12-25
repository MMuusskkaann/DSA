// 

#include <iostream>
#include <algorithm>

using namespace std;

int maxpro(int *array, int n) {
    if (n == 0) return 0;

    int max_pro = array[0];
    int min_pro = array[0];
    int result = array[0];

    for (int i = 1; i < n; i++) {
        if (array[i] < 0) {
            swap(max_pro, min_pro);
        }

        max_pro = max(array[i], max_pro * array[i]);
        min_pro = min(array[i], min_pro * array[i]);

        result = max(result, max_pro);
    }

    return result;
}

int main() {
    int array[] = {-1, -5, -7, -4, -8};
    int n = sizeof(array) / sizeof(array[0]);

    int result = maxpro(array, n);
    cout << "Max subarray product = " << result << endl;

    return 0;
}