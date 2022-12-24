#include <iostream>
using namespace std;
main(){
string name;
float matric;
float intermediate;
float ecat;
float aggregate;
cout <<"Your name is :";
cin >>name;
cout <<"Your matric marks are :";
cin >>matric;
cout <<"Your intermediate marks are :";
cin >>intermediate;
cout <<"Your ecat marks are :";
cin >>ecat;
matric=matric*10/1100;
intermediate=intermediate*40/1100;
ecat=ecat*50/400;
aggregate=matric+intermediate+ecat;
cout <<"Your aggregate is :";
cout <<aggregate;
}