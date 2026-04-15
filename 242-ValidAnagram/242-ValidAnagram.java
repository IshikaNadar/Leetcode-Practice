// Last updated: 4/15/2026, 10:48:05 PM
class Solution {
    public boolean isAnagram(String s, String t) {
        char[] a = s.toCharArray();
       char[] b = t.toCharArray();
       Arrays.sort(a);
       Arrays.sort(b);
       return Arrays.equals(a,b);
    }
}