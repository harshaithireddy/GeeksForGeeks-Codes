<h2><a href="https://www.geeksforgeeks.org/problems/print-matrix-in-diagonal-pattern/1">Print matrix in diagonal pattern</a></h2><h3>Difficulty Level : Easy</h3><hr><div class="problems_problem_content__Xm_eO" style="user-select: auto;"><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given a square matrix <strong style="user-select: auto;">mat[][]</strong> of <strong style="user-select: auto;">n*n</strong> size, the task is to determine the <strong style="user-select: auto;">diagonal pattern</strong> which is a linear arrangement of the elements of the matrix as depicted in the following example:</span></p>
<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><img style="height: 324px; width: 393px; user-select: auto;" src="https://contribute.geeksforgeeks.org/wp-content/uploads/matrix-6.png" alt=""></span></p>
<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>
<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="font-size: 18px; user-select: auto;">Input:
</strong><span style="font-size: 18px; user-select: auto;">n = 3
mat[][] = {{1, 2, 3},<br style="user-select: auto;">           {4, 5, 6},<br style="user-select: auto;">           {7, 8, 9}}
</span><strong style="font-size: 18px; user-select: auto;">Output: {</strong><span style="font-size: 18px; user-select: auto;">1, 2, 4, 7, 5, 3, 6, 8, 9}<br style="user-select: auto;"></span><strong style="font-size: 18px; user-select: auto;">Explaination:<br style="user-select: auto;"></strong><span style="font-size: 18px; user-select: auto;"><span style="font-size: 18px; user-select: auto;">Starting from (0, 0): 1,
Move to the right to (0, 1): 2,
Move diagonally down to (1, 0): 4,
Move diagonally down to (2, 0): 7,<br style="user-select: auto;">Move diagonally up to (1, 1): 5,
Move diagonally up to (0, 2): 3,
Move to the right to (1, 2): 6,
Move diagonally up to (2, 1): 8,
Move diagonally up to (2, 2): 9<br style="user-select: auto;">There for the output is {1, 2, 4, 7, 5, 3, 6, 8, 9}.</span></span><span style="font-size: 18px; user-select: auto;"><br style="user-select: auto;"></span></span></pre>
<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>
<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="font-size: 18px; user-select: auto;">Input:
</strong><span style="font-size: 18px; user-select: auto;">n = 2
mat[][] = {{1, 2},<br style="user-select: auto;">           {3, 4}}
</span><strong style="font-size: 18px; user-select: auto;">Output: </strong><span style="font-size: 18px; user-select: auto;">{1, 2, 3, 4}<br style="user-select: auto;"></span><strong style="font-size: 18px; user-select: auto;">Explaination:</strong><span style="font-size: 18px; user-select: auto;"><br style="user-select: auto;">Starting from (0, 0): 1,
Move to the right to (0, 1): 2,
Move diagonally down to (1, 0): 3,
Move to the right to (1, 1): 4<br style="user-select: auto;">There for the output is {1, 2, 3, 4}.</span></span></pre>
<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">You only need to implement the given function&nbsp;<strong style="user-select: auto;">matrixDiagonally()&nbsp;</strong>which takes a matrix <strong style="user-select: auto;">mat[][]</strong> of size <strong style="user-select: auto;">n*n</strong> as an input and returns a list of integers containing the matrix diagonally. Do not read input, instead use the arguments given in the function.</span></p>
<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:</strong> O(n*n).<br style="user-select: auto;"><strong style="user-select: auto;">Expected Auxiliary Space:</strong> O(1).<br style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">1 &lt;= n &lt;= 100<br style="user-select: auto;">-100 &lt;= elements of matrix &lt;= 100</span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Amazon</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Matrix</code>&nbsp;<code>Data Structures</code>&nbsp;