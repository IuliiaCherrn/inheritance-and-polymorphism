#pragma once
#include "languages.hpp"

class PHP : public Languages 
{
private:
public:
    PHP() : Languages() 
    {

        cout << "PHP constructor" << endl;
        m_extension = "php";
    };
    virtual ~PHP() 
    {
        cout << "PHP class: destructor" << endl;
    };
    string someRelatedThing() override 
    {
        cout << "PHP class: someRelatedThing function" << endl;
        string code = "php_code." + m_extension;
        return code;
    }
};