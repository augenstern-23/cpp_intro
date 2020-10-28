#include <iostream>
#include <string>

using namespace std;

string name;
int plz;
char another;
double berlincount;
double peoplecount;

void questions() {
    cout << "Please enter your name: " << endl;
    cin >> name;
    cout << "Please enter your postal code: " << endl;
    cin >> plz;
    if ((10115 <= plz) && (14199 >= plz)) {
        cout << name << " lives in Berlin" << endl;
        berlincount++;
        peoplecount++;
    } else {
        cout << name << " lives outside of Berlin" << endl;
        peoplecount++;
    }
}

void repeat(){
    cout << "Enter another person? [y/n]" << endl;
    cin >> another;
    if ((another == 'y') || (another == 'Y')){
        questions();
        repeat();
    }
    else{
        float perc = (berlincount/peoplecount)*100;
        cout << perc << " % of people live in Berlin" << endl;
    }
}

int main() {
    questions();
    repeat();
    }


