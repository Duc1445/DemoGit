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
cout << "£";
cout << endl;
}
cout << "\n" << endl;
return 0;
}
//#include <iostream>
//#include <vector>
//
//// L?p Room mô t? m?t phòng trong ngôi nhà
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
//    double area;  // Di?n tích c?a phòng
//    std::string purpose;  // M?c dích s? d?ng c?a phòng
//};
//
//// L?p House mô t? m?t ngôi nhà ch?a nhi?u phòng
//class House {
//public:
//    // Thêm m?t phòng m?i vào ngôi nhà
//    void addRoom(const Room& room) {
//        rooms.push_back(room);
//    }
//
//    // Hi?n th? thông tin v? các phòng trong ngôi nhà
//    void displayHouseInfo() const {
//        std::cout << "House Information:\n";
//        for (const Room& room : rooms) {
//            std::cout << "  Room Purpose: " << room.getPurpose() << ", Area: " << room.getArea() << " sq. meters\n";
//        }
//    }
//
//private:
//    std::vector<Room> rooms;  // Danh sách các phòng trong ngôi nhà
//};
//
//int main() {
//    // T?o m?t ngôi nhà và thêm các phòng
//    House myHouse;
//    myHouse.addRoom(Room(20.0, "Living Room"));
//    myHouse.addRoom(Room(15.0, "Bedroom"));
//    myHouse.addRoom(Room(10.0, "Kitchen"));
//
//    // Hi?n th? thông tin v? ngôi nhà
//    myHouse.displayHouseInfo();
//
//    return 0;
//}
