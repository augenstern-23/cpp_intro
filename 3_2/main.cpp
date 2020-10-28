#include <iostream>
#include <string>

using namespace std;

enum class Gender {FEMALE, MALE, UNDEFINED,};

string enum_to_string (Gender const & gender)
{
    switch(gender)
    {
        case Gender::FEMALE:
            return "female";
        case Gender::MALE:
            return "male";
        case Gender::UNDEFINED:
            return "non-binary";
    }
}

struct Person
{
    string name;
    int age;
    Gender gender;


    void print(Person const & p)
    {
        cout << name << " is " << age << " years old and " << enum_to_string(gender) << endl;
    };
};

int main() {
    Person p{"Pauline", 29, Gender::FEMALE};
    p.print(p);
}
