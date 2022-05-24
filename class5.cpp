/*Write a program to print the area and perimeter of a triangle having sides of 3, 4 and 5 units by
 creating a class named 'Triangle' with a function to print the area and perimeter.*/
 #include <iostream>
 using namespace std;
 class triangle
 {
     public:
     void area(int a, int b, int c);
     void perimeter(int a ,int b,int c);
     };

        void triangle::area(int a, int b, int c)
        {
            float s1= ((b+ c)/2);
            cout<<"area of triangle is:"<< s1<< endl;

        }
        void triangle::perimeter(int a, int b, int c)
        {
            int s2= (a+b+c);
            cout << "perimeter of triangle is:"<< s2<< endl;

        }

 
 int main(){
     triangle tr1;
     int side1 =5 , side2 = 4, side3=5;
     tr1.area(side1,side2,side3);
	 tr1.perimeter(side1,side2,side3);
	return 0;

 }