// Last updated: 4/16/2026, 10:19:12 AM
1class Solution {
2public:
3   int largestRectangleArea(vector<int>& heights) {
4   int n = heights.size();
5   vector<int> leftMin(n);
6   leftMin[0] = -1;  
7
8
9   stack<int> leftStack;
10   leftStack.push(0);
11   for (int i = 1; i < n; i++) {
12       while (!leftStack.empty() && heights[leftStack.top()] >= heights[i]) {
13           leftStack.pop();
14       }
15       leftMin[i] = leftStack.empty() ? -1 : leftStack.top();
16       leftStack.push(i);
17   }
18   vector<int> rightMin(n);
19   rightMin[n - 1] = n; 
20
21
22   stack<int> rightStack;
23   rightStack.push(n - 1);
24
25   for (int i = n - 2; i >= 0; i--) {
26       while (!rightStack.empty() && heights[rightStack.top()] >= heights[i]) {
27           rightStack.pop();
28       }
29       rightMin[i] = rightStack.empty() ? n : rightStack.top();
30       rightStack.push(i);
31   }
32   int maxArea = 0;
33   for (int i = 0; i < n; i++) {
34       int width = (rightMin[i] - leftMin[i]) - 1;
35       int area = width * heights[i];
36       maxArea = max(maxArea, area);
37   }
38   return maxArea;
39}
40};