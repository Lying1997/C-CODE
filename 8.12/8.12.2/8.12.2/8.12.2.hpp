#pragma once
#include<iostream>
using namespace std;

template<class T>
class myArray
{
public:
	myArray(int capacity)                                                    //有参构造
	{
		this->m_capacity = capacity;
		this->m_size = 0;
		this->paddress = new T[this->m_capacity];
	}

	myArray(const myArray& arr)                                         //拷贝构造
	{
		this->m_capacity = arr.m_capacity;
		this->m_size = arr.m_size;
		this->paddress = new T[arr.m_capacity];                          //深拷贝

		for (int i = 0; i < this->m_size; i++)                      //拷贝数据
		{
			this->paddress[i] = arr.paddress[i];
		}
	}

	myArray& operator=(const myArray& arr)                           //=重载函数
	{
		if (this->paddress!=NULL)
		{
			delete[] this->paddress;
			paddress = NULL;
			this->m_capacity = arr.m_capacity;
			this->m_size =arr.m_size ;
		}

		this->m_capacity = arr.m_capacity;
		this->m_size = arr.m_size;
		this->paddress = new T[arr.m_capacity];

		for (int i = 0; i < this->m_size; i++)                     
		{
			this->paddress[i] = arr.paddress[i];
		}

		return*this;
	}
	 
	void pushback(const T& val)                                    //尾插法
	{
		if (this->m_capacity==this->m_size)
		{
			return;
		}

		this->paddress[this->m_size] = val;
		this->m_size++;
	}

	void popback()                                                 //尾删法
	{
		if (this->m_size==0)
		{
			return;
		}
		this->m_size--;
	}

	T& operator[](int index)                                         //[]重载函数
	{
		return this->paddress[index];
	}

	int getcapacity()
	{
		return this->m_capacity;
	}

	int getsize()
	{
		return this->m_size;
	}

	~myArray()                                                             //析构
	{
		if (paddress!=NULL)
		{
			delete[] this->paddress;
			paddress = NULL;
		}
	}

private:
	T* paddress;
	int m_capacity;
	int m_size;
};