#include <stdexcept>
#include <limits>
#include <iostream>

void MyFunc(int c)
{
    if (c > std::numeric_limits<char>::max())
        throw std::invalid_argument("MyFunc argument too large.");
    //...
}

int main()
{
    try
    {
        MyFunc(256); //cause an exception to throw
    }
    // Error handler with invalid argument.
    catch(std::invalid_argument& e)
    {
        std::cerr << e.what() << std::endl;
        return -1;
    }
    // Error handler with default exception class.
    catch(const std::exception& e)
    {
        std::cerr << "MY_APPLICATION_GENERAL_ERROR" << std::endl;
    }
    //...
    return 0;
}
