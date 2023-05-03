// All statements starting with # are preprocessor statements, to be handled at the beginning of the
// compilation, include for example essentially pastes the content of the file included in the
// current file.
#include <iostream>

// Regular enum objects do not permit twice the same enum value in different enum objects
enum Status
{
    Pending,
    Approved,
    Cancelled

};

// That's why to use twice the same value, you need to use enum classes, those
// are declared almost the same way, the only difference is the keyword used to
// declare them is the split keyword "enum class"
enum class FileError
{
    notfound,
    ok
};

// This second enum class also has the "ok" enum value in it, but as mentioned
// above, this is not a problem for enum classes (but it is for regular enums)
enum class NetworkError
{
    disconnected,
    ok
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
