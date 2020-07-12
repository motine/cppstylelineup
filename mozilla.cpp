#include <iostream>

namespace western {

enum ShootingHand
{
  kLeft,
  kRight
};

class Cowboy
{
public:
  Cowboy();
  Cowboy(int aGunCount);
  ~Cowboy();

  void Shoot(std::string aWho);
  int GetAge() { return mAge; }

protected:
  void MakeBang(const int& aHowMany);

  int mGunCount;
  int mAge;
};

Cowboy::Cowboy()
  : mAge(45)
  , mGunCount(2)
{
  std::cout << "I am alive!" << std::endl;
}

Cowboy::Cowboy(int aGunCount)
  : mAge(45)
  , mGunCount(aGunCount)
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

void
Cowboy::Shoot(std::string aWho)
{
  mAge++;
  int someNumber = 5 + 7 * 3;
  MakeBang(someNumber);
  if (someNumber > 10) {
    return;
  }
  switch (mAge) {
    case 45:
      mAge--;
      break;
    default:
      mAge++;
  }
}

void
Cowboy::MakeBang(const int& aHowMany)
{
  for (int i = 0; i < aHowMany; ++i)
    std::cout << "Bang!" << std::endl;
}

void
someVeryLongMethod(int param1,
                   int param2,
                   int param3,
                   int param4,
                   int param5,
                   int param6,
                   int param7,
                   int param8,
                   int param9,
                   int param10)
{
  std::cout << "So long..." << std::endl;
}
}

using namespace western;

int
main()
{
  Cowboy Amy;
  Cowboy Angus(2);
  Cowboy* currentCowboy = &Amy;
  currentCowboy->Shoot("yourself");
  return 0;
}
