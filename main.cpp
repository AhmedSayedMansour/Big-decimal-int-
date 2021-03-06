/// Problem 13 on page 891 (Problem Solving)
/// Course:  CS213 - Programming II  - 2018
/// Title:   Assignment 2 - Indivindual Task
/// Program: CS213-2018-A2
/// Author:  Ahmed Sayed Mansour 20170022
/// Date:    10 August 2018
/// last edit : 23/10/2018
/// Version: 1.0


#include <bits/stdc++.h>

using namespace std;

//A child class Pet (Base class) that includes the name an d details of the animal
//Including functions to set and get some information and pure virtual function to print inf
class Pet
{
private:
    string name;
    bool neuterSpayed=false;
    bool talks=false;
public:
    void setname(string a){ name =a ;}
    void setneeu(bool a){neuterSpayed=a;}
    void settalks(bool a){talks = a;}
    string getname(){return name;}
    bool getneu(){return neuterSpayed;}
    bool gettalks(){return talks;}
    virtual void printDescription()=0;
};

//An inherited class Dog from Per that includes inf of Dog
class Dog :public Pet
{
public:
    void printDescription(){
        cout << "Dog named " << getname() << endl;
        cout << "Neuter/Spayed: " <<getneu();
    }

};

//An inherited class Cat from Per that includes inf of Cat
class Cat :public Pet
{
public:
    void printDescription(){
        cout << "Cat named " << getname() << endl;
        cout << "Neuter/Spayed: " <<getneu();
    }

};

//An inherited class Bird from Per that includes inf of Bird
class Bird :public Pet
{
public:
    void printDescription(){
        cout << "Bird named " << getname() << endl;
        cout << "Talks: " << gettalks() << endl;
    }
};

int main()
{
    // A vector to store classes
    vector <Pet*> vec;

    vec.push_back(new Dog);
    vec[0]->setname("Boby");
    vec[0]->settalks(1);

    vec.push_back(new Cat);
    vec[1]->setname("Caty");
    vec[1]->settalks(0);

    vec.push_back(new Bird);
    vec[2]->setname("Birdy");
    vec[2]->settalks(1);

    //A for loop to print all inf of animals
    for (int i=0;i<3;++i){
        cout<<endl;
        vec[i]->printDescription();
        cout<<endl;
    }
    return 0;
}
