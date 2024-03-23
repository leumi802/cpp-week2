// 정답 숫자를 0~9의 숫자 3자리로 랜덤으로 생성하도록 한다.
// 생성된 정답 숫자는 세 자리 수로 출력해야 한다.
#include <iostream>
#include <random>
#include <time.h>
#include <string>
using namespace std;

string makeAnswer() {
    mt19937 gen(time(NULL));
    uniform_int_distribution<int> dis(0, 999);
    int number = dis(gen);
    string answer = "";
    if (number < 10) {
        answer = "00" + to_string(number);
    } else if (number < 100) {
        answer = "0" + to_string(number);
    } else {
        answer = to_string(number);
    }
    return answer;
}