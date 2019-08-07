#include "gender.h"

bool Gender::Validate(std::string str)      {
    bool flag = 0;
    if (str == "Male" || str == "Female" || str == "Any" ||
        str == "male" || str == "female" || str == "any")
        flag = 1;
    return flag;
}
