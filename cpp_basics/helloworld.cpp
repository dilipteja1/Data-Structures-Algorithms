//preprocessed_statement
#include<iostream>
#include<array>
#include<string>
using namespace std;


#include "log.h" 
#define ll long long int 

class clas
{

public:
	static int a, b;	
	 void print()
	{
		cout << a << " "<< b << endl;
	}

	clas()
	{
		a = 10;
		b = 203;
	}
	~clas()
	{
		cout << "Destroyed all that is been created" << endl;
	}
};
class Log
{
public:
	enum level 
	{
		levelerror = 0, levelwarn, levelinfo
	};
private:
	int m_loglevel;
public:
	void setlevel(int Level)
	{
		m_loglevel = Level;
	}
	void error(const char* message)
	{
		if (m_loglevel >= levelerror)
			cout << "[ERROR]: " << message << endl;
	}

	void warn(const char* message)
	{
		if (m_loglevel >= levelwarn)
			cout << "[WARN]: " << message << endl;
	}

	void info(const char* message)
	{
		if (m_loglevel >= levelinfo)
			cout << "[INFO]: " << message << endl;
	}
};

int clas::a;
int clas::b;

void printstring(const string& string1)
{
	
	cout << string1 << endl;
}

//const and mutable 
class entity
{
private :
	string m_str;
	mutable int debugcount = 0; //making this variable to eb able to be edited in the any const methods of the class 
public:
	entity()
		: m_str("This is an entity class") //member initializer list , increases performance rather than initializing inside the constructor class
	{
		cout << m_str << endl;
	}

	const string& getstr() const // when a method of class is given const , we cannot modify the private variables in this method.They are only read only.
	{
		return m_str;
	}
};
int main()
{
	//class intro
	Log log;
	log.setlevel(log.levelinfo);
	log.warn("Hello,this is a warning");
	log.error("this is an error");
	log.info("this is an info");	
	clas cls;
	cls.print();
	clas::a = 33;
	clas::b = 40;
	cls.print();
	cls.~clas();
	
	//arrays in heap 
	int* heap_arr = new int[5]; // created the array in heap memory , its life time lasts until we delete and free the memory explicitly 
	static const int size = 5;
	int arr[size] = { 3 };
	cout << arr[2] << endl;

	
	array<int, 20> a;
	cout << a.size() << endl;

	//strings
	
	char name2[7] = { 'd','i','l','i','p','t',0};
	cout << name2 << endl;
	string name = "dilip";
	bool contains  = name.find("ili") != string::npos;
	cout << name << " "<< contains << endl;
	printstring(name);

	//const 
	int con = 3,con2=45; 
	con = 4;
	const int* conptr = &con;
	conptr = &con2;
	cout << con << conptr << " "<< * conptr << endl;

	//memberinitializer list 
	entity e;

	//ternary operators 
	static int s_speed = 10;
	string rank = s_speed > 5 ? "Master" : "Beginner"; // checks if s_speed>5 ,if yes assignes master ,else assigns beginner .Exactly same this a 4 line if else does and it doesnt even create an intermediate string while intializing 
	cout << rank << endl;
		//nested ternery operators 
	string level = s_speed > 5 ? s_speed > 10 ? "Advanced" : "intermediate" : "beginner";//checks for both the conditions and assign the value accordigly 
	cout << level << endl;

	

	cin.get();
	return 0;
}