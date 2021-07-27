# C / C++ 簡介

## 指令

+ 進入虛擬環境
```
dockerw start
```
> 以 Docker 啟動開發環境，結束請使用 "Ctrl + Z"

+ 執行內容
```
. run.sh [path]
```
> 以此指令呼叫 c++ 編譯工具進行處理，[path] 為 src 下的範例目錄

## 目錄

#### 基礎結構

+ [C++ Environment Setup](https://www.tutorialspoint.com/cplusplus/cpp_environment_setup.htm)
+ [C++ Basic Syntax](https://www.tutorialspoint.com/cplusplus/cpp_basic_syntax.htm)
+ [Comments in C++](https://www.tutorialspoint.com/cplusplus/cpp_comments.htm)

```
. run.sh base
```

#### 前置處理器

+ [C/C++ preprocessor reference](https://msdn.microsoft.com/zh-tw/library/y4skk93w.aspx)
+ [前置處理器](http://zake7749.github.io/2015/08/13/Cpreprocessor/)

#### 變數

+ [C++ Data Types](https://www.tutorialspoint.com/cplusplus/cpp_data_types.htm)

```
. run.sh data-types
```

+ [C++ Variable Types](https://www.tutorialspoint.com/cplusplus/cpp_variable_types.htm)
+ [Variable Scope in C++](https://www.tutorialspoint.com/cplusplus/cpp_variable_scope.htm)

```
. run.sh variable-types
```

+ [C++ Constants/Literals](https://www.tutorialspoint.com/cplusplus/cpp_constants_literals.htm)
+ [C++ Modifier Types](https://www.tutorialspoint.com/cplusplus/cpp_modifier_types.htm)

```
. run.sh modifier
```

+ [Storage Classes in C++](https://www.tutorialspoint.com/cplusplus/cpp_storage_classes.htm)
+ [儲存類別](https://docs.microsoft.com/zh-tw/cpp/cpp/storage-classes-cpp?view=msvc-160)

```
. run.sh storage-classes
```

#### 陳述式

+ [Operators in C++](https://www.tutorialspoint.com/cplusplus/cpp_operators.htm)
+ [C++ Loop Types](https://www.tutorialspoint.com/cplusplus/cpp_loop_types.htm)
+ [C++ decision making statements](https://www.tutorialspoint.com/cplusplus/cpp_decision_making.htm)

#### 函數

+ [C++ Functions](https://www.tutorialspoint.com/cplusplus/cpp_functions.htm)
+ [Passing by pointer Vs Passing by Reference in C++](https://www.geeksforgeeks.org/passing-by-pointer-vs-passing-by-reference-in-c/)

Difference in Reference variable and pointer variable :
1. A pointer can be re-assigned while reference cannot, and must be assigned at initialization only.
2. Pointer can be assigned NULL directly, whereas reference cannot.
3. Pointers can iterate over an array, we can use ++ to go to the next item that a pointer is pointing to.
4. A pointer is a variable that holds a memory address. A reference has the same memory address as the item it references.
5. A pointer to a class/struct uses ‘->'(arrow operator) to access it’s members whereas a reference uses a ‘.'(dot operator)
6. A pointer needs to be dereferenced with * to access the memory location it points to, whereas a reference can be used directly.

**Overall, Use references when you can, and pointers when you have to. But if we want to write C code that compiles with both C and a C++ compiler, you’ll have to restrict yourself to using pointers.**

```
. run.sh function
```

#### 資料

+ [C++ Numbers](https://www.tutorialspoint.com/cplusplus/cpp_numbers.htm)
+ [C++ Arrays](https://www.tutorialspoint.com/cplusplus/cpp_arrays.htm)
+ [C++ Strings](https://www.tutorialspoint.com/cplusplus/cpp_strings.htm)

```
. run.sh data
```

#### 指標

+ [C++ Pointers](https://www.tutorialspoint.com/cplusplus/cpp_pointers.htm)
+ [C++ References](https://www.tutorialspoint.com/cplusplus/cpp_references.htm)

```
. run.sh pointer
```

#### 物件與結構

+ 語言文獻
  - [Data Structures](https://www.tutorialspoint.com/cplusplus/cpp_data_structures.htm)
  - [Classes and Objects](https://www.tutorialspoint.com/cplusplus/cpp_classes_objects.htm)

+ 物件編譯
  - [標頭檔](https://docs.microsoft.com/zh-tw/cpp/cpp/header-files-cpp?view=msvc-160)
  - [CMake 入門/建置執行檔](https://zh.m.wikibooks.org/zh-tw/CMake_%E5%85%A5%E9%96%80/%E5%BB%BA%E7%BD%AE%E5%9F%B7%E8%A1%8C%E6%AA%94)
  - [CMake Reference Documentation](https://cmake.org/documentation/)

```
. run.sh class
```
> 使用 c++ 編譯所有 cpp 檔案

```
. run-cmake.sh class
```
> 使用 cmake 建立 makefile 來編譯專案

#### 繼承與多型

多型是指為不同衍生類別的實體提供統一的介面，而在 C++ 中若統一介面的指標需呼叫指向的衍生類別經過函數複寫 ( Function Override ) 的函數，則需於基底類別中宣告虛擬函數 ( Virtual Function )

+ 語言文獻
    - [Polymorphism wiki](https://zh.wikipedia.org/wiki/%E5%A4%9A%E6%80%81_(%E8%AE%A1%E7%AE%97%E6%9C%BA%E7%A7%91%E5%AD%A6))
        + [Polymorphism in C++](http://www.tutorialspoint.com/cplusplus/cpp_polymorphism.htm)
        + [Function Override](https://beginnersbook.com/2017/09/cpp-function-overriding/)
        + [Virtual Function](https://beginnersbook.com/2017/09/cpp-function-overriding/)

+ 物件編譯
    - [如何使用CMake正確添加包含目錄](https://ubuntuqa.com/zh-tw/article/9081.html)

```
. run-cmake.sh class-polymorphism
```
> 使用 cmake 建立 makefile 來編譯專案

#### 例外

+ [stdexcept cppreference](https://en.cppreference.com/w/cpp/header/stdexcept)
    + [try、throw 和 catch 陳述式 (C++)](https://docs.microsoft.com/zh-tw/cpp/cpp/try-throw-and-catch-statements-cpp?view=msvc-160)
    + [評估 Catch 區塊的方式 (C++)](https://docs.microsoft.com/zh-tw/cpp/cpp/how-catch-blocks-are-evaluated-cpp?view=msvc-160)
    + [MSVC 中的例外處理](https://docs.microsoft.com/zh-tw/cpp/cpp/exception-handling-in-visual-cpp?view=msvc-160)
    + [例外狀況規格 (擲回、noexcept) MSDN](https://docs.microsoft.com/zh-tw/cpp/cpp/exception-specifications-throw-cpp?view=msvc-160)

```
. run-cmake.sh exception
```
> 使用 cmake 建立 makefile 來編譯專案

#### 標準樣板函式庫(STL)

**標準樣板函式庫（英文：Standard Template Library，縮寫：STL），是一個 C++ 函式庫，大量影響了 C++ 標準程式庫但並非是其的一部分；其中包含4個組件，分別為演算法、容器、函式、疊代器。**
> From [標準樣板函式庫 wiki](https://zh.wikipedia.org/wiki/%E6%A0%87%E5%87%86%E6%A8%A1%E6%9D%BF%E5%BA%93)

+ 容器
    - [Vector](https://www.geeksforgeeks.org/vector-in-cpp-stl/)，範例 ```. run-cmake.sh stl/vector```
    - [List](https://www.geeksforgeeks.org/list-cpp-stl/)
    - [Deque](https://www.geeksforgeeks.org/deque-cpp-stl/)
    - [Queue](https://www.geeksforgeeks.org/queue-cpp-stl/)
    - [Set](https://www.geeksforgeeks.org/set-in-cpp-stl/)
    - [Map](https://www.geeksforgeeks.org/map-associative-containers-the-c-standard-template-library-stl/)

+ 疊代器
    - [Iterators](https://www.geeksforgeeks.org/iterators-c-stl/)

+ [演算法](https://www.cplusplus.com/reference/algorithm/)
    - [for_each](https://www.cplusplus.com/reference/algorithm/for_each/)，範例 ```. run-cmake.sh stl/vector```

+ 文獻
    - [C++ STL 教程](https://www.runoob.com/cplusplus/cpp-stl-tutorial.html)
    - [C++ STL 學習總結(全面)](https://jasonblog.github.io/note/c++/c++_stl_xue_xi_zong_7d5028_quan_976229.html)
    - [The C++ Standard Template Library (STL)](https://www.geeksforgeeks.org/the-c-standard-template-library-stl/)

#### 執行緒 ( Thread ) 與原子 ( Atome )

+ 語言文獻
    - [Multithreading in modern C++](https://www.modernescpp.com/index.php/der-einstieg-in-modernes-c)
    - [thread cppreference](https://en.cppreference.com/w/cpp/thread)
        + [C++ thread用法總結(整理)](https://www.itread01.com/content/1548785371.html)
        + [C++ std::thread 建立多執行緒用法與範例](https://www.itread01.com/content/1548785371.html)
    - [this_thread cppreference](http://www.cplusplus.com/reference/thread/this_thread/)
        + [std::this_thread::sleep_for 用法與範例](https://shengyu7697.github.io/std-this_thread-sleep_for/)

+ 物件編譯
    - [cmake & libpthread](https://stackoverflow.com/questions/1620918/cmake-and-libpthread)
    - [linux cmake 多线程 错误 undefined reference to 'pthread_create'](https://shengyu7697.github.io/std-thread/)

```
. run-cmake.sh thread/base
. run-cmake.sh thread/this
. run-cmake.sh thread/join
. run-cmake.sh thread/detach
. run-cmake.sh thread/mutex
```
> 使用 cmake 建立 makefile 來編譯專案

#### 函式庫應用

+ [Input and Output](https://www.tutorialspoint.com/cplusplus/cpp_basic_input_output.htm)
+ [Date and Time](https://www.tutorialspoint.com/cplusplus/cpp_date_time.htm)
+ [limits](https://www.cplusplus.com/reference/limits/)
    - C++11 的 limits 提供的 std::numeric_limits 類別，可提供編譯平台的基礎算數類別 ( int、float、chart ) 的數值資訊，用以取代傳統的預處理常數
    - [C/C++11中std::numeric_limits的使用](https://blog.csdn.net/fengbingchun/article/details/77922558)，範例 ```. run-cmake.sh stl/limits```
+ [sleep](https://en.cppreference.com/w/cpp/thread/sleep_for)
    - [如何在 C++ 中實現毫秒級的睡眠](https://www.delftstack.com/zh-tw/howto/cpp/how-to-use-sleep-program-function-in-cpp/)

## 參考

+ [重新理解 C++](https://zh-tw.coderbridge.com/series/9c0fd91d2bbb4986b0b451aed1319325/posts/f207875881a743548d3d904335bedca4)
