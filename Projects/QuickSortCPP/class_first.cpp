#include<iostream>
#include<string>
using namespace std;

class Person // 创建Person类
{
private: // private是访问修饰符，用它修饰的东西都只能在对应类中使用,不过如果在类内部中默认的权限就是private
    string name; // 成员变量，用于存储姓名
    int age;     // 成员变量，用于存储年龄
    int tall;    // 成员变量，用于存储身高
    string id;   // 成员变量，用于存储身份证号

public: // public修饰的东西全局可用
    Person(); // 默认构造函数，函数名与类名相同，用于创建对象时初始化成员变量
    Person(string name, int age, int tall, string id); // 这两个是构造函数,函数名一定要跟类名一样

    string getName()
    {
        string name = this->name; // 使用this指针可以指向成员变量
        return name;
    }

    int getAge()
    {
        int age = this->age;
        return age;
    }

    int getTall()
    {
        int tall = this->tall;
        return tall;
    }

    string getId()
    {
        string id = this->id;
        return id;
    }

    ~Person(); // 析构函数，简单来说就是垃圾回收用的，会在有对象执行完毕后自动执行

};

int main()
{
    Person one("小张", 18, 185, "114514");     // 如果括号内不加参数，那么就会调用Person()
    cout << "姓名：" << one.getName() << endl << "年龄：" << one.getAge() <<
    endl << "身高：" << one.getTall() << endl << "学号：" << one.getId();

    return 0;
}
