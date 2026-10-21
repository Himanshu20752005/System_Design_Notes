#include<bits/stdc++.h>
using namespace std;

class Engine{
    public :
      int horsepower;
      string fuelType;
      Engine(int power , string type){
        horsepower = power;
        fuelType = type;
      }

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
    Car(string m ){
       model = m;
    }

    void startCar( int horsepower,string fueltype ){
        Engine E1(horsepower,fueltype );
        cout<<model <<"is Starting ....."<< endl;
        E1.start();
        E1.display();
    }

    
};

int main(){
    Car car1("BMW M4");
    car1.startCar(500, "Jet Oil");
    
    cout<<"   "<<endl;
    Car car2("Toyota supra");
    car2.startCar(382,"Petrol");
}