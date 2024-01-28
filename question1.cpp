#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int N = 5;
    int arr[] = {5, 3, 1, 4, 2};

    sort(arr, arr + N);

    int sum = 0;
    for (int i = 0; i < N; i++)
    {
        sum += (arr[i] * i);
    }

    cout << "Maximun sum is: " << sum << endl;
    return 0;
}
