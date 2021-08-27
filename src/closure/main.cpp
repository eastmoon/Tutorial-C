#include <iostream>
#include <functional>

/*
// Lambdas expressions could use capture to take variable from local variable.
// []                   不捕捉任何所在地變數。
// [=]                  以唯讀方式捕捉所有所在地變數。
// [&]                  以傳址方式捕捉所有所在地變數。
// [<variable name>]    明確指定捕捉哪一個所在地變數。
// [this]               捕捉this指標。
*/
std::function<void(void)> closureWrapper1()
{
    // Defined variable x assign into closure
    int x = 10;
    return [x](){std::cout << "Value in the closure: " << x << std::endl;};
}

std::function<void(void)> closureWrapper2()
{
    // Defined variable x address assign into closure.
    int x = 10;
    return [&x](){x += 1; std::cout << "Value in the closure: " << x << std::endl;};
}

int main()
{
    int x = 10;
    // Use auto variable type to catch lambdas expressions.
    auto func0 = [&x](){x += 1; std::cout << "Value in the closure: " << x << std::endl;};
    // Use std::function ( aka, STL function pointer ) type to catch lambdas expressions.
    std::function<void(void)> func1 = closureWrapper1();
    std::function<void(void)> func2 = closureWrapper2();
    func0();
    func0();
    func0();
    std::cout << "-------------------------" << std::endl;
    func1();
    func1();
    func1();
    std::cout << "-------------------------" << std::endl;
    func2();
    func2();
    func2();
}
