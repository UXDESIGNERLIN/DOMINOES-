#include<iostream>
#include<vector>
using namespace std;

int main() {
  int n;
  cin >> n;
  for (int count = 0; count < n; ++count) {
    string previous;
    string actual;
    char result = '=';
    cin >> previous;
    for (int l = 0; l < 9; l++) {
      cin >> actual;
      if (result == '=' and (previous[previous.size()-1] != actual[0])) {
        result = l%2==0 ? 'A' : 'B';
      }
      previous = actual;
    }
    cout << result << endl;
  }
}
