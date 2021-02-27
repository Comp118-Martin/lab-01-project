//
//  main.cpp
//  lab 01 project
//
//  Created by MARTIN on 26/02/2021.
//

#include<iostream>

using namespace std;


void menu();

void Draw_A_Horizontal_line(const int length,const char ch );

void Draw_A_Vertical_line(const int height,const char ch);

int main()
{
    int choice = 0,length = 0,height=0,symbol;
    
    
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
            
            Draw_A_Horizontal_line(length,symbol);
            
        }
        
        //for vertical line()
        if(choice==2)
        {
            cout<<"enter the height:"<<endl;
            cin>>height;
            
            cout<<"enter a chaaracter here:"<<endl;
            cin>>symbol;
            
            Draw_A_Vertical_line(height,symbol);
        }
        
        if(choice==3)
        {
            cout<<"enther the height:"<<endl;
            cin>>height;
            
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


void Draw_A_vertical_line(const int height,const char ch)
{
    cout<<"vertical line"<<endl;
    
    
    for(int i=0; i < height; ++i)
    {
        cout<<ch<<endl;
    }
    cout<<"\n";
}

void Draw_A_Horizontal_line(const int length,const char ch)
{
    
    for(int i=0; i<length; ++i)
    {
        cout<<ch;
    }
    cout<<"\n";
}

void menu()
{
    cout<<"1) draw a horizontal line:"<<endl;
    
    cout<<"2) draw a vertical line:"<<endl;
    
    cout<<"3) draw a square:"<<endl;
    
    cout<<"4) draw a rectangle"<<endl;
    
    cout<<"5) quit"<<endl;
}
