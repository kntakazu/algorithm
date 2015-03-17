#include <iostream>
#include <string.h>

using namespace std;

class Person {
public:
    Person();
    /*
    Person::Person(const char *str);
    Person::Person(const char *str, int yy, const char* pn);
    */
    Person(const Person &psn);
    ~Person() {
        if (name != NULL) delete [] name; //メモリ解放
    }
    
    void Init(const char *str, int yy,const char* pn);
    void SetName(const char *str);
    void SetAge(const int yy) { age = yy; }
    void SetPhonNum(const char *pn) {strcpy(phonenum, pn);}
    const char *GetName() {return name;}
    int GetAge() {return age;}
    const char *GetPhoneNum() { return phonenum; }
private:
    char *name;
    int age;
    char phonenum[15];
};

void Person::Init(const char *str, int yy, const char* pn) {
    name = new char[strlen(str) + 1];
    strcpy(name, str);
    age = yy;
    strcpy(phonenum, pn);
}

Person::Person() {
    name = NULL;
    age  = 0;
    phonenum[0] = '\0';
}
/*
Person::Person(const char *str) {
    Init(str, 0, "");
}
Person::Person(const char *str, int yy, const char* pn) {
    Init(str, yy, pn);
}
*/

Person::Person(const Person &psn) {
    Init(psn.name, psn.age, psn.phonenum);
}

void Person::SetName(const char *str) {
    if (name != NULL) delete [] name;
    name = new char[strlen(str) + 1];
    strcpy(name, str);
}

int main(int argc, const char * argv[])
{
    /*
    Person per1("太郎");
    per.SetAge(20);
    per.SetPhonNum("012-1111-1111");
    
    Person per2("太郎", 25, "012-1212-2222");
    
    Person per3(per2);
    per3.SetName("太郎");
    per3.SetAge(30);
    
    Person *p[] = { &per1, &per2, &per3 };
    */
    /*
    for (int i=0; i < 3; i++) {
        cout << "名前:" << p[i]->GetName() << "年齢:" << p[i]->GetAge() << "電話番号:" << p[i]->GetPhoneNum() << endl;
    }
    */
    return 0;
}