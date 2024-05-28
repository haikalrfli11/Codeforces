#include <iostream>
#include <string>

using namespace std;


int main() {    
  string t;
  string u;
  cin >> t;
  cin >> u;
  string temp = "";
  for(int i = t.length()-1; i>=0 ;i--) {
    temp+= t[i];
  }

  if(temp == u) {
  cout << "YES";
}else {
  cout << "NO";
}

    return 0;
}


