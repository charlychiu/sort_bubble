//
//  main.cpp
//  sort_bubble
//
//  Created by charlychiu on 2015/5/10.
//  Copyright (c) 2015 charlychiu. All rights reserved.
//

#include <iostream>
using namespace std;
int counter=0;
int main(int argc, const char * argv[]) {
    int num=0;
    int array1[999]={0};
    cout<<"type how many num of number:"<<endl;
    cin>>num;
    cout<<"key the each number in"<<endl;
    for(int i=0;i<num;++i)
    {
        cin>>array1[i];
    }
    cout<<"sort_bubble before:";
    for(int i=0;i<num;++i)
    {
        cout<<array1[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<num-1;i++)
    {
        for(int j=i+1;j<num;j++)
        {
            if (array1[i]<array1[j])
            {
                swap(array1[i],array1[j]);
                for(int i=0;i<num;++i)
                {
                    cout<<array1[i]<<" ";
                }
                cout<<endl;
                counter++;
            }
            
        }
    }
    cout<<"sort_bubble after:";
    for(int i=0;i<num;++i)
    {
        cout<<array1[i]<<" ";
    }
    cout<<"times:"<<counter;
    

    
    return 0;
}
