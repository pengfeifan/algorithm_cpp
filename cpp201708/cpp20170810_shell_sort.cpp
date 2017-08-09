// shell sort

#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;

long long cnt;
int l;
int A[10000000];
int n;
vector<int> G;

void insertionSort(int A[], int n, int g)
{
    for (int i = g; i < n; i++)
    {
        int v = A[i];
        int j = i - g;
        while (j >= 0 && A[j] > v)
        {
            A[j + g] = A[j];
            j -= g;
            ++cnt;
        }
        A[j + g] = v;
    }
}

void shellSort(int A[], int n)
{
    // generator G={1,4,13,40......}
    for (int h = 1;;)
    {
        if (h > n)
            break;
        G.push_back(h);
        h = 3 * h + 1;
    }

    for (int i = G.size() - 1; i >= 0; i--)
    {
        insertionSort(A, n, G[i]);
    }
}

int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
    }
    cnt = 0;
    shellSort(A, n);
    cout << G.size() << endl;
    for (int i = G.size() - 1; i >= 0; i--)
    {
        printf("%d ", G[i]);
    }
    printf("\n");
    cout << cnt << endl;
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;
    return 0;
}
