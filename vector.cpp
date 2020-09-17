#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
   // vector<int> *vp = new vector<int>();     dynamic declaration of vector
    vector<int> v;                            //static declaration of vector

    vector<int> v2(10,-2);                    // To print the same value of vector 10 times
    vector<int> v3(100);
    for(int i=0;i<v2.size();i++){
        cout<<v2[i]<<endl;
    }

    sort(v2.begin(),v2.end());                //sorting of vector

    for(int i=0;i<100;i++){
            cout<<"Capacity "<<v.capacity()<<endl;
            cout<<"Size "<<v.size()<<endl;

        v.push_back(i+1);
    }
    
    
    /*following code is used to print the vector elements using push_back function*/
   /* for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }*/

    /*v.push_back(10);
    v.push_back(20);
    v.push_back(30);

    v[1] = 100;

    /// never use [] to insert elements
    ///v[4] = 1002;
    ///v[5] = 1234;

    v.push_back(23);
    v.push_back(234);

    v.pop_back();
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }

    /* cout<<v.at(4)<<endl;
     cout<<v.at(6)<<endl;
     */

   /* cout<<v[0]<<endl;
    cout<<v[1]<<endl;
    cout<<v[2]<<endl;
    cout<<v[3]<<endl;
    cout<<v[4]<<endl;
    cout<<v[5]<<endl;
    cout<<v[6]<<endl;*/



   return 0;
}
