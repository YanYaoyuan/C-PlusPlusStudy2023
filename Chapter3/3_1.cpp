#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    vector<int> vec_int = {10, 20, 30 , 50};
    vector<string> vec_str{"yan", "yao", "yuan"};

    for(string s : vec_str)
    {
        cout << "str " << s << endl;
    }

    cout << vec_int.empty() << endl;

    for(int i = 0;  i < 100; i++)
    {
        vec_int.push_back(i);
        vec_int.emplace_back(i);
    }

    cout << "Size = " << vec_int.size() << endl;

    return 0;
}