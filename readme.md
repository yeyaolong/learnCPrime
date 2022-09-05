# 自学C++

自学视频地址：

[黑马程序员匠心之作|C++教程从0到1入门编程,学习编程不再难](https://www.bilibili.com/video/BV1et411b73Z?p=10&vd_source=a4e095d68862da71463ae9de87d5356c)

# 内容

- /Helloword 初试C++
- /dataType 数据类型
- /Operator 运算符


# 20220812

## P9 数据类型-sizeof关键字
## P10 数据类型-实型

# 20220813

## P11~P15 数据类型
## P16~P23 运算符


# 20220814

## p24~p41 程序流程结构

# 20220815

## P42数组定义方式~P46 数组冒泡排序

# 20220816

## P47数组-二维数组定义方式~P55 函数-函数的分文件编写

# 20220817

## P56 指针-指针的定义和使用 ~ P59 指针-野指针

# 20220819

## P60 指针-const修饰指针 ~ P63 指针-指针配合数组和函数案例

# 20220820

## P64 结构体-结构体的定义和使用~P71 结构体-结构体案例2

# 20220821

## P72 通讯录管理系统-系统功能介绍及展示 ~ P83 通讯管理系统-清空通讯录

# 20220822

没有看视频，想学一下WebAssembly，测试了一下实现一个斐波那契数列，是javascript快还是C++快，出人意料的是javascript更快，真是奇怪了。

20220902 是编译器的问题.用visual studio编译出来的速度会慢，如果我用 g++ 敲命令去编译，速度会快非常多。

# 20220823

用g++编译斐波那契数列，比用visual studio 编译斐波那契数列，g++编译后的程序运行速度更快。

# 20220824

## P84 01 程序内存模型——内存四区-全局区

  

  C++程序执行时，将内存大方向划分为4个区域：

  - 代码区：存放函数体的二进制代码，由操作系统进行管理
  - 全局区：存放全局变量和静态变量以及常量
  - 栈区：由编译器自动分配和释放，存放函数的参数值，局部变量
  - 堆区：由程序员分配和释放，若程序员不释放，程序结束时由操作系统回收

  内存四区的意义：

  不通区域存放的数据，赋予不通的生命周期，给我们更大的灵活编程。

在程序编译后，生成了exe可执行程序，未执行该程序前分为两个区域：

**代码区**：

存放CPU执行的机器指令。

代码区是**共享**的，共享的目的是对于频繁执行的程序，只需要在内存中存一份代码即可

代码区是**只读**的，使其只读的原因是防止程序意外的修改了它的指令。

**全局区**：

全局变量和静态变量存放在此。

全局区还包含了常量区，字符串常量和其他常量也存放在此。

**该区域的数据在程序结束后由操作系统释放。**



# 20220902

## P85 程序的内存模型-内存四区-全局区

  ![image-20220902184527420](F:\workspace\c++\learnCPrime\readme.assets\image-20220902184527420.png)

全局区中存放：全局变量、全局常量、字符串常量、静态变量

## P86 程序的内存模型-内存四区-栈区

  **栈区：**

  由编译器自动分配释放，存放形参，局部变量等。

  **注意事项：不要返回局部变量的地址，栈区开辟的数据由编译器自动释放。**
  
## P87 程序的内存模型-内存四区-堆区
  
    **堆区：**
  
    由程序员分配释放，若程序员不释放，程序结束时由操作系统回收
  
    在C++中主要利用new在堆区开辟内存
  
  
# 20220903

## P88 程序的内存模型-new运算符

C++中利用操作符在堆区开辟数据

堆区开辟的数据，由程序员手动开辟，手动释放，释放利用操作符 delete

语法: new 数据类型

利用new创建的数据，会返回该数据对应的类型的**指针**.

## P89 C++中的引用-引用的基本语法

引用的基本作用

**作用：**给变量起别名（这个别名和原名都是操作同一个内存）
**语法：**`数据类型 &别名 = 原名`

## P90 引用的注意事项

引用必须初始化
引用在初始化后，不可以改变

## P91 C++中的引用-引用做函数形参

**作用：**函数传参时，可以利用引用的技术让形参修饰实参
**优点：**可以简化指针修改实参

# 20220904

## P92 C++中的引用-引用做函数的返回值

作用：引用是可以作为函数的返回值存在的

注意：**不要返回局部变量引用**

用法：函数调用作为左值


## P93 C++中的引用-引用的本质

本质：**引用的本质在C++内部实现是一个指针常量**
```c++
// 指针常量,指针指向不可以修改，值可以修改
int a = 10;
int* const p = &a;
```

```c++
// 常量指针，指针指向可以修改，值不可以修改
int a = 10;
int const* p = &a;
```

结论：C++推荐引用技术，引用本质是指针常量，但是所有的指针操作编译器都帮我们做了。

## P94 C++中的引用-常量引用

**作用：**常量引用主要用来修饰形参，防止误操作

在函数形参列表中，可以加const修饰形参列表，防止形参改变实参

## P95 函数高级-函数的默认参数

### 函数默认参数

在C++中，函数的形参是可以有默认值的。
语法: `返回值类型 函数名 (参数 = 默认值) {}`

## P96 函数高级-函数的占位参数

C++中函数的形参列表可以有占位参数，用来做占位，调用函数必须填补该位置

语法： 返回值类型 函数名 (函数类型) {}

在现阶段函数的占位参数存在意义不大，但是后面的课程中会用到该技术。

## P97 函数高级-函数重载（重要！）

作用：函数名可以相同，提高复用性

函数重载满足条件：
- 同一作用域下
- 函数名相同
- 函数参数类型不同，或者个数不同 或者顺序不同

**注意：**函数的返回值不可以作为函数重载的条件

## P98 函数高级-函数重载-注意事项

- 引用作为重载条件
- 函数重载碰到默认参数

# 20220905

## P99 类和对象-封装-属性和行为作为整体

C++面向对象的三大特征：封装、继承、多态

C++认为万事万物皆为对象，对象上有其属性和行为。

例如：
人可以作为对象，属性有姓名、年龄、身高、体重...，行为有走、跑、跳、吃饭、唱歌...
车也可以作为对象，属性有轮胎、方向盘、车灯...行为有载人、放音乐、放空调...
具有相同性质的对象，我们可以抽象为类，人属于人类，车属于车类

### 封装

封装是C++面向对象三大特征之一

封装的意义：
- 将属性和行为作为一个整体，表现生活中的事物
- 将属性和行为加以权限控制
**封装意义一：**
在设计类的时候，属性和行为写在一起，表现事物

**语法：**
class 类名 { 访问权限： 属性/行为 };

## P100 类和对象-封装-设计学生类

# 20220906

## P101 类和对象-封装-访问权限

类设计时，可以把属性和行为放在不同的权限下，加以控制

访问权限有三种：

- public 公共权限 类内可以访问，类外可以访问，子类可以访问
- protected 保护权限 类内可以访问，类外不可以访问，子类可以访问
- private 私有权限 类内可以访问，类外不可以访问，子类不可以访问

## P102 struct和class的区别

在C++中struct和class唯一的区别在于 默认的访问权限不同

区别：

- struct默认权限为公共
- class 默认权限为私有

## P103 将成员属性设置为私有

优点1：将所有成员属性设置为私有，可以自己控制读写权限
优点2：对于写权限，我们可以检测数据的有效性。

