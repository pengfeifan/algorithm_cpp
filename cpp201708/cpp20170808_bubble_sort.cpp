//bubble sort
#include <iostream>
using namespace std;

int bubbleSort(int A[], int N)
{
    int count = 0;
    bool flag = true;
    for (int i = 0; flag; i++)
    {
        flag = false;
        for (int j = N - 1; j > i; j--)
        {
            if (A[j] < A[j - 1])
            {
                int temp = A[j];
                A[j] = A[j - 1];
                A[j - 1] = temp;
                flag = true;
                ++count;
            }
        }
    }

    return count;
}

int main()
{
    int A[100], N, sw;
    cin >> N;
    for (int i = 0; i < N; i++)
        cin >> A[i];
    sw = bubbleSort(A, N);

    for (int i = 0; i < N; i++)
    {
        if (i)
            cout << " ";
        cout << A[i];
    }
    cout << endl;
    cout << "count:" << sw << endl;

    return 0;
}