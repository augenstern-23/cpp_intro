#include <iostream>
#include <string>
#include <vector>
#include <tuple>
#include <algorithm>


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

Gender char_to_enum (char const & g)
{
    switch(g)
    {
        case 'f':
            return Gender::FEMALE;
        case 'g':
            return Gender::MALE;
        case 'n':
            return Gender::UNDEFINED;
    }
}

/*struct Person
{
    string name;
    int age;
    Gender gender;

    bool operator<(Person const & p) const {
        age < p.age;
    }

    void print()
    {
        cout << name << " is " << age << " years old and " << enum_to_string(gender) << endl;
    };
};*/

string name;
int age;
Gender gender;

auto person_tuple{ tie(name, age, gender)};

//tuple<string const&, int const&, Gender const&> person_tuple{name, age, gender};



tuple<string const&, int const&, Gender const&> input_person() {
    //string name;
    //int age;
    char gender_st;

    cout << "Please input name: ";
    cin >> name;
    cout << "Please input age: ";
    cin >> age;
    cout << "Please input gender [f/m/n]: ";
    cin >> gender_st;
    //Person p {name, age, char_to_enum(gender_st)};
    tuple<string , int , Gender > tup_p{name, age, char_to_enum(gender_st)};
    return person_tuple;
}

/*bool compare_age(Person const & p1, Person const & p2) {
    return (p1.age < p2.age);
}*/
bool sortbysec(const tuple <string , int , Gender > & a, const tuple <string , int , Gender > & b){
    return (get<1>(a) < get<1>(b));
}

int main() {
    char addmore;
    vector<tuple<string const&, int const&, Gender const&>> persons;
    persons.push_back(input_person());

    while (true){
        cout << "Do you want to quit adding persons? [y/n]";
        cin >> addmore;

        if (addmore == 'n') {
            persons.push_back(input_person());
        }
        else {
            cout << persons.size();
            break;
        }
    }
    sort(persons.begin(), persons.end(), sortbysec);
    //sort(persons.begin(), persons.end(), []( const & p1, Person const & p2){return p1.age < p2.age;});
    //sort(persons.begin(), persons.end());
    //for(Person p : persons){
    //    cout << "name: " << p.name << "\tage: " << p.age << "\tgender: " << enum_to_string(p.gender) << endl;
   // }
}
