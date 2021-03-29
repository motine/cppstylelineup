#include <iostream>

namespace western
{

enum ShootingHand
{
    SH_Left,
    SH_Right
}; // use upper-case initials as prefix

class Cowboy
{
  public:
    Cowboy();
    Cowboy(int GunCount);
    ~Cowboy();

    void shoot(std::string Who);
    int getAge()
    {
        return Age;
    }

  protected:
    void makeBang(const int &HowMany);

    int GunCount;
    int Age;
}

Cowboy::Cowboy()
    : Age(45), GunCount(2)
{
    std::cout << "I am alive!" << std::endl;
}

Cowboy::Cowboy(int GunCount) : Age(45), GunCount(GunCount)
{
    // And this is the longest inline comment you have every seen. Lorem Ipsum.
    // Bacon! Cheese. Bread. Beer. Fish. Mobile fridge. More random words come
    // here...
    std::cout << "Howdy!" << std::endl;
}

Cowboy::~Cowboy()
{
    std::cout << "RIP" << std::endl;
}

void Cowboy::shoot(std::string Who)
{
    Age++;
    int SomeNumber = 5 + 7 * 3;
    makeBang(SomeNumber);
    if (SomeNumber > 10)
    {
        return;
    }
    switch (Age)
    {
    case 45:
        Age--;
        break;
    default:
        Age++;
    }
}

void Cowboy::makeBang(const int &HowMany)
{
    for (int i = 0; i < HowMany; ++i)
        std::cout << "Bang!" << std::endl;
}

void someVeryLongMethod(int param1, int param2, int param3, int param4, int param5, int param6, int param7, int param8,
                        int param9, int param10)
{
    std::cout << "So long..." << std::endl;
}
} // namespace western

using namespace western;

int main()
{
    Cowboy Amy;
    Cowboy Angus(2);
    Cowboy *CurrentCowboy = &Amy;
    CurrentCowboy->shoot("yourself");
    return 0;
}

// ADDITIONAL NOTES:
// - LLVM uses spaces, not tabs
// - Every source file should have a header that describes the purpose of it.
// - LLVM prescribes the use of doxygen.
// - #include <iostream> is forbidden and std::endl to be avoided.