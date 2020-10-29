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


tuple<string const&, int const&, Gender const&> input_person()
{
    string name;
    int age;
    Gender gender;
    auto person_tuple{ tie(name, age, gender)};
    char gender_st;

    cout << "Please input name: ";
    cin >> name;
    cout << "Please input age: ";
    cin >> age;
    cout << "Please input gender [f/m/n]: ";
    cin >> gender_st;
    tuple<string const &, int const &, Gender const &> tup_p{name, age, char_to_enum(gender_st)};

    return person_tuple;
}

bool sortbysec(tuple <string, int, Gender> & a,  tuple <string, int, Gender> & b){
    return (get<1>(a) < get<1>(b));
}


int main()
{
    char addmore;
    vector<tuple<string, int, Gender>> persons;
    persons.push_back(input_person());

    while (true)
    {
        cout << "Do you want to quit adding persons? [y/n]";
        cin >> addmore;

        if (addmore == 'n')
        {
            persons.push_back(input_person());
        }
        else {
            cout << persons.size();
            break;
        }
    }
    sort(persons.begin(), persons.end(), sortbysec);
    for(tuple<string, int, Gender> p : persons){
        cout << "name: " << get<0>(p) << "\tage: " << get<1>(p) << "\tgender: " << enum_to_string(get<2>(p)) << endl;
   }
}
