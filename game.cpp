#include <iostream>
#include <string>

using namespace std;

int strikeJudgement(string answer, string guess, int index) {
    if (answer.find(guess[index]) == -1) {
        return -1;
    } else if (answer[index] == guess[index]) {
        return 1;
    } else {
        return 0;
    }
}

int game(string answer) {
    string guess;
    int strike, ball;
    int count = 5;
    int judgement;
    bool running = true;
    
    while (running) {
        cout << count << " chances left." << endl;
        count -= 1;
        cout << "Enter a guess: ";
        cin >> guess;
        strike = 0, ball = 0;
        
        for (int i = 0; i < 3; i++) {
            judgement = strikeJudgement(answer, guess, i);
            if (judgement == 1) {
                strike += 1;
            } else if (judgement == 0) {
                ball += 1;
            }
        }

        if (strike == 3) {
            running = false;
            cout << "You win!";
        } else if (count == 0) {
            cout << "Strikes: " << strike << ", Balls: " << ball << endl;
            cout << "You lose!";
            running = false;
        } else {
            cout << "Strikes: " << strike << ", Balls: " << ball << endl;
        }
    }

    return 0;
}