#pragma once
#include<iostream>
using namespace std;
void Init() {

	cout << "\nInside global Init() function" << endl;
}
//in java package in c++ namespace
namespace Allocators
{
	class CRTHeap {};
	class ProcessHeap {};
	class Stack {};

	void Init() {
		cout << "\nInside Allocators Init() function" << endl;
	}

}