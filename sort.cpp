/*
    sort.cpp

    Sorting functions
*/

#include "sort.hpp"
//sort int of vector
namespace
{

    //swap two elements
    void swap(int& n1, int& n2)
    {
          int t = n1;
        n1 = n2;
        n2 = t;   
    }
    //order two elements
    void order(int& n1, int& n2)
    {
        if(n1>n2)
        {
            //swap two elements
            swap(n1,n2);
        }
    }

    void sort(std::vector<int>& v)
    {       // vector of size 0 and 1 are already sorted
        if(v.size()<2)
            return;

        //order two elements
        if(v[0]>v[1])
        {   
            // swap the two elements
            order(v[0],v[1]);
        }
        
    }
}
