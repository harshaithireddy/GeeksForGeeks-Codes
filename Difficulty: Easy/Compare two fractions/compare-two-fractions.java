//{ Driver Code Starts
// Initial Template for Java

import java.io.*;
import java.util.*;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

class GFG {
    public static void main(String args[]) throws IOException {

        BufferedReader read = new BufferedReader(new InputStreamReader(System.in));

        Solution ob = new Solution();
        int t = Integer.parseInt(read.readLine());
        while (t-- > 0) {
            String str = read.readLine().trim();
            String ans = ob.compareFrac(str);
            System.out.println(ans);
        }
    }
}

// } Driver Code Ends


// User function Template for Java

class Solution {

    String compareFrac(String str) {
        // Code here
        String[] fractions = str.split(",");
        
        String[] first = fractions[0].split("/");
        String[] second = fractions[1].split("/");
        
        double a = Double.valueOf(first[0]) / Double.valueOf(first[1]);
        double b = Double.valueOf(second[0]) / Double.valueOf(second[1]);
        
        if(a > b) return fractions[0].strip();
        else if(b > a) return fractions[1].strip();
        else return "equal";
    }
}
