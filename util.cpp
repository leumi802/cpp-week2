// 정답 숫자를 0~9의 숫자 3자리로 랜덤으로 생성하도록 한다.
// 생성된 정답 숫자는 세 자리 수로 출력해야 한다.
#include <iostream>
#include <random>
#include <time.h>
#include <string>
using namespace std;

string makeAnswer() {
    mt19937 gen(time(NULL));
    uniform_int_distribution<int> dis(0, 9);
    int num1, num2, num3;
    string answer = "";
    num1 = dis(gen);
    num2 = num1;
    num3 = num1;
    while (num1 == num2) {
        num2 = dis(gen);
    }
    while (num3 == num1 || num3 == num2) {
        num3 = dis(gen);
    }
    answer = to_string(num1) + to_string(num2) + to_string(num3);
    return answer;
}