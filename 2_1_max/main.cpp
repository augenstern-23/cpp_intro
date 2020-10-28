#include <iostream>
#include <string>
#include <tuple>

using namespace std;

string name;
int plz;
char another;

class Counter {
public:
    float peopleCount = 0;
    int berlinCount = 0;
    void questions();
};

void Counter::questions() {
    cout << "Please enter your name: " << endl;
    cin >> name;
    cout << "Please enter your postal code: " << endl;
    cin >> plz;
    if ((10115 <= plz) && (14199 >= plz)) {
        cout << name << " lives in Berlin" << endl;
        berlinCount++;
        peopleCount++;
    } else {
        peopleCount++;
        cout << name << " lives outside of Berlin" << endl;
    }
    return;
}

void repeat(){
    Counter counter;
    counter.questions();
    while(true) {
        cout << "Enter another person? [y/n]" << endl;
        cin >> another;
        if ((another == 'y') || (another == 'Y')){
            counter.questions();
        }
        else{
            float perc = counter.berlinCount / counter.peopleCount * 100;
            cout << perc << " % of people live in Berlin" << endl;
            break;
        }
    }
}

int main() {
    repeat();
}