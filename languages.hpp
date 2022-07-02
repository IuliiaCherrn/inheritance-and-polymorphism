#pragma once
#include <iostream>
#include <string>
#include <vector>

class Languages 
{
protected:
    string m_extension;
public:
    Languages() 
    {
        cout << "Base class: CONSTRUCTOR" << endl;
    };
    virtual ~Languages() 
    {
        cout << "Base class: DESTRUCTOR" << endl;
    };

    virtual string someRelatedThing() = 0;

};
