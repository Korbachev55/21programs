
#include <iostream>

class Person{
    
public:
    Person(const std::string& name, const int birthyear);
    const std::string& GetName() const;
    int GetAge(int year) const;

private:
    std::string name_;
    int birthyear_;
};

Person::Person(const std::string& name, const int birthyear)
    : name_(name), birthyear_(birthyear) {
} 

const std::string& Person::GetName() const {
    return name_;
}

int Person::GetAge(int year) const {
    return year - birthyear_;
}

int main(void) {
    /** Person class' constructor takes two arguments: name and birthyear **/
    Person kalle("Kalle Kankkunen", 1996);
    Person ville("Ville Vinkkunen", 1992);
    Person liisi("Liisi Pirinen", 1950);

    std::cout << kalle.GetName() << " is " << kalle.GetAge(2020) << " years old." << std::endl;
    std::cout << ville.GetName() << " is " << ville.GetAge(2020) << " years old." << std::endl;
    std::cout << liisi.GetName() << " is " << liisi.GetAge(2020) << " years old." << std::endl;
}
