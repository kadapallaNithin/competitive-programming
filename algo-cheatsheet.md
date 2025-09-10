<style>
    details > summary * { display : inline; }
</style>
# Paradigm
<details>
    <summary>

## Bit Manipulation</summary>
|||
|---|---|
ith bit|n & 1&lt;&lt;i
set|n \|= 1&lt;&lt;i
clear|n &= ~(1&lt;&lt;i)
toggle|n ^= (1&lt;&lt;i)
clear seek bit| n &= (n-1)
is power of 2| n & (n-1) == 0
2's complement| -n


**xor properties**
|||
|---|---|
x == x^0|~x == x^1
x^x == 0|x^y == y^x
(x^y)^z == x^(y^z)|x^y == (~x)^(~y)
XNOR|(~x)^y == ~(x^y)|


**integer**

|||
|---|---|
-1|~0 i.e all 1s
int_bits|(size(int)&lt;&lt;3)|
ninf| (1&lt;&lt;(int_bits-1)) _or_ inf+1 or INT_MIN|
inf|ninf-1 or ~ninf or INT_MAX|


<details>
    <summary>

### RightMost Set (seek) Bit - (clear seekbit) ^ n, (n&-n), ffs(n)
</summary>
(clear RightMost Significant Bit)^n i.e (n & n-1)^n <br>
(n&2's complement) i.e n&-n <br>
log2(above) gives 0 indexed position from right <br>
ffs(n) gives 1 indexed

</details>
<details>
    <summary>

### Set bits between L & R - 0 to N - 0 to 2^n</summary>
</details>
<details>
    <summary>

### Set bits between L & R - 0 to N - 0 to 2^n</summary>
</details>
<details>
    <summary>

### Set bits between L & R - 0 to N - 0 to 2^n</summary>
</details>
</details>

<details>
    <summary>

## Dynamic Programing</summary>
**Overlapping SubProblems** and **Optimal SubStructures**
<details>
    <summary>

### Fibonacci Series - fib2 = fib0 + fib1</summary>
    f(n) = f(n-1) + f(n-2) and f(0) = 1 and f(1) = 1

    f(4) --- f(3) --- f(2) --- f(1)
        |      |           |
        |      |            --- f(0)
        |      |
        |       ----- f(1)
        |  
        ------ f(2) --- f(1)
                |
                --- f(0)
Instead of recomputing, save results of f(i) in an array `fibonacci` by using `fibonacci[i] = fibonacci[i-1] + fibonacci[i-2]`. Actually, array is not needed and `fibonacci_2 = fibonacci_1 + fibonacci_0` is sufficient.
</details>
<details>
    <summary>

### 
<sup>n</sup>C<sub>r</sub> = <sup>n-1</sup>C<sub>r</sub> + <sup>n-1</sup>C<sub>(r-1)</sub>
</summary>
ncr[n][r] = ncr[n-1][r] + ncr[n-1][r-1]<br/>
Just <s>Two</s> one row of size n is sufficient.<br/>
TC : O(n*r)
SC : O(n)
<hr>
Using <sup>n</sup>C<sub>r</sub> = n!/(n-r)!r!
TC & SC : O(n)
</details>
<details>
    <summary>

### 
<sup>n</sup>P<sub>r</sub> = &pi;(n-i)
</summary>
n*(n-1)*(n-2)....(n-r+1) i.e<br/>
P *= (n-i) for i=0 to r-1<br/>

TC : O(n)<br>
SC : O(1)
</details>
<details>
    <summary>

### Coin Change dp[j] += dp[j - coins[i]]</summary>
[g4g](https://www.geeksforgeeks.org/coin-change-dp-7/)
```cpp
dp[i][j] = dp[i-1][j] // not including ith coin
            + dp[i][j-coins[i]] // including it
```
</details>
<details>
    <summary>

### Longest common subsequece lcs[i][j] = lcs[i-1][j-1]+1 on match or max(lcs[i-1][j],lcs[i][j-1]) </summary>

</details>
<details>
    <summary>

### Edit distance</summary>
```cpp
// match
editDist[i][j] = editDist[i-1][j-1];
// otherwise
editDist[i][j] = 1
                + min(editDist[i][j - 1], // Insert
                    editDist[i - 1][j], // Remove
                    editDist[i - 1][j - 1]); // Replace
```

<details>
    <summary>

#### Example [g4g](https://www.geeksforgeeks.org/edit-distance-dp-5/)</summary>
c - corner - replace <br>
l - left - delete <br>
u - up - insert
||old|s|a|t|u|r|d|a|y|
|---|---|---|---|---|---|---|---|---|---|
|new|0c|1l|2l|3l|4l|5l|6l|7l|8l|
|s|1u|0c|1l|2l|3l|4l|5l|6l|7l|
|u|2u|1u|1c|2cl|2c|3cl|4cl|5cl|6cl|
|n|3u|2u|2cu|2c|3clu|3c|4cl|5cl|6cl|
|d|4u|3u|3cu|3cu|3c|4clu|3c|4l|5l|
|a|5u|4u|3u|4clu|4cu|4c|4u|3c|4l|
|y|6u|5u|4u|4c|4clu|5clu|4cu|4u|3c|

</details>
</details>
<details>
    <summary>

### Longest common substring</summary>

LCSuff[i][j] = LCSuff[i-1][j-1]+1 on match
LCSuff[i][j] = 0 otherwise

LCSubStr = max(LCSuff)

</details>
<details>
    <summary>

### 0/1 Knapsack max(value[i-1][w],value[i-1][w-wi]) </summary>
value[i][w] = max(value[i-1][w],value[i-1][w-wi])
</details>
<details>
    <summary>

### Matrix chain multiplication </summary>
[g4g](https://www.geeksforgeeks.org/matrix-chain-multiplication-dp-8/)
```cpp
mcm[i][j] = min(
    mcm[i][k] + mcm[k+1][j] + A[i]*A[j]*A[k]
)// for k = i to k = j-1
```
Example: A = {40, 20, 30, 10, 30}
|40|20|30|10|30|
|---|---|---|---|---|
|40|0|24k|3000|||
|20||0|6k|900||
|30|||0|||
|10||||0|300|
|30|||||0|

mcm[1][3] = min{(0+300+20 * 10 * 30),(600+0+20 * 10 * 30)} = 900<br/>
mcm[0][4] = min{}
</details>
</details>

<details>
    <summary>

## Divide and Conquer</summary>

</details>
<details >
    <summary>

## Greedy</summary>
<details>
    <summary>

### Activity Selection - finishing early
</summary>
Given start and end times, find max # activities.
    Sort by end times 
    while there are activities:
        pick and remove an activity that finishes early
        remove all activities that start before end time of picked activity
</details>
<details>
    <summary>

### Job scheduling - most profitable - near deadline
</summary>
Job is feasible if is done before deadline.
Job takes 1 unit of time

    sort jobs by profits
    search from deadline towards back and place wherever feasible

</details>
<details>
    <summary>

### Minimum # of Platforms - merge start and end times
</summary>
platform++ on arrival
platform-- on depr
</details>
<details>
    <summary>

### Fractional Knapsack - highest value/weight
</summary>

</details>
<details>
    <summary>

### Optimal Merge Patterns - merge least two & push back
</summary>

</details>
</details>
<details>
    <summary>

## Backtracking</summary>

</details>
<details>
    <summary>

## Searching & Sorting</summary>

</details>

# Data Structure
<details>
    <summary>

## Array</summary>

<details>
    <summary>

### Merge overlapping intervals - sort & merge</summary>
    Sort based on staring time.
</details>
<details>
    <summary>

### Count number of free cells - filled rows & cols counts</summary>
Maintain two boolean arrays `rows` and `cols` mark if a row/col is filled also count `r_cnt` & `c_cnt`. Use `n*(n - r_cnt - c_cnt) + r_cnt*c_cnt`
    
</details>
</details>
<details>
    <summary>

## Linked List</summary>

</details>
<details>
    <summary>

## Stack & Queue</summary>
<details>
    <summary>

### Stack using Queue</summary>
    Two queues : Remove all except last from one Q and insert into other. Use .empty() to switch between them.
    One Queue : Use .size() and remove size-1 elements and push back. 
[g4g](https://www.geeksforgeeks.org/implement-stack-using-queue/)
</details>
</details>
<details>
    <summary>

## Tree</summary>

</details>
<details open>
    <summary>

## Graph</summary>
[Flow Chart](https://algo.monster/flowchart)
- Undirected
<details>
    <summary>

### Center of Star Graph - Just need 2 edges to determine</summary>
[leetcode](https://leetcode.com/problems/find-center-of-star-graph/)
```cpp
int candi = edges[0][0];
if(edges[1][0] == candi || edges[1][1] == candi){
    return candi;
}
```
</details>
<details>
    <summary>

### Cycle Detection - Visiting already visited node</summary>

Visiting already visited node i.e presence of back edge.
DFS or BFS
[cn](https://www.codingninjas.com/codestudio/problems/cycle-detection-in-undirected-graph_1062670)

Union Find : two vertices with the same parent
</details>
<details>
    <summary>

### Find if path exists - Both are in same component - Union find</summary>
[lc](https://leetcode.com/problems/find-if-path-exists-in-graph/description/)
</details>

<details>
    <summary>

### MST</summary>

</details>
<details>
    <summary>

### Connected components</summary>
DFS or BFS on not visited node as root of new component.
[cn](https://www.codingninjas.com/codestudio/problems/minimum-connection-changes_1171168) <hr>
DisJointSets - edges given without forming adj list.
```cpp
    DisJointSet djs = DisJointSet(n);
    for(auto edge:edges){
        if(!djs.join(edge[0],edge[1])){
            // join failed i.e joining same sets
            return "Yes";
        }
    }
```
</details>
<details>
    <summary>

### M - coloring - color[nei] == color[node] - color[nei]++ </summary>


</details>

- Directed

<details>
    <summary>

### Town Judge - In & Out degree - 2 arrays | O(n) space </summary>
[leetcode](https://leetcode.com/problems/find-the-town-judge/)
```cpp

```
</details>
<details>
    <summary>

### Reverse Edges - 0-1 BFS</summary>
[gfg](https://www.geeksforgeeks.org/minimum-edges-reverse-make-path-source-destination/)
</details>
<details>
    <summary>

### Cycle Detection - Visited nodes as well as ancestors</summary>
[cn](https://www.codingninjas.com/codestudio/problems/detect-cycle-in-a-directed-graph_920545)
</details>
</details>

Practiced:
- DFS
    - Tree [Sum of Left Leaves](https://leetcode.com/problems/sum-of-left-leaves)
    - Grid [Flood Fill](https://leetcode.com/problems/flood-fill/submissions/1703370929/)
    - [Clone Graph](https://leetcode.com/problems/clone-graph/description/)



# Math
- Combinatorics
<details>
    <summary>

### Next Permutation </summary>

```py
def next_permutation(l):
    n = len(l)
    # find first element (pivot) out of order from back
    i = n - 2
    while i > 0 and l[i] > l[i + 1]:
        i -= 1

    # find element bigger than pivot and swap
    j = n - 1
    while i < j and l[i] > l[j]:
        j -= 1

    t = l[i]
    l[i] = l[j]
    l[j] = t

    # sort the back part
    j = n - 1
    i += 1
    while i < j:
        t = l[i]
        l[i] = l[j]
        l[j] = t
        i += 1
        j -= 1

```
</details>

<details>
    <summary>

### Next Combination </summary>

```py
def next_combination(l,n):
    r = len(l)
    if l[-1] == n:
        # find an element (pivot) which is not element decreasing 
        # by 1 from n from back
        i = r - 2
        while i > 0 and l[i] == l[i + 1] - 1:
            i -= 1
        
        # increment pivot by 1
        l[i] += 1

        # write next elements by increasing 1 at a time
        for j in range(i + 1,r):
            l[j] = l[j - 1] + 1

    else:
        l[-1] += 1

```
</details>