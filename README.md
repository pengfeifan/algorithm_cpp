# algorithm_cpp

**Algorithms**

## cpp201708

### 1.Maximum Profit
- minv = R[0]
- for j from 1 to n-1
    - maxv = max(maxv,R[j]-minv)
    - minv = min(R[j],minv)

### 2.Insertion Sort

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

### 3.Bubble Sort

```cpp
bubbleSort(A,N)
    flag=1
    i=0
    while flag
        flag=0
        for j N-1 to j-i
            if A[j]< A[j-1]
                swap(A[j],A[j-1])
                flag=1
    i++
```

### 4.Selection Sort

```cpp
selectionSort(A,N)
    for i 0 to N-1
      minIndex =i;
      for j i to N-1
        if A[j]< A[minIndex]
            minIndex=j;
      swap(A[i],A[minIndex])
```


