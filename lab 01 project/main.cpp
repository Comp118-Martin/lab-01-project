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
    int choice = 0,length,symbol;
    
    
    while(choice!=5)
    {
        
        
        menu();
        cout<<"enter your choice:"<<endl;
        cin>>choice;
        
        //for horizontal line
        if(choice==1)
        {
            cout<<"enter length:"<<endl;
            cin>>length;
            
            cout<<"enter a character here:"<<endl;
            cin>>symbol;
            
        }
        
        //for vertical line()
        if(choice==2)
        {
            cout<<"enter the length:"<<endl;
            cin>>length;
            
            cout<<"enter a chaaracter here:"<<endl;
            cin>>symbol;
        }
        
        if(choice==3)
        {
            cout<<"enther the length:"<<endl;
            cin>>length;
            
            cout<<"enter the charater:"<<endl;
            cin>>symbol;
        }
        
        if(choice==4)
        {
            cout<<"enter the length:"<<endl;
            cin>>length;
            
            cout<<"enter the character here:"<<endl;
            cin>>symbol;
        }
        
        if(choice<0)
        {
            cout<<"invalid input!"<<endl;
        }
        
        cout<<"bye!"<<endl;
        
      }
    
    
    return 0;

}
