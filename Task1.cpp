#include <iostream>
#include <string>

using namespace std;

void getQuestions(string questions[], string answers[]) {
    questions[0] = "What is the capital of Pakistan?";
    answers[0] = "Islamabad";
    questions[1] = "What is the coldest month in Pakistan?";
    answers[1] = "January";
    questions[2] = "What is the national animal of Pakistan?";
    answers[2] = "Markhor";
}

void askQuestion(string question, string answer, int &score) {
    string userAnswer;
    cout << question << endl;
    cin >> userAnswer;
    if (userAnswer == answer) {
        cout << "Correct!" << endl;
        score++;
    } else {
        cout << "Incorrect. The answer is: " << answer << endl;
    }
}

int main() {
    const int numQuestions = 3;
    string questions[numQuestions];
    string answers[numQuestions];
    int score = 0;

    getQuestions(questions, answers);

    for (int i = 0; i < numQuestions; i++) {
        askQuestion(questions[i], answers[i], score);
    }

    cout << "Your final score is: " << score << "/" << numQuestions << endl;

    return 0;
}

