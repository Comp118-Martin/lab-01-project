///** \file




//  main.cpp
//  lab 01 project
//
//  Created by MARTIN on 26/02/2021.
//

#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;


void menu();

void drawShapes(const int shapeTy[], const int shapeLen[], const char shapeCh[], const int size);
void initializeArrays(int shapeTY[],int shapeLen[],char shapech[],const int size);

void Draw_Rectangle(const int height, const int length, const char ch);

void Draw_Square(const int size,const char ch);

void Draw_A_Horizontal_line(const int length,const char ch );

void Draw_A_Vertical_line(const int length,const char ch);

int main()
{
    int choice = 0,length = 0,height=0, size=0;
    char symbol;
    
    const int MAX_ARRAY=10;
    
    int shapeTY[MAX_ARRAY]; int shapeLen[MAX_ARRAY];
    char shapeCh[MAX_ARRAY];
    
    srand(time_t(0));
    
    while(choice!=6)
    {
        menu();
        cout<<"enter your choice:"<<endl;
        cin>>choice;
        
        //for horizontal line
        if(choice==1)
        {
            cout<<"HORIZONTAL LINE"<<endl;
            
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
        
        if(choice==5)//draws many random shapes from the array
        {
            initializeArrays(shapeTY,shapeLen,shapeCh,MAX_ARRAY);
            drawShapes(shapeTY,shapeLen,shapeCh,MAX_ARRAY);
        }
        
        if(choice<0)
        {
            cout<<"invalid input!"<<endl;
        }
        
        cout<<"bye!"<<endl;
    }
    
    
    return 0;

}


//drwas the shapes in the three arrays

void drawShapes(const int shapeTy[], const int shapeLen[], const char shapeCh[], const int size)
{
    for(int i=0;i<size;++i)
    {
        if(1==shapeTy[i])//for horizontal line
        {
            Draw_A_Horizontal_line(shapeLen[i],shapeCh[i]);
        }
        
        else if(2==shapeTy[i])//for vertical line
        {
            Draw_A_Vertical_line(shapeLen[i],shapeCh[i]);
        }
        
        else if(3==shapeTy[i])//for the square
        {
           // Draw_Square
        }
        
        else if(4==shapeTy[i])//fro the rectangle
        {
            Draw_Rectangle(shapeLen[i],shapeLen[i]*2,shapeCh[i]);
        }
    }
}

// Loops and prints all the shapes that are specified in the arrays
void initializeArrays(int shapeTY[],int shapeLen[],char shapeCh[],const int size)
{
    for(int i=0;i<size;i++)
    {
        shapeTY[i]=rand()%4+1;// Fills array shapeTy with values 1 to 4,to indicate which shape type to print
        
        shapeLen[i]=rand()%20+1;// Fills array shapeLen with values 1 to 20, the length of the shape
        
        shapeCh[i]=rand()%93+33;// Fills array shapeCh with values from the printable ASCII table, i.e. 33 - 126
    }
}

//draws the shape of the rectangle
void Draw_Rectangle(const int height,const int length,const char ch)
{
    
    for(int width=1; width<=height; width++)
        {
       if(width <= 1)
       for(int width=1; width<=height; width++)
                {
                    cout<< ch;
                }
            else if(width<height)
            {
                cout<< endl;
    for(int width2=1; width2<=height; width2++)
          {
          if(width2==1 || width2==height)
                        cout<< ch;
                    else
                        cout<< " ";
                } //end of for  variable width2
            }// end of else if
            else
            {
                cout<< endl;
    for(int width3=1; width3<=height; width3++)
       {
                    cout<<ch;
                }//end of for having variable width3
            }// end of else
        }// end of first for loop
    }// end of main function
    


//function to draw the square
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

//draws the vertical line
void Draw_A_Vertical_line(const int length,const char ch)
{
    cout<<"vertical line"<<endl;
    
    
    for(int i=0; i < length; ++i)
    {
        cout<<ch<<endl;
    }
    cout<<endl;
}

//draws te horizontal line
void Draw_A_Horizontal_line(const int length,const char ch)
{
    cout<<"horizontal line"<<endl;
    
    for(int i=0; i<length; ++i)
    {
        
        cout<<ch;
    }
    cout<<endl;
    
}

//the menu function
void menu()
{
    cout<<"1) draw a horizontal line:"<<endl;
    
    cout<<"2) draw a vertical line:"<<endl;
    
    cout<<"3) draw a square:"<<endl;
    
    cout<<"4) draw a rectangle"<<endl;
    
    cout<<"5) draw many shapes"<<endl;
    
    cout<<"6) quit"<<endl;
}
