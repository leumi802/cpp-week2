#include <iostream>
using namespace std;

int game(string answer);
string makeAnswer();

int main() {
    string answer = makeAnswer();
    cout << "Answer is " << answer << endl;
    game(answer);
    cout << "You win!" << endl;
    return 0;
}