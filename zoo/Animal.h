#pragma once
#include <iostream>
#include <string>
using std::string;
class Animal abstract
{
public:
	Animal() = default;
	Animal(const string& name , size_t age) :name(name), age(age) {};
	string getName()const
	{
		return name;
	}
	size_t getAge()const
	{
		return age;
	}
	void setName(const string& name)
	{
		this->name = name;
	}
	void setAge(size_t age)
	{
		this->age = age;
	}
	virtual void sound() const abstract;
	virtual void type() const abstract;
	virtual void show() const 
	{
		type();
		std::cout << name << std::endl;
		std::cout << age << std::endl;
		sound();
	};
private:
	string name;
	size_t age;
};
class Dog : public Animal
{
public:
	Dog(const string& name = "NONAME", size_t age = 0, const string str_sound = "")
		:Animal(name, age), str_sound(str_sound){};
	void sound() const override 
	{
		std::cout << str_sound<<std::endl;
	};
	 void type() const override
	 { 
		 std::cout << "Dog"<<std::endl;
	 };
private:
	string str_sound;
};
class Cat : public Animal
{
public:
	Cat(const string& name = "NONAME", size_t age = 0, const string str_sound = "")
		:Animal(name, age), str_sound(str_sound) {};
	void sound() const override
	{
		std::cout << str_sound << std::endl;
	};
	void type() const override
	{
		std::cout << "Cat" << std::endl;
	};
private:
	string str_sound;
};
class Owl : public Animal
{
public:
	Owl(const string& name = "NONAME", size_t age = 0, const string str_sound = "")
		:Animal(name, age), str_sound(str_sound) {};
	void sound() const override
	{
		std::cout << str_sound << std::endl;
	};
	void type() const override
	{
		std::cout << "Owl" << std::endl;
	};
private:
	string str_sound;
};

