//
//  main.cpp
//  lab 01 project
//
//  Created by MARTIN on 26/02/2021.
//
#include<iostream>

using namespace std;


void menu();

void Draw_Rectangle(const int height, const int length, const char ch);

void Draw_Square(const int size,const char ch);

void Draw_A_Horizontal_line(const int length,const char ch );

void Draw_A_Vertical_line(const int length,const char ch);

int main()
{
  int choice = 0,length = 0,height=0, size=0;
  char symbol;
    
    
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
            cin>>length;
            
            cout<<"enter a chaaracter here:"<<endl;
            cin>>symbol;
            
            Draw_A_Vertical_line(length,symbol);
        }
        
        //for sqaure
        if(choice==3)
        {
            cout<<"enther the size:"<<endl;
            cin>>size;
            
            cout<<"enter the charater:"<<endl;
            cin>>symbol;
            
            Draw_Square(size,symbol);
            
        }
        
        //for rectangle
        if(choice==4)
        {
            cout<<"enter the length:"<<endl;
            cin>>length;
            
            cout<<"enter height"<<endl;
            cin>>height;
            
            cout<<"enter the character here:"<<endl;
            cin>>symbol;
            
            Draw_Rectangle(length,height,symbol);
        }
        
        if(choice<0)
        {
            cout<<"invalid input!"<<endl;
        }
    }
      
    cout<<"bye!"<<endl;

    
    
    return 0;

}


void Draw_Rectangle(const int height,const int length,const char ch)
{
    for(int length=1; length<=height; length++) // Something wrong here, cannot use length = 1. Maybe int j = 1??
        {
       if(length <= 1)
       for(int length=1; length<=length; length++) // Something wrong here, cannot use length = 1. Maybe int k = 1??
                {
                    cout<< ch;
                }
            else if(length<height)
            {
                cout<< endl;
                for(int length2=1; int height2=length; length2++) // Something wrong here, cannot use length2 = 1. Maybe int k=l = 1??
          {
          if(length2==1 || length2==length)
                        cout<< ch;
                    else
                        cout<< " ";
                } //end of for  variable width2
            }// end of else if
            else
            {
                cout<< endl;
    for(int length3=1; length3<=length; length3++)
       {
                    cout<<ch;
                }//end of for having variable width3
            }// end of else
        }// end of first for loop
}


void Draw_Square(const int size,const char ch)
{
    for(int a=1;a<=10;a++)
            {
                cout<<ch;
            }
                cout<<endl;
    for(int b=1;b<=5;b++)
        {
        for(int c=1;c<=1;c++)
            {
                    cout<<ch;
            }
            for(int d=1;d<=8;d++)
                  {
                    cout<<" ";
                  }
                    cout<<ch<<endl;
           }
    for(int e=1;e<=10;e++)
     {
     cout<<ch;
     }
}

void Draw_A_Vertical_line(const int length,const char ch)
{
    cout<<"vertical line"<<endl;
    
    
    for(int i=0; i < length; ++i)
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
