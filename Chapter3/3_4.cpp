#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    vector<int> vec = {1, 2, 3};
    vector<int> vec_int = {10, 20, 30 , 50};
    vector<string> vec_str{"yan", "yao", "yuan"};

    int size = vec.size();
    for(int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << endl;;
    }

    for(auto it = vec_int.begin(); it != vec_int.end(); ++it)
    {
        cout << "*it : " << *it << endl;;
    }


    return 0;
}