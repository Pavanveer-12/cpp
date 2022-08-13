#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void leftrotate(string &s, int d)
{
    reverse(s.begin(), s.begin()+d);
    reverse(s.begin()+d, s.end());
    reverse(s.begin(), s.end());
}
 
// In-place rotates s towards right by d
void rotate(string &s, int d)
{
   leftrotate(s, s.length()-d);
}
int main() {
    // Write C++ code here
    string str = "ca ca ca";
    int k = 2;
   int n = str.size();
   unordered_map<string,int>arr;
   int i= 0;
   string temp = "";
   while(i < n)
   {
       if(str[i] == ' ')
       {
           arr[temp]++;
           temp = "";
       }
       else{
           temp = temp + str[i];
       }
   }
   int count = 0;
   string temp1 = "";
   while(i < n)
   {
       if(str[i] == ' ')
       {
           rotate(temp1,k);
           if(arr.find(temp1) != arr.end())
           {
               count++;
           }
           temp1 = "";
       }
       else{
           temp1 = temp1 + str[i];
       }
   } 
   
   cout<< count;
   return 0;


}
