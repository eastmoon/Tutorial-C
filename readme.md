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

#### 指標

#### 物件與結構

#### 繼承與多型

+ [Polymorphism in C++](http://www.tutorialspoint.com/cplusplus/cpp_polymorphism.htm)

#### 標準樣板函式庫(STL)

#### 函式庫應用

## 參考
