#include<bits/stdc++.h>

using namespace std;

class Vehicle{
  protected:
    string brand;
    int speed;

  public :
    Vehicle(string brand , int speed) 
       : brand(brand) , speed(speed){}
    
    void displayVehicle(){
        cout << "Brand : " << brand << endl;
        cout << "Speed : " << speed << endl;
    }

};

class Car : public Vehicle{
    private:
      int doors;
    
    public :
      Car(string brand , int speed , int door)
       : Vehicle(brand , speed) , doors(doors){};
      
      void displayCar(){
        displayVehicle();
        cout << "Doors :" << doors << endl;
      }
};

int main(){
    Car car1("Toyota" , 180, 4);
    car1.displayCar();
}