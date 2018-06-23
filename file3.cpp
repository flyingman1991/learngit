#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
   vector<string> myStr;
   myStr.push_back("China");
   myStr.push_back("English");
   for(auto ite=myStr.begin(); ite!=myStr.end(); ite++)
   {
	cout << *ite << " ";
   }
   cout << endl << "hello world!" << endl;
   return 0;
}
