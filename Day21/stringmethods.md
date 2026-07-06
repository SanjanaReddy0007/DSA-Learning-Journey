uilt-In String Methods in C++
The string class in C++ is part of the Standard Template Library (STL) and provides a way to work with sequences of characters. Strings in C++ are dynamic, meaning they can grow and shrink in size, unlike fixed-size character arrays.

Features:

Dynamic Size: Automatically adjusts its size to accommodate its contents.

Memory Management: Handles all memory allocations and deallocations internally, simplifying memory management for the developer.

Wide Range of Member Functions: Provides numerous methods for string manipulation, including modification, comparison, searching, and accessing characters.

Compatibility with C-Style Strings: Can be easily converted to C-style strings (const char*) for compatibility with C functions.

Safe Access: Offers methods like at() for safe access with bounds checking.

Common Methods

length()
Description:   Returns the length of the string.

Syntax: str.length()

Example: 

CPP
12
string str = "Nxtwave";cout << str.length(); // Output: 7
push_back()
Description: Appends a character to the end of the string.

Syntax: str.push_back(char)

Example:

CPP
123
string str = "Nxtwave";str.push_back('!');cout << str; // Output: Nxtwave!
pop_back()
Description: Removes the last character from the string.

Syntax: str.pop_back()

Example:

CPP
123
string str = "Nxtwave!";str.pop_back();cout << str; // Output: Nxtwave
find()
Description: Searches the string for the first occurrence of the specified substring.

Syntax: 

str.find(substring)
str.find(char)
Example:

CPP
1234
string str = "Nxtwave";cout << str.find('t') << endl;      // Output: 2cout << str.find("wave") << endl;   // Output: 3cout << str.find('z') << endl;      // Output: string::npos (usually a large number, like 18446744073709551615) 
string::npos
Description: A static member constant with the greatest possible value for an element of type size_t. This value is used to represent not-found conditions in string operations, primarily with the find() method.

Syntax: string::npos

Example:

CPP
123456
string str = "Nxtwave";if (str.find('z') == string::npos) {  cout << "Not Found" << endl;     } else {  cout << "Found" << endl;}
substr()
Description: Returns a substring, starting from the specified position for the specified length.

Syntax: str.substr(position, length)

Example:

CPP
12
string str = "Nxtwave";cout << str.substr(3, 4); // Output: wave
getline()
Description: Reads a line from an input stream into the string.

Syntax: 

istream& getline( istream& is, string& str )
istream& getline(istream& is, string& str, char delimeter)
Examples:

Standard usage:

CPP
123
string str;getline(cin, str);      // Input: This is a test messagecout << str << endl;    // Output: This is a test message
With delimiter:

CPP
1234567891011
string str;while (getline(cin, str, ' ')) {   cout << str << endl;}// Input: This is a test message// Output:// This// is// a// test// message 
Expand
stringstream
Description: Allows a string to be treated as a stream. Useful for parsing strings. stringstream can be used to separate strings based on whitespace or other delimiters and convert string parts into various data types.

Example:

CPP
1234567891011
string str = "1,5,9,32,54";stringstream ss(str);while (getline(ss, str, ',')) {    cout << str << endl;}// Output:// 1// 5// 9// 32// 54 
Expand
empty()
Description: Checks whether the string is empty (i.e., whether it has zero length).

Syntax: str.empty()

Example:

CPP
123456
string str = "Nxtwave";if (str.empty()) {    cout << "The string is empty.";} else {    cout << "The string is not empty."; // Output: The string is not empty.}
append()
Description: Adds characters to the end of the string.

Syntax: 

str.append(substring)
str.append(char*, length)
str.append(char*)
Example:

CPP
123
string str = "Nxt";str.append("wave");cout << str; // Output: Nxtwave
compare()
Description: Compares the string with another string or substring. Returns an integer indicating the relationship between the two strings:
0 if the strings are equal,
a negative value if the calling string is less than the parameter string,
a positive value if the calling string is greater than the parameter string.

Syntax: 

str.compare(other_string)
str.compare(start_position, length, other_string)
Example:

CPP
1234567
string str1 = "Nxtwave";string str2 = "Nxtwave";if (str1.compare(str2) == 0) {    cout << "The strings are equal."; // Output: The strings are equal.} else {    cout << "The strings are not equal.";}
replace()
Description: Replaces part of the string with another string.

Syntax: str.replace(start_position, length, new_substring)

Example:

CPP
123
string str = "Nxtwave";str.replace(3, 4, "Nexthop");cout << str; // Output: NxtNexthop
erase()
Description: Removes characters from the string, starting from a specified position and for a specified length.

Syntax: str.erase(start_position, length)

Example:

CPP
123
string str = "Nxtwave";str.erase(3, 4);cout << str; // Output: Nxt
insert()
Description: Inserts a substring at a specified position.

Syntax: str.insert(position, substring)

Example:

CPP
123
string str = "Nxtwave";str.insert(3, "Hello ");cout << str; // Output: NxtHello wave
at()
Description: Accesses a character at a specified position with bounds checking.

Syntax: str.at(position)

Example:

CPP
12
string str = "Nxtwave";cout << str.at(2); // Output: t
clear()
Description: Empties the string, making its length 0.

Syntax: str.clear()
