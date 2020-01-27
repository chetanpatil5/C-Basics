#include<iostream>
#include"Namespace.h"
#include"ResolvingNameClashes.h"
#include"NamespaceAreOpen.h"
#include"NamespaceAreOpen2.h"

using namespace std;
using namespace Allocators;
using namespace Data;
using namespace Collection;
using namespace PSL;

//namespace
//{
//
//}
//unnamed namespace accessed by scope resolution


int main()
{
	::Init();
	Allocators::Init();
	Data::Command();
	 Collection::Command();

	 foo();
	 bar();
	return 0;
}
//Candidate function doesnt check type