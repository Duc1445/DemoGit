#include<iostream>
using namespace std;
int main()
{
cout << "Welcome to Tran Phuc house\n"<<endl;
cout << endl;
for(int y=1;y<=10;y++)
cout << " ";
for (int z=1;z<=10;z++)
cout << "==";
cout << endl;
for(int i=1; i<=4;i++)
{
for(int j=10; j>=i*2; j--)
cout << " ";
for(int k=0; k<=i*4-2; k++)
if(k==0 || k==1)
cout << "/";
else if(k==i*4-2)
cout << "\\\\";
else
cout << "s";
for(int m=1; m<=17;m++)
if (m==17)
cout << "\\\\";
else
cout << "Y";
cout << endl;
}
for(int i=1; i<=12; i++)
{
for(int j=1; j<=15;j++)
if(j==1)
cout << " ";
else if(j==2 || j==15)
cout << "||";
else if(i>7 && (j>6 && j<11))
cout << " ";
else if((i==2 || i==3) && (j==7 || j==8 || j==9))
cout << " ";
else
cout << "F";
for(int k=1; k<=18; k++)
if(k==18)
cout << "||";
else if ((i==6 || i==8)&&((k>5 && k<9) || (k>9 && k<13)))
cout << " ";
else if((i==6 || i==8) && k==9)
cout << "|";
else if(i==7 &&(k>5 && k<13))
cout << "-";
else
cout << "H";
cout << endl;
}
int x=33;
for(int i=1; i<=3; i++)
{
for(int j=4;j>=i; j--)
cout << " ";
for (int k=1;k<=x;k++)
cout << "p";
x+=2;
cout << endl;
}
for(int i=1;i<=3;i++)
{
for(int j=1; j<=41; j++)
cout << "�";
cout << endl;
}
cout << "\n" << endl;
return 0;
}
//#include <iostream>
//#include <vector>
//
//// L?p Room m� t? m?t ph�ng trong ng�i nh�
//class Room {
//public:
//    Room(double area, const std::string& purpose) : area(area), purpose(purpose) {}
//
//    double getArea() const {
//        return area;
//    }
//
//    std::string getPurpose() const {
//        return purpose;
//    }
//
//private:
//    double area;  // Di?n t�ch c?a ph�ng
//    std::string purpose;  // M?c d�ch s? d?ng c?a ph�ng
//};
//
//// L?p House m� t? m?t ng�i nh� ch?a nhi?u ph�ng
//class House {
//public:
//    // Th�m m?t ph�ng m?i v�o ng�i nh�
//    void addRoom(const Room& room) {
//        rooms.push_back(room);
//    }
//
//    // Hi?n th? th�ng tin v? c�c ph�ng trong ng�i nh�
//    void displayHouseInfo() const {
//        std::cout << "House Information:\n";
//        for (const Room& room : rooms) {
//            std::cout << "  Room Purpose: " << room.getPurpose() << ", Area: " << room.getArea() << " sq. meters\n";
//        }
//    }
//
//private:
//    std::vector<Room> rooms;  // Danh s�ch c�c ph�ng trong ng�i nh�
//};
//
//int main() {
//    // T?o m?t ng�i nh� v� th�m c�c ph�ng
//    House myHouse;
//    myHouse.addRoom(Room(20.0, "Living Room"));
//    myHouse.addRoom(Room(15.0, "Bedroom"));
//    myHouse.addRoom(Room(10.0, "Kitchen"));
//
//    // Hi?n th? th�ng tin v? ng�i nh�
//    myHouse.displayHouseInfo();
//
//    return 0;
//}
