// #include <iostream>
// #include <string>
// using namespace std;
// int main() {
//     string str {"Steve jobs founded the apple"};
//     string str2 {"apple"};
//     unsigned found = str.find(str2);
//     if (found != string :: npos)
//     cout << found << "\n";
 

//     return 0;
// }
// #include <iostream>
// #include <string>
// using namespace std;

// int main() {
//     string str {"Steve jobs founded the apple"};
//     string str2 {"apple"};
//     unsigned found = str.find(str2);
//     if (found != string::npos) {
//         cout << "Found '" << str2 << "' at position " << found << "\n";
//     } else {
//         cout << "'" << str2 << "' not found in the string.\n";
//     }

//     return 0;
// }

// #include <iostream>
// #include <string>
// using namespace std;
// int main() {
//     string str {"Steve jobs"};
//     unsigned long int found = str.find_first_of("aeiou");
//     while (found != string :: npos)
//     {
//         str[found] = '*';
//         found = str.find_first_of("aeiou", found + 1);
//     }
//     cout << str << "\n";
 

//     return 0;
// }


// #include <iostream>
// #include <cstring>
// #include <string>
// using namespace std;
// int main() {
//     string str {"Steve jobs"};
//     char * cstr = new char [str.length() + 1];
//     strcpy (cstr, str.c_str());
//     char * p = strtok (cstr, " ");
//     while (p != 0)
//     {
//         cout << p << "\n";
//         p = strtok(NULL, " ");
//     }
//     delete[] cstr;
 

//     return 0;
// }

#include <iostream>

#include <string>

using namespace std;

int main()

{

cout<<is_same<int,char>::value;

cout<<is_same<char[10], char[10]>::value;

cout<<is_same<char*[10], string>::value;

return 0;

}