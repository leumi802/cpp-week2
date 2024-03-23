#include <iostream>
using namespace std;

int game(string asnwer);

int main() {
    string answer;
    cout << "Enter a answer: ";
    cin >> answer;
    game(answer);
    cout << "You win!" << endl;
    return 0;
}