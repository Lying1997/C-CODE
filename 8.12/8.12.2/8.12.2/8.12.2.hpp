#pragma once
#include<iostream>
using namespace std;

template<class T>
class myArray
{
public:
	myArray(int capacity)                                                    //�вι���
	{
		this->m_capacity = capacity;
		this->m_size = 0;
		this->paddress = new T[this->m_capacity];
	}

	myArray(const myArray& arr)                                         //��������
	{
		this->m_capacity = arr.m_capacity;
		this->m_size = arr.m_size;
		this->paddress = new T[arr.m_capacity];                          //���

		for (int i = 0; i < this->m_size; i++)                      //��������
		{
			this->paddress[i] = arr.paddress[i];
		}
	}

	myArray& operator=(const myArray& arr)                           //=���غ���
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
	 
	void pushback(const T& val)                                    //β�巨
	{
		if (this->m_capacity==this->m_size)
		{
			return;
		}

		this->paddress[this->m_size] = val;
		this->m_size++;
	}

	void popback()                                                 //βɾ��
	{
		if (this->m_size==0)
		{
			return;
		}
		this->m_size--;
	}

	T& operator[](int index)                                         //[]���غ���
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

	~myArray()                                                             //����
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