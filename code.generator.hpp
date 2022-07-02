#pragma once
#include <exception>
#include <memory>
#include "languages.hpp"
#include "java.hpp"
#include "c_plus_plus.hpp"
#include "php.hpp"

using namespace std;

string generateCode(string& inputLanguage) 
{
    unique_ptr<Languages> lang;
    if (inputLanguage == "C++") 
    {
        lang = make_unique<C_PLUS_PLUS>(C_PLUS_PLUS());
        return lang->someRelatedThing();
    }
    else if (inputLanguage == "Java") 
    {
        lang = make_unique<Java>(Java());
        return lang->someRelatedThing();
    }
    else if (inputLanguage == "PHP") 
    {
        lang = make_unique<PHP>(PHP());
        return lang->someRelatedThing();
    }
    else 
    {
        throw logic_error("WRONG");
    };

}




