#include <bits/stdc++.h>

using namespace std;

class Car{
    public:
      string Color;
      string Brand;
      int speed = 10;

      void acceleration(int n){
        speed += n;
      }

      void brake(int n){
        speed -= n;
      }
};

class test{
    public:
    
    test(){
        Car car1;
    car1.Color = "Red";
    car1.Brand = "Tesla";
    car1.acceleration(10);
    cout<<car1.speed;
    }
};

int main(){
    test t;
    return 0;
}
