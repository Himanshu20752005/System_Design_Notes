#include<bits/stdc++.h>
using namespace std;

class Engine{
    public :
      int horsepower;
      string fuelType;
      Engine(int hp , string type)
      : horsepower(hp) , fuelType(type){};

      void start(){
        cout<<"Engine started !"<<endl;
      }

      void display(){
        cout<<"HorsePower :"<<horsepower <<endl;
        cout<<"Fule Type :"<<fuelType << endl;
      }

};

class Car{
    public:
    string model;
    Engine engine;
    Car(string m ,int hp , string fuel)
    : model(m) , engine(hp , fuel){};

    void startCar(){
        // Engine E1(horsepower,fueltype ); this creats a temperory engine 
        //  only needed when we want to check some rules on a temperory engine
        cout<<model <<"is Starting ....."<< endl;
        engine.start();
        engine.display();
    }

    
};

int main(){
    Car car1("BMW M4" , 500, "Jet Oil");
    car1.startCar();
    cout<<"   "<<endl;
    Car car2("Toyota supra",382,"Petrol");
    car2.startCar();
}