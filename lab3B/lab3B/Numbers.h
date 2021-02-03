#pragma once
#include <iostream>
#include<iomanip>




using namespace std;
class Numbers
{
public:

	Numbers(int x);
	int getX();
private:
	int x;
};


class Numbers7 : public Numbers
{
public:
	Numbers7(int x);
	
	int getA();    //a = getX()%7

private:
	int a = Numbers::getX()%7;      //a
	
};


class Numbers5 : public Numbers7
{
public:
	Numbers5(int x);
	
	//    {   if (a==2 && getB() ==3) cout<<x;
private:
	int b = Numbers7::getX()%5; //b =getX()%5
};

