#pragma once
#include "languages.hpp"

class Java : public Languages 
{
private:
public:
    Java() : Languages() 
    {

        cout << "Java constructor" << endl;
        m_extension = "java";
    };
    virtual ~Java() 
    {
        cout << "Java class: destructor" << endl;
    };
    string someRelatedThing() override 
    {
        cout << "Java class: someRelatedThing function" << endl;
        string code = "java_code." + m_extension;
        return code;
    }
};