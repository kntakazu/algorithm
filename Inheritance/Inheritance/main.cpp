#include <iostream>
#include <string.h>

using namespace std;

class Food {
public:
    void SetPrice(int myprice) {
        price = myprice;
    }
    int GetPrice() {
        return price;
    }
private:
    int price;
};


class Fruit : public Food {
public:
    void SetFarmName(const char *farm) {
        strcpy(farm_name, farm);
    }
    char *GetFarmName() {
        return farm_name;
    }
private:
    char farm_name[50];
};
int main(int argc, const char * argv[])
{
    Fruit myFruit;
    
    myFruit.SetPrice(150);
    cout << "price = " << myFruit.GetPrice() << endl;
    myFruit.SetFarmName("農家");
    cout << "farm_name = " << myFruit.GetFarmName() << endl;
    return 0;
}

