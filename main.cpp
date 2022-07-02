#include "code.generator.hpp"

int main() 
{
    string input;
    cin >> input;
    try 
    {
        string code = generateCode(input);
        cout << code << endl;
    }
    catch (const exception& e) 
    {
        cerr << "Caught: " << e.what() << endl;
        cerr << "Type: " << typeid(e).name() << endl;
    }
    return 0;
}