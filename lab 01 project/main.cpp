//
//  main.cpp
//  lab 01 project
//
//  Created by MARTIN on 26/02/2021.
//

#include<iostream>

using namespace std;




void menu()
{
    cout<<"1) draw a horizontal line:"<<endl;
    
    cout<<"2) draw a vertical line:"<<endl;
    
    cout<<"3) draw a square:"<<endl;
    
    cout<<"4) draw a rectangle"<<endl;
    
    cout<<"5) quit"<<endl;
}


int main()
{
    int choice,length,symbol;
    
    
    while(choice!=5)
    {
        cout<<"bye!"<<endl;
        
        menu();
        cin>>choice;
        
        
        
    }
    
    
    return 0;

}
