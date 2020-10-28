#include <iostream>
#include <string>

using namespace std;

string name;
int plz;
int lives_in_berlin;
char another;

string qname(){
    cout << "Please enter your name: " << endl;
    cin >> name;
    return name;
}
int qplz(){
    cout << "Please enter your postal code: " << endl;
    cin >> plz;
    return plz;
}

void repeat(char another){
    if ((another == 'y') || (another == 'Y')){
        qname();
        qplz();

    }
}
int Berlin(int const plz, string const name){
    if ((10115 <= plz) && (14199 >= plz)) {
        cout << name << " lives in Berlin" << endl;
        lives_in_berlin ++;
    }
    else {
        cout << name << " lives outside of Berlin" << endl;
    }
    cout << "Enter another person? [y/n]" << endl;
    cin >> another;
    while ((another == 'y') || (another == 'Y')){
        qname();
        qplz();
        Berlin();
        cout << "Enter another person? [y/n]" << endl;
        cin >> another;
    }
    repeat(another);
    return another;
}


int main() {
    /*cout << "Please enter your name: " << endl;
    cin >> name;
    cout << "Please enter your postal code: " << endl;
    cin >> plz;*/
    qname();
    qplz();
    Berlin(plz, name);

   // if((another == 'y') || (another == 'Y')){
   //     repeat();
   // }
    //else
   // cout << Berlin << " of people live in Berlin" << endl;




    return 0;
}
