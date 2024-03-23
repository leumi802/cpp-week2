#include <iostream>
using namespace std;

int game(string answer);
string makeAnswer();

int main() {
    string answer = makeAnswer();
    game(answer);
    return 0;
}