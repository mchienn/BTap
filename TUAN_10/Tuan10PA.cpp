#include <iostream>
#include <string>

using namespace std;

string concat(const char *str1, const char *str2)
{

    string result(str1); // result = str1
    result += str2;      // noi str2

    return result; // Tra ve result
}

char *concat(const char *str1, const char *str2)
{
    int dai1 = strlen(str1);
    int dai2 = strlen(str2);

    char *result = new char[dai1 + dai2 + 1]; // Cap phat bo nho du cho ca hai xau va ky ty ket thuc null
    strcpy(result, str1);                     // Sao chep str1 vao result
    strcat(result, str2);                     // Noi str2 vao result

    return result; // Tra ve con tro toi mang result
}