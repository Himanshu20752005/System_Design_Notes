#include <bits/stdc++.h>
using namespace std;

class Car{
    public:
       string color;
       string brand;
       string model;
       int speed = 0;

       void acceleration(int n){
         speed += n;
       }

       void brake (int n){
          speed -= n;
       }


};

int main(){
    Car car1 ;
    car1.color = "Blue";
    car1.brand = "Lamborgini";
    car1.model = "M1";
    car1.speed = 100;

    car1.acceleration(5);
    cout<<"Current speed :"<< car1.speed ;
    return 0;

}