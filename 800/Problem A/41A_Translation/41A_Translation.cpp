#include <iostream>
#include <string>

using namespace std;


int main() {    
  string t;
  string u;
  cin >> t;
  cin >> u;
  string s = "";
  for(int i = t.length()-1; i>=0 ;i--) {
    s+= t[i];
  }

  if(s == u) {
  cout << "YES";
}else {
  cout << "NO";
}

    return 0;
}


