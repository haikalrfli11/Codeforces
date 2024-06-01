#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <iomanip>
#include <cmath>
using namespace std;
 
 
 
 
 
 
int main() {
      
     
      int n; cin >> n;
      int arr[n-1];
      for(int i = 1; i <= n -1 ; i++) {
            int d; cin >> d;
            arr[i] = d;
      }
      int a,b; cin >> a >> b;
      int t = a;
      int temp = 0;
      int x = 1;
    
      while(x <= b-t) {
      
            temp += arr[a];
            a++;
            x++;
      }
    
    cout << temp;
}