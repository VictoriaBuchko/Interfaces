#include<iostream>
#include<string>
using namespace std;

class Animal
{
protected:
    string name;
    int kg;
    string continent;
public:
    Animal() = default;
    Animal(string n, int k,string con)
    {
        name = n;
        kg = k;
        continent = con;
    }
    virtual void Print() = 0;
};

struct IAnimal 
{
    virtual void Eat() = 0;
    virtual void Move() = 0;
};
struct IBird
{
    virtual void Fly() = 0;
};
struct ISwim
{
    virtual void Swim() = 0;
};

class Cat : public Animal, public IAnimal
{
    string color;
public:
    Cat(string n, int k,string con, string c) : Animal(n, k,con)
    {
        color = c;
    }
    void Print()
    {
        cout << "\nCat: " << endl;
        cout << "Name: " << name << endl;
        cout << "Kg: " << kg << endl;
        cout << "Continent: " << continent << endl;
        cout << "Color: " << color << endl;
    }

    void Eat()
    {
        cout << "Cat eats\n";
    }
    void Move()
    {
        cout << "Cat moves\n";
    }
};

class Dog : public Animal, public IAnimal
{
    string color;
public:
   Dog(string n, int k, string con, string c) : Animal(n, k, con)
    {
        color = c;
    }
    void Print()
    {
        cout << "\nDog: " << endl;
        cout << "Name: " << name << endl;
        cout << "Kg: " << kg << endl;
        cout << "Continent: " << continent << endl;
        cout << "Color: " << color << endl;
    }

    void Eat()
    {
        cout << "Dog eats\n";
    }
    void Move()
    {
        cout << "Dog moves\n";
    }
};

class Penguin : public Animal, public IAnimal, public ISwim
{
    string color;
public:
    Penguin(string n, int k,string con, string c) : Animal(n, k,con)
    {
        color = c;
    }
    void Print()
    {
        cout << "\nPenguin" << endl;
        cout << "Name: " << name << endl;
        cout << "Kg: " << kg << endl;
        cout << "Continent: " << continent << endl;
        cout << "Color: " << color << endl;
    }

    void Eat()
    {
        cout << "Penguin eats\n";
    }
    void Move()
    {
        cout << "Penguin moves\n";
    }

    void Swim()
    {
        cout << "Penguin swim\n";
    }
};

class Dolphin : public Animal, public IAnimal, public ISwim
{
    string color;
public:
    Dolphin(string n, int k, string con, string c) : Animal(n, k, con)
    {
        color = c;
    }
    void Print()
    {
        cout << "\nDolphin" << endl;
        cout << "Name: " << name << endl;
        cout << "Kg: " << kg << endl;
        cout << "Continent: " << continent << endl;
        cout << "Color: " << color << endl;
    }

    void Eat()
    {
        cout << "Dolphin eats\n";
    }
    void Move()
    {
        cout << "Dolphin moves\n";
    }

    void Swim()
    {
        cout << "Dolphin swim\n";
    }
};



class Parrot : public Animal, public IAnimal, public IBird
{
public:
    Parrot(string n, int k,string con) :Animal(n, k,con) {}
    void Print()
    {
        cout << "\nPerrot: " << endl;
        cout << "Name: " << name << endl;
        cout << "Kg: " << kg << endl;
        cout << "Continent: " << continent << endl;
    }
    void Eat()
    {
        cout << "Parrot eats\n";
    }
    void Move()
    {
        cout << "Parrot moves\n";
    }
    void Fly()
    {
        cout << "Parrot flies\n";
    }
};


int main()
{
    ISwim* Swim = new Penguin("Bob", 3, "Antarctica", "white");
    IAnimal* Do = new Penguin("Bob", 3, "Antarctica", "white");
    Animal* Info = new Penguin("Bob", 3,"Antarctica", "white");
  
    Info->Print();
    Swim->Swim();
    Do->Eat();
    Do->Move();

    Swim = new Dolphin("Dolphin", 50, "America","white");
    Do = new Dolphin("Dolphin", 50, "America","white");
    Info = new Dolphin("Dolphin", 50,"America","white");

    Info->Print();
    Swim->Swim();
    Do->Eat();
    Do->Move();

    Do= new Dog("Dog", 10, "black", "Europe");
    Info = new Dog("Dog", 10, "black", "Europe");
    Info->Print();
    Do->Eat();
    Do->Move();

    Do = new Cat("Cat", 3, "white", "Europe");
    Info = new Cat("Cat", 3, "white", "Europe");
    Info->Print();
    Do->Eat();
    Do->Move();

    Do = new Parrot("Ara", 2, "Australia");
    Info = new Parrot("Ara", 2, "Australia");
    IBird* f = new Parrot("Ara", 3, "Australia");
    Info->Print();
    Do->Eat();
    Do->Move();
    f->Fly();
}


