


/** \file lab 01 project.cpp
 *  \brief     A little program to draw various types of shapes
 *  \details   The program illustrates a dynamic array implementation and implementation of some functions
 *  \author    Martin Ahoto
 *  \version   0.1
 *  \date      2021
 *  \pre       First initialize the system.
 *  \bug       No bugs so far
 *  \copyright University of Nicosia.
 */

#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;


//function prototypes
void menu();

void drawShapes(const int shapeTy[], const int shapeLen[], const char shapeCh[], const int size);
void initializeArrays(int shapeTY[],int shapeLen[],char shapech[],const int size);

void Draw_Rectangle(const int height, const int length, const char ch);

void Draw_Square(const int size,const char ch);

void Draw_A_Horizontal_line(const int length,const char ch );

void Draw_A_Vertical_line(const int length,const char ch);


//driver code
int main()
{
    //declaration of variables
    
    int choice = 0,length = 0,height=0, size=0;
    char symbol;
    
    const int MAX_ARRAY=10;
    
    int shapeTY[MAX_ARRAY]; int shapeLen[MAX_ARRAY];
    char shapeCh[MAX_ARRAY];
    
    srand(time_t(0)); //generates a seed number to generate random numbers
    
    while(choice!=6)//stops the loop when 6 is been inputed
    {
        menu();
        cout<<"enter your choice:"<<endl;//prompt the user to enter the choice shape he or she wants
        cin>>choice;
        
        //set codes for for horizontal line
        if(choice==1)//checks if the inputed number is one and prints out its corresponding shape
        {
            cout<<"HORIZONTAL LINE"<<endl;
            
            cout<<"enter length:"<<endl;//prompts the user to enter the length of the line
            cin>>length;
            
            cout<<"enter a character here:"<<endl;//prompts user to enter the character
            cin>>symbol;
            
            Draw_A_Horizontal_line(length,symbol);//calls the function of the horizontal to be implemented
            
            
            
        }
        
        // set codes for vertical line()
        if(choice==2) //checks if the inputed number is one and prints out corresponding shape
        {
            cout<<"VERTICAL LINE"<<endl;//outputs to the user the type of shape chosen
            
            cout<<"enter the height:"<<endl; //prompts user to enter the height of the line
            cin>>length;
            
            cout<<"enter a chaaracter here:"<<endl;//prompts user to enter the character of the line
            cin>>symbol;
            
            Draw_A_Vertical_line(length,symbol);//calls function to implement the shape of the vertical line
        }
        
        // set of for sqaure
        if(choice==3)//checks the number inputed and executes the set of commands corresponding to the number.
        {
            cout<<"SQUARE"<<endl;//outputs to the user the name of the shape he or she chose
            
            cout<<"enther the size:"<<endl;//prompts user to enter the size of the shape
            cin>>size;
            
            cout<<"enter the charater:"<<endl;//prompts user to enter the character he or she wants the shape to take.
            cin>>symbol;
            
            Draw_Square(size,symbol);//calls function of the square to be implemented
            
        }
        
        //set of codes for rectangle
        if(choice==4)//checks the number inputed and executes the set of commands corresponding to the number.
        {
            cout<<"RECTANGLE"<<endl;//outputs to the user the name of the shape
            
            //prompt user to enter the length of the shape
            cout<<"enter the length:"<<endl;
            cin>>length;
            
            //prompt user to enter the height of the shape
            cout<<"enter height"<<endl;
            cin>>height;
            
            //prompt user to enter the character of the shape
            cout<<"enter the character here:"<<endl;
            cin>>symbol;
            
            //calls the function of the rectangle to be implemented
            Draw_Rectangle(length,height,symbol);
        }
        
        if(choice==5)//draws many random shapes from the array
        {
            //calls the function of the initialization and the drawing of shapes from the array to be implemented
            initializeArrays(shapeTY,shapeLen,shapeCh,MAX_ARRAY);
            drawShapes(shapeTY,shapeLen,shapeCh,MAX_ARRAY);
        }
        
        //signals the user of an invalid input
        if(choice < '0' && choice > '6')
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
            Draw_Square(shapeLen[i],shapeCh[i]);
        }
        
        else if(4==shapeTy[i])//fro the rectangle   
        {
            Draw_Rectangle(shapeLen[i]*2,shapeLen[i]*2,shapeCh[i]);
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

//function to draw the shape of the rectangle
void Draw_Rectangle(const int height,const int length,const char ch)
{
    cout<<"I am Draw_Rectangle"<<endl;
    
    //implementation of a for loop
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
    cout<<"I am Draw_Square"<<endl;
    
    //introducing a for loop
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

// function to draw the vertical line
void Draw_A_Vertical_line(const int length,const char ch)
{
    cout<<"I AM Draw_A_Vertical_line"<<endl;
    
    //introducing a for loop
    for(int i=0; i < length; ++i)
    {
        cout<<ch<<endl;//outputs the character to the user
    }
    cout<<endl;
}

//function to draw the horizontal line
void Draw_A_Horizontal_line(const int length,const char ch)
{
    cout<<"I am drawHorizontalLine"<<endl;
    
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
