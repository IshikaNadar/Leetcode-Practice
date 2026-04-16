// Last updated: 4/16/2026, 10:13:05 AM
1class Solution {
2   public int largestRectangleArea(int[] heights) {
3       int n = heights.length;
4       Stack<Integer> indexStack = new Stack<>(); 
5       int maxArea = Integer.MIN_VALUE;
6       for (int i = 0; i < n; i++) {
7           while (!indexStack.isEmpty() && heights[i] < heights[indexStack.peek()]) {
8               int topIndex = indexStack.pop();
9               int height = heights[topIndex];
10               int width = indexStack.isEmpty() ? i : (i - indexStack.peek() - 1);
11               int area = height * width;
12               maxArea = Math.max(maxArea, area);
13           }
14           indexStack.push(i);
15       }
16       while (!indexStack.isEmpty()) {
17           int topIndex = indexStack.pop();
18           int height = heights[topIndex];
19           int width = indexStack.isEmpty() ? n : (n - indexStack.peek() - 1);
20           int area = height * width;
21           maxArea = Math.max(maxArea, area);
22       }
23       return maxArea;
24   }
25}