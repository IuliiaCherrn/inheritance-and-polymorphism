#pragma once
#include "languages.hpp"

class C_PLUS_PLUS : public Languages 
{
private:
public:
    C_PLUS_PLUS() : Languages() 
    {

        cout << "C_PLUS_PLUS constructor" << endl;
        m_extension = "cpp";
    };
    virtual ~C_PLUS_PLUS() 
    {
        cout << "C_PLUS_PLUS class: destructor" << endl;
    };
    string someRelatedThing() override 
    {
        cout << "C_PLUS_PLUS class: someRelatedThing function" << endl;
        string code = "c++_code." + m_extension;
        return code;
    }
};

