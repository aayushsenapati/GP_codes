// Function is friendly for two boxes

#include<iostream>
using namespace std;
class B; //forward declaration.
class A
{
    int x;
    public:
         void setdata (int i)
           {
              x=i;
           }
    friend void max (A, B); //friend function.
} ;
class B
{
     int y;
     public:
          void setdata (int i)
            {
               y=i;
            }
     friend void max (A, B);
};
void max (A a, B b)
{
   if (a.x >= b.y)
         std:: cout<< a.x << std::endl;
   else
         std::cout<< b.y << std::endl;
}

int main ()
{
   	A a;
   	B b;
    	a. setdata (10);
    	b. setdata (20);
    	max (a, b);
    	return 0;
}