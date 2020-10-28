#include <iostream>
#include <vector>

using namespace std;

template <typename TLambda>
vector<size_t> filter(vector<size_t> const & input,
                      TLambda const & l)
{
    vector<size_t> tmp{};
    for (size_t const & elem : input)
        if (l(elem) == true){
            tmp.push_back(elem);
        }
    return tmp;
}

void print(vector<size_t> & to_print)
{
    for(size_t i = 0; i < to_print.size();i++){
        cout << to_print[i] << ' ';
    }
    cout << endl;
}

int main()
{
    auto even       = [] (auto const & elem) {if ( elem % 2 == 0) return true; };
    auto odd        = [] (auto const & elem) {if ( elem % 2 != 0) return true; };
    auto notZero    = [] (auto const & elem) {if ( elem == 0) return true; };

    vector<size_t> const v{1,2,3,0,4};
    vector<size_t> output_is_even = filter(v, even);
    vector<size_t> output_is_odd = filter(v, odd);
    vector<size_t> output_not_zero = filter(v, notZero);
    print(output_is_even);
    print(output_is_odd);
    print(output_not_zero);

    //filter(v, even);
    //filter(v, odd);
    //filter(v, notZero);
}
