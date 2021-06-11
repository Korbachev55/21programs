
#include <iostream>
#include <string>
#include <vector>

class Monster {
  public:
    Monster(std::string name, std::string type, int hitpoints) : name_(name), type_(type), hitpoints_(hitpoints) {}

    const std::string GetName() {return name_;}
    const std::string GetType() {return type_;}
    int GetHitPoints() {return hitpoints_;}
  
  private:
    std::string name_;
    std::string type_;
    int hitpoints_;
};

class Drowner : public Monster{
  public:
    Drowner(const std::string name) : Monster(name, "Drowner", 10) {};
};

class Specter : public Monster{
  public:
    Specter(const std::string name) : Monster(name, "Wraith", 15) {};
};

int main(){
  Drowner water_hag("Amy");
  Drowner rottfiend("Herbert");
  Specter wraith("Carl");
  Specter plague_maiden("Shirley");

  std::vector<Monster> Monster_list;
  Monster_list.push_back(water_hag);
  Monster_list.push_back(rottfiend);
  Monster_list.push_back(wraith);
  Monster_list.push_back(plague_maiden);


  std::cout << water_hag.GetType() << std::endl;
  std::cout << wraith.GetName() << std::endl;
}