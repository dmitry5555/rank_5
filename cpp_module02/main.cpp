#include "ATarget.hpp"
#include "ASpell.hpp"
#include "Dummy.hpp"
#include "Fwoosh.hpp"
#include "Warlock.hpp"

#include "BrickWall.hpp"
#include "Fireball.hpp"
#include "Polymorph.hpp"
#include "SpellBook.hpp"
#include "TargetGenerator.hpp"

int main()
{
  Warlock richard("Richard", "foo");
std::cout << ":1:";
  richard.setTitle("Hello, I'm Richard the Warlock!");
std::cout << ":2:";
  BrickWall model1;
std::cout << ":3:";

  Polymorph* polymorph = new Polymorph();
std::cout << ":4:";

  TargetGenerator tarGen;
std::cout << ":5:";

  tarGen.learnTargetType(&model1);
  richard.learnSpell(polymorph);
std::cout << ":6:";

  Fireball* fireball = new Fireball();
std::cout << ":7:";

  richard.learnSpell(fireball);
std::cout << ":8:";

  ATarget* wall = tarGen.createTarget("Inconspicuous Red-brick Wall");
std::cout << ":9:";

  richard.introduce();
std::cout << "10:";

  richard.launchSpell("Polymorph", *wall);
  richard.launchSpell("Fireball", *wall);
  std::cout << ":end:";

}
