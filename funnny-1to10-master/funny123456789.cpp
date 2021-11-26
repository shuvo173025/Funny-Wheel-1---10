#include<bits/stdc++.h>
#include<windows.h>
#include<conio.h>


void gotoXY(int x, int y)
{
    HANDLE hStdout;
    COORD destCoord;
    hStdout = GetStdHandle(STD_OUTPUT_HANDLE);
    destCoord.X = x;
    destCoord.Y = y;
    SetConsoleCursorPosition(hStdout, destCoord);
}
using namespace std;
void line(int x1,int y1,int x2,int y2,char ch)
{
    double m=(y2-y1)/(double)(x2-x1);
    double c=y2-m*x2;
    for(int i =x1; i<=x2; i++)
    {
        int y = m*i + c;
        gotoXY(i,y);
        cout<<ch;
    }
}
int main()
{
    int t;
    int i,y,j,m,n,s,o,u,p;
   // while(1)
    {
        //cin>>t;
        system("cls");
       // if(t==0)
        {
            for( i=0; i<30; i++)
            {
                y=0;
                for(int j=0; j<2000000; j++);
                line(1+i,y,10+i,y,' ');
                line(i+2,y,10+i+1,y,'*');
            }
            for(y=1; y<11; y++)
            {
                for( i=0; i<30; i++)
                {
                    for(int j=0; j<2000000; j++);
                    line(1+i,y,10+i,y,' ');
                    line(i+2,y,10+i+1,y,'*');
                    line(1+i,y,10+i,y,' ');
                }
            }
            for(y=1; y<11; y++)
            {
                for( i=0; i<21; i++)
                {
                    for(int j=0; j<2000000; j++);
                    line(1+i,y,10+i,y,' ');
                    line(i+2,y,10+i+1,y,'*');
                    line(1+i,y,10+i,y,' ');
                }
            }
            for( i=0; i<30; i++)
            {
                y=11;
                for(int j=0; j<2000000; j++);
                line(1+i,y,10+i,y,' ');
                line(i+2,y,10+i+1,y,'*');
            }
            cout<<endl<<endl<<endl;
            system("cls");
        }







       // if(t==1)
        {
            for(y=0; y<10; y++)
            {
                for( i=0; i<30; i++)
                {
                    for(int j=0; j<2000000; j++);
                    line(1+i,y,10+i,y,' ');
                    line(i+2,y,10+i+1,y,'*');
                    line(1+i,y,10+i,y,' ');
                }
            }
            m=30;
            for(y=1; y<3; y++)
            {
                m--;
                for( i=0; i<m; i++)
                {
                    for(int j=0; j<2000000; j++);
                    line(1+i,y,10+i,y,' ');
                    line(i+2,y,10+i+1,y,'*');
                    line(1+i,y,10+i,y,' ');
                }
            }
            m=34;
            y=10;
            for(int u=0; u<7; u++)
            {
                m--;
                for( i=0; i<m; i++)
                {
                    for(int j=0; j<2000000; j++);
                    line(1+i,y,10+i,y,' ');
                    line(i+2,y,10+i+1,y,'*');
                    line(1+i,y,10+i,y,' ');
                }
            }
            cout<<endl<<endl<<endl;
            system("cls");
        }








      //  if(t==2)
        {
            for( i=0; i<30; i++)
            {
                y=0;
                for(int j=0; j<2000000; j++);
                line(1+i,y,10+i,y,' ');
                line(i+2,y,10+i+1,y,'*');
            }

            for( y=1; y<6; y++)
            {
                for( i=0; i<30; i++)
                {
                    for(int j=0; j<2000000; j++);
                    line(1+i,y,10+i,y,' ');
                    line(i+2,y,10+i+1,y,'*');
                    line(1+i,y,10+i,y,' ');
                }
            }
            for( i=0; i<30; i++)
            {
                y=6;
                for(int j=0; j<2000000; j++);
                line(1+i,y,10+i,y,' ');
                line(i+2,y,10+i+1,y,'*');
            }
            for( y=7; y<13; y++)
            {
                for( i=0; i<21; i++)
                {
                    for(int j=0; j<2000000; j++);
                    line(1+i,y,10+i,y,' ');
                    line(i+2,y,10+i+1,y,'*');
                    line(1+i,y,10+i,y,' ');
                }
            }
            for( i=0; i<30; i++)
            {
                y=13;
                for(int j=0; j<2000000; j++);
                line(1+i,y,10+i,y,' ');
                line(i+2,y,10+i+1,y,'*');
            }
            cout<<endl<<endl<<endl;
            system("cls");
        }







        //if(t==3)
        {
            for( i=0; i<30; i++)
            {
                y=0;
                for(int j=0; j<2000000; j++);
                line(1+i,y,10+i,y,' ');
                line(i+2,y,10+i+1,y,'*');
            }
            for(y=1; y<6; y++)
            {
                for( i=0; i<30; i++)
                {
                    for(int j=0; j<2000000; j++);
                    line(1+i,y,10+i,y,' ');
                    line(i+2,y,10+i+1,y,'*');
                    line(1+i,y,10+i,y,' ');
                }
            }
            for( i=0; i<30; i++)
            {
                y=6;
                for(int j=0; j<2000000; j++);
                line(1+i,y,10+i,y,' ');
                line(i+2,y,10+i+1,y,'*');
            }
            for(y=7; y<13; y++)
            {
                for( i=0; i<30; i++)
                {
                    for(int j=0; j<2000000; j++);
                    line(1+i,y,10+i,y,' ');
                    line(i+2,y,10+i+1,y,'*');
                    line(1+i,y,10+i,y,' ');
                }
            }
            for( i=0; i<30; i++)
            {
                y=13;
                for(int j=0; j<2000000; j++);
                line(1+i,y,10+i,y,' ');
                line(i+2,y,10+i+1,y,'*');
            }
            cout<<endl<<endl<<endl;
            system("cls");
        }







       // if(t==4)
        {
            for(y=0; y<9; y++)
            {
                for( i=0; i<30; i++)
                {

                    for(int j=0; j<2000000; j++);
                    line(1+i,y,10+i,y,' ');
                    line(i+2,y,10+i+1,y,'*');
                    line(1+i,y,10+i,y,' ');
                }
            }
            m=30;
            for(y=1; y<9; y++)
            {
                m--;
                for( i=0; i<m; i++)
                {

                    for(int j=0; j<2000000; j++);
                    line(1+i,y,10+i,y,' ');
                    line(i+2,y,10+i+1,y,'*');
                    line(1+i,y,10+i,y,' ');
                }
            }
            for( i=0; i<30; i++)
            {
                y=9;
                for(int j=0; j<2000000; j++);
                line(1+i,y,10+i,y,' ');
                line(i+2,y,10+i+1,y,'*');
            }
            for(y=10; y<19; y++)
            {
                for( i=0; i<30; i++)
                {

                    for(int j=0; j<2000000; j++);
                    line(1+i,y,10+i,y,' ');
                    line(i+2,y,10+i+1,y,'*');
                    line(1+i,y,10+i,y,' ');
                }
            }
            cout<<endl<<endl<<endl;
            system("cls");
        }








       // if(t==5)
        {
            for( i=0; i<30; i++)
            {
                y=0;
                for(int j=0; j<2000000; j++);
                line(1+i,y,10+i,y,' ');
                line(i+2,y,10+i+1,y,'*');
            }
            for(y=1; y<6; y++)
            {
                for( i=0; i<21; i++)
                {

                    for(int j=0; j<2000000; j++);
                    line(1+i,y,10+i,y,' ');
                    line(i+2,y,10+i+1,y,'*');
                    line(1+i,y,10+i,y,' ');
                }
            }
            for( i=0; i<30; i++)
            {
                y=6;
                for(int j=0; j<2000000; j++);
                line(1+i,y,10+i,y,' ');
                line(i+2,y,10+i+1,y,'*');
            }
            for(y=7; y<12; y++)
            {
                for( i=0; i<30; i++)
                {

                    for(int j=0; j<2000000; j++);
                    line(1+i,y,10+i,y,' ');
                    line(i+2,y,10+i+1,y,'*');
                    line(1+i,y,10+i,y,' ');
                }
            }
            for( i=0; i<30; i++)
            {
                y=12;
                for(int j=0; j<2000000; j++);
                line(1+i,y,10+i,y,' ');
                line(i+2,y,10+i+1,y,'*');
            }
            cout<<endl<<endl<<endl;
            system("cls");
        }







       // if(t==6)
        {
            for( i=0; i<30; i++)
            {
                y=0;
                for(int j=0; j<2000000; j++);
                line(1+i,y,10+i,y,' ');
                line(i+2,y,10+i+1,y,'*');
            }
            for(y=1; y<6; y++)
            {
                for( i=0; i<21; i++)
                {

                    for(int j=0; j<2000000; j++);
                    line(1+i,y,10+i,y,' ');
                    line(i+2,y,10+i+1,y,'*');
                    line(1+i,y,10+i,y,' ');
                }
            }
            for( i=0; i<30; i++)
            {
                y=6;
                for(int j=0; j<2000000; j++);
                line(1+i,y,10+i,y,' ');
                line(i+2,y,10+i+1,y,'*');
            }
            for(y=7; y<12; y++)
            {
                for( i=0; i<30; i++)
                {

                    for(int j=0; j<2000000; j++);
                    line(1+i,y,10+i,y,' ');
                    line(i+2,y,10+i+1,y,'*');
                    line(1+i,y,10+i,y,' ');
                }
            }
            for(y=7; y<12; y++)
            {
                for( i=0; i<21; i++)
                {

                    for(int j=0; j<2000000; j++);
                    line(1+i,y,10+i,y,' ');
                    line(i+2,y,10+i+1,y,'*');
                    line(1+i,y,10+i,y,' ');
                }
            }
            for( i=0; i<30; i++)
            {
                y=12;
                for(int j=0; j<2000000; j++);
                line(1+i,y,10+i,y,' ');
                line(i+2,y,10+i+1,y,'*');
            }
            cout<<endl<<endl<<endl;
            system("cls");
        }





        //if(t==7)
        {
            for( i=0; i<30; i++)
            {
                y=0;
                for(int j=0; j<2000000; j++);
                line(1+i,y,10+i,y,' ');
                line(i+2,y,10+i+1,y,'*');
            }

            m=31;
            for(y=1; y<10; y++)
            {
                m--;
                for( i=0; i<m; i++)
                {

                    for(int j=0; j<2000000; j++);
                    line(1+i,y,10+i,y,' ');
                    line(i+2,y,10+i+1,y,'*');
                    line(1+i,y,10+i,y,' ');
                }
            }
            cout<<endl<<endl<<endl;
            system("cls");
        }







       // if(t==8)
        {
            for( i=0; i<30; i++)
            {
                y=0;
                for(int j=0; j<2000000; j++);
                line(1+i,y,10+i,y,' ');
                line(i+2,y,10+i+1,y,'*');
            }
            for(y=1; y<6; y++)
            {
                for( i=0; i<30; i++)
                {

                    for(int j=0; j<2000000; j++);
                    line(1+i,y,10+i,y,' ');
                    line(i+2,y,10+i+1,y,'*');
                    line(1+i,y,10+i,y,' ');
                }
            }
            for(y=1; y<6; y++)
            {
                for( i=0; i<21; i++)
                {

                    for(int j=0; j<2000000; j++);
                    line(1+i,y,10+i,y,' ');
                    line(i+2,y,10+i+1,y,'*');
                    line(1+i,y,10+i,y,' ');
                }
            }
            for( i=0; i<30; i++)
            {
                y=6;
                for(int j=0; j<2000000; j++);
                line(1+i,y,10+i,y,' ');
                line(i+2,y,10+i+1,y,'*');
            }
            for(y=7; y<12; y++)
            {
                for( i=0; i<30; i++)
                {

                    for(int j=0; j<2000000; j++);
                    line(1+i,y,10+i,y,' ');
                    line(i+2,y,10+i+1,y,'*');
                    line(1+i,y,10+i,y,' ');
                }
            }
            for(y=7; y<12; y++)
            {
                for( i=0; i<21; i++)
                {

                    for(int j=0; j<2000000; j++);
                    line(1+i,y,10+i,y,' ');
                    line(i+2,y,10+i+1,y,'*');
                    line(1+i,y,10+i,y,' ');
                }
            }
            for( i=0; i<30; i++)
            {
                y=12;
                for(int j=0; j<2000000; j++);
                line(1+i,y,10+i,y,' ');
                line(i+2,y,10+i+1,y,'*');
            }
            cout<<endl<<endl<<endl;
            system("cls");
        }





      //  if(t==9)
        {
            for( i=0; i<30; i++)
            {
                y=0;
                for(int j=0; j<2000000; j++);
                line(1+i,y,10+i,y,' ');
                line(i+2,y,10+i+1,y,'*');
            }
            for(y=1; y<6; y++)
            {
                for( i=0; i<30; i++)
                {

                    for(int j=0; j<2000000; j++);
                    line(1+i,y,10+i,y,' ');
                    line(i+2,y,10+i+1,y,'*');
                    line(1+i,y,10+i,y,' ');
                }
            }
            for(y=1; y<6; y++)
            {
                for( i=0; i<21; i++)
                {

                    for(int j=0; j<2000000; j++);
                    line(1+i,y,10+i,y,' ');
                    line(i+2,y,10+i+1,y,'*');
                    line(1+i,y,10+i,y,' ');
                }
            }
            for( i=0; i<30; i++)
            {
                y=6;
                for(int j=0; j<2000000; j++);
                line(1+i,y,10+i,y,' ');
                line(i+2,y,10+i+1,y,'*');
            }
            for(y=7; y<12; y++)
            {
                for( i=0; i<30; i++)
                {

                    for(int j=0; j<2000000; j++);
                    line(1+i,y,10+i,y,' ');
                    line(i+2,y,10+i+1,y,'*');
                    line(1+i,y,10+i,y,' ');
                }
            }
            for( i=0; i<30; i++)
            {
                y=12;
                for(int j=0; j<2000000; j++);
                line(1+i,y,10+i,y,' ');
                line(i+2,y,10+i+1,y,'*');
            }
            cout<<endl<<endl<<endl;
            system("cls");
        }

    }

    cin.get();
    return 0;
}
