#include<bits/stdc++.h>
using namespace std;
//Map is an associative array
int main()
{
   map<string,int> marksMap;
   map<int,int> mp={{1,2},{3,4},{5,6},{7,8}};  //declare map 
   marksMap["Rohit"]=98;                        //initialize map
   marksMap["Rohan"]=12;
   marksMap["Vicky"]=32;
   marksMap["Akash"]=31;
   marksMap.insert({"Akshay",21});//insert item in map
   mp.insert({2,4});
   map<string,int> ::iterator it;
   map<int,int>::iterator ite;
   cout<<"Value at mp[1]"<<mp.at(1)<<endl;    //
   for(it=marksMap.begin();it!=marksMap.end();++it)
       {
        cout<<(*it).first<<" "<<(*it).second<<"\n";
       } 
    for(ite=mp.begin();ite!=mp.end();++ite)
       {
        cout<<ite->first<<" "<<(*ite).second<<"\n";  //cout<<(ite->first<<" "<<ite->second<<"\n";
       }    

    cout<<"Map size is:"<<marksMap.size()<<endl;
    cout<<"Map Max_Size is:"<<marksMap.max_size()<<endl;
    cout<<"iS Map empty(0/1) :"<<marksMap.empty()<<endl;
       return 0;
}