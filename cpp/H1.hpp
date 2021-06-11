
#include <string>
# include <math.h>

class Plant{
  public:
    std::string technology;
    double initial_investment;
    double GWH;
    double lifetime;
    double fuelcost;
  
  void init(std::string tech, double cost, double P, double life){
    technology = tech;
    initial_investment = cost;
    GWH = P;
    lifetime = life;
    if(tech == "Nuclear"){
      fuelcost = 60;
    }
    else{
      fuelcost = 450;
    }
  }
};

class Loan{
  public:
    double duration;
    double amount;

  double rate(double duration, double amount){
    int total, a;
    double rate;
    if(duration < 10){
      rate = 2;
    } else if (duration < 30){
      rate = 3;
    } else if (duration >= 30){
      rate = 4;
    }
    total = pow(a, duration);
    return total;
  }

};

