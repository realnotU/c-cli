#include <iostream>
using namespace std;

class userinput {
  public:
    string response;
    string ask (string q) {
      cout << q << "\n";
      getline (cin, response);
      return response;
    };
};

int main() { // basic test script
  userinput time;
  string user_answer = time.ask("What time is it?");
  cout << "User input: " << user_answer << "\n";
  return 0;
}
