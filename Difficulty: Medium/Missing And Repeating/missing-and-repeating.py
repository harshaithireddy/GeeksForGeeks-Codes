#User function Template for python3

class Solution:
    def findTwoElement( self,arr): 
        # code here
        n = len(arr)
        s = n * (n + 1) // 2
        sSq = n * (n + 1) * (2 * n + 1) // 6
        
        actualSum = sum(arr)
        actualSumSq = sum(x * x for x in arr)
    
        diffSum = actualSum - s
        diffSumSq = actualSumSq - sSq
    
        sumY_X = diffSumSq // diffSum
        y = (diffSum + sumY_X) // 2
        x = sumY_X - y
        
        return (y, x)


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':

    tc = int(input())
    while tc > 0:
        n = int(input())
        arr = list(map(int, input().strip().split()))
        ob = Solution()
        ans = ob.findTwoElement(arr)
        print(str(ans[0]) + " " + str(ans[1]))
        tc = tc - 1

# } Driver Code Ends