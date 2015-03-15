#include <iostream>
//#include <stdio.h>

class Box{
public:
    void Add(int add);
    void Del(int del);
    void Empty();
    int GetTotal() {
        return total;
    }
private:
    int total;
};

void Box::Add(int add)
{
    total += add;
}
void Box::Del(int del)
{
    total -= del;
    if (total < 0) Empty();
}

void Box::Empty()
{
    total = 0;
}

int main()//main(int argc, const char * argv[])
{
    Box mybox;     //オブジェクトを生成
    
    mybox.Empty(); //最初のboxを空にする
    mybox.Add(10);
    mybox.Del(8);
    printf("箱の中:%d個\n", mybox.GetTotal());
    return 0;
}

