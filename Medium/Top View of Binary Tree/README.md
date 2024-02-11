<h2><a href="https://www.geeksforgeeks.org/problems/top-view-of-binary-tree/1">Top View of Binary Tree</a></h2><h3>Difficulty Level : Medium</h3><hr><div class="problems_problem_content__Xm_eO" style="user-select: auto;"><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given below is a binary tree. The task is to print the top view of binary tree. Top view of a binary tree is the set of nodes visible when the tree is viewed from the top. For the given below tree</span></p>
<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; 1<br style="user-select: auto;">&nbsp;&nbsp;&nbsp; /&nbsp;&nbsp;&nbsp;&nbsp; \<br style="user-select: auto;">&nbsp;&nbsp; 2&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; 3<br style="user-select: auto;">&nbsp; /&nbsp; \&nbsp;&nbsp;&nbsp; /&nbsp;&nbsp; \<br style="user-select: auto;">4&nbsp;&nbsp;&nbsp; 5&nbsp; 6&nbsp;&nbsp; 7</span></p>
<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Top view will be: 4 2 1 3 7<br style="user-select: auto;"><strong style="user-select: auto;">Note: </strong>Return nodes from <strong style="user-select: auto;">leftmost </strong>node to <strong style="user-select: auto;">rightmost </strong>node. Also if 2 nodes are outside the shadow of the tree and are at same position then consider the left ones only(i.e. leftmost).&nbsp;<br style="user-select: auto;">For ex -&nbsp;<strong style="user-select: auto;">1 2 3 N 4 5 N 6 N 7 N 8 N 9 N N N N N</strong> will give&nbsp;<strong style="user-select: auto;">8 2 1 3</strong> as answer. Here 8 and 9 are on the same position but 9 will get shadowed.</span></p>
<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>
<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
</strong>&nbsp;     1
  &nbsp;/&nbsp;&nbsp;&nbsp; \
  2&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; 3
<strong style="user-select: auto;">Output: </strong>2 1 3
</span></pre>
<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>
<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
</strong>&nbsp;      10
 &nbsp;&nbsp; /&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; \
  20&nbsp; &nbsp;&nbsp;&nbsp; &nbsp; 30
 /&nbsp;&nbsp; \&nbsp;&nbsp;&nbsp;&nbsp;/&nbsp; &nbsp;&nbsp;\
40&nbsp;&nbsp; 60  90&nbsp; &nbsp;&nbsp;100
<strong style="user-select: auto;">Output: </strong>40 20 10 30 100
</span></pre>
<p style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Your Task:</span></strong><br style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Since this is a function problem. You don't have to take input. Just complete the function<strong style="user-select: auto;">&nbsp;topView() </strong>that takes <strong style="user-select: auto;">root node </strong>as parameter and returns a list of nodes visible from the top view from left to right.</span></p>
<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:&nbsp;</strong>O(NlogN)<br style="user-select: auto;"><strong style="user-select: auto;">Expected Auxiliary Space:&nbsp;</strong>O(N).</span></p>
<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">1 ≤&nbsp;N ≤&nbsp;10<sup style="user-select: auto;">5</sup><br style="user-select: auto;">1 ≤ Node Data ≤&nbsp;10<sup style="user-select: auto;">5</sup></span><br style="user-select: auto;">&nbsp;</p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Paytm</code>&nbsp;<code>Ola Cabs</code>&nbsp;<code>Walmart</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Binary Search Tree</code>&nbsp;<code>Tree</code>&nbsp;<code>Data Structures</code>&nbsp;