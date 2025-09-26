#include <iostream>
using namespace std;

// تعريف الـ struct الأول اسمه ContactInfo
// ContactInfo Struct => قالب لتخزين معلومات الاتصال
struct ContactInfo {
    string email;     // email => خاصية (member variable) لتخزين الإيميل
    string phone;     // phone => خاصية (member variable) لتخزين رقم الهاتف
};

// تعريف struct ثاني اسمه Person
// Person Struct => قالب لتخزين معلومات شخص ويتضمن ContactInfo داخله
struct Person {
    string name;           // name => خاصية (member variable) لتخزين اسم الشخص
    int age;               // age => خاصية لتخزين العمر
    ContactInfo contact;   // contact => كائن (object) من نوع ContactInfo داخل Person
};

int main() {
    // هنا أنشأنا كائن (object) من نوع Person واسمه person1
    Person person1;

    // تعيين قيم للخصائص
    person1.name = "Mohammad Hamdan";  // تعبئة name
    person1.age = 20;                   // تعبئة age

    // تعبئة خصائص ContactInfo داخل الكائن person1
    person1.contact.email = "mohammad@example.com"; // تعبئة الإيميل
    person1.contact.phone = "+962790000000";        // تعبئة رقم الهاتف

    // طباعة البيانات
    cout << "Name: " << person1.name << endl;  // طباعة الاسم
    cout << "Age: " << person1.age << endl;    // طباعة العمر
    cout << "Email: " << person1.contact.email << endl;  // طباعة الإيميل
    cout << "Phone: " << person1.contact.phone << endl;  // طباعة الهاتف

    return 0;
}