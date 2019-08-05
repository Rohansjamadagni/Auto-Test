
%module date
%include "std_string.i"

%rename(__add__) Date::operator+;
%rename(__sub__) Date::operator-;
%rename(__equal__) Date::operator==;
%rename(__lessthan__) Date::operator<;
%rename(__greaterthan__) Date::operator>;


%{
    #include "date.h"
%}


%include "date.h"

