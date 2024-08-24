//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
private:
    long long generatePalindrome(long long leftHalf, bool isEvenLength) {
        long long palindrome = leftHalf;
        if (!isEvenLength) leftHalf /= 10;
        while (leftHalf > 0) {
            palindrome = palindrome * 10 + leftHalf % 10;
            leftHalf /= 10;
        }
        return palindrome;
    }

    bool isPalindrome(long long num) {
        std::string s = std::to_string(num);
        int n = s.size();
        for (int i = 0; i < n / 2; i++) {
            if (s[i] != s[n - i - 1]) return false;
        }
        return true;
    }

public:
    long long int closestPalindrome(long long int num) {
        long long number = num;

        if (number <= 10) return number;
        if (number == 11) return 9;

        if (isPalindrome(number)) return number;

        int length = to_string(number).length();
        long long leftHalf = stoll(to_string(number).substr(0, (length + 1) / 2));

        std::vector<long long> palindromes(5);
        palindromes[0] = generatePalindrome(leftHalf - 1, length % 2 == 0);
        palindromes[1] = generatePalindrome(leftHalf, length % 2 == 0);
        palindromes[2] = generatePalindrome(leftHalf + 1, length % 2 == 0);
        palindromes[3] = pow(10, length - 1) - 1;
        palindromes[4] = pow(10, length) + 1;

        long long nearestPalindrome = 0;
        long long minDifference = LLONG_MAX;

        for (long long palindrome : palindromes) {
            if (palindrome == number) continue;
            long long difference = abs(palindrome - number);
            if (difference < minDifference || (difference == minDifference && palindrome < nearestPalindrome)) {
                minDifference = difference;
                nearestPalindrome = palindrome;
            }
        }

        return nearestPalindrome;
    }

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		long long int num;
		cin >> num;
		Solution obj;
		long long int ans = obj.closestPalindrome(num);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends