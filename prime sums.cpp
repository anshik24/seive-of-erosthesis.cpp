//{ Driver Code Starts

// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
  bool isPrime(int N){
      if(N<=1){
      return false;
      }
      for(int i=2;i<=sqrt(N);i++){
          if(N%i==0){
              return false;
          }
      }
      return true;
  }
    string isSumOfTwo(int N){
        string res="No";
        for(int i=2;i<=N-1;i++){
            if(isPrime(i) && isPrime(N-i)){
                res="Yes";
                break;
            }
        }
        return res;
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.isSumOfTwo(N) << endl;
    }
    return 0;
}

// } Driver Code Ends
