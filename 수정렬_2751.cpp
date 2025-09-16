#include <iostream>
#include <set>

int main()
{
   using std::set;
   using std::cin;
   using std::cout;
   std::cin.tie(nullptr);
   std::ios_base::sync_with_stdio(false);

   int input = 0;
   
   set<int> iSet ={};

   cin>>input;

   for (int i = 0; i < input; ++i)
   {
        int num = 0;
        cin >> num;
        iSet.insert(num);
   }
   
   set<int>::iterator iter = iSet.begin();
   for (; iter != iSet.end(); ++iter)
   {
       cout<< *iter <<"\n";
   }

}