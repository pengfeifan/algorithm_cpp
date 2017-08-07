# algorithm_cpp

**Algorithms**

## Maximum Profit
- minv = R[0]
- for j from 1 to n-1
    - maxv = max(maxv,R[j]-minv)
    - minv = min(R[j],minv)
