#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
   //vector easy operation example
   vector<string> myStr;
   myStr.push_back("China");
   myStr.push_back("English");
   for(auto ite=myStr.begin(); ite!=myStr.end(); ite++)
   {
	cout << *ite << " ";
   }
   //add some greeting words
   cout << "hello world!" << endl;
   cout << "How old are you?" << endl;
   cout << " What is your name?" << endl;
   return 0;
}
