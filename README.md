# algorithm_cpp

**Algorithms**

## cpp201708

### Maximum Profit
- minv = R[0]
- for j from 1 to n-1
    - maxv = max(maxv,R[j]-minv)
    - minv = min(R[j],minv)

### Insertion Sort

```cpp
insertSort(A,N)
    for i 1 to N-1
        v=A[i]
        j=i-1;
        while j>=0 && A[j]>v
            A[j+1]=j
            j--
        A[j+1]=v
```
