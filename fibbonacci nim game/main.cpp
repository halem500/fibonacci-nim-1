#include <iostream>

using namespace std;

int main()
{
    while (true)
    {
        int tn,x,y,z;
        cout<<"enter the starting num: "<<endl;
        cin>>tn;
        x=0;
        y=0;
        while (true)
        {
            while (true)
            {
                if (tn>1);
                //cout<<"total : "<<tn<<endl;
                break;
            }
            while (tn<=1)
            {
                if (tn<=1)
                {
                    cout<<"Error .. please choose a valid number "<<endl;
                    cin>>tn;
                }
            }
            cout<<"total : "<<tn<<endl;
            break;
        }
        while (true)
        {
            cout<<"player 1 choose your num. "<<endl;      //player 1's turn
            cin>>x;
            while( x<0 || x==0 || (tn-x)<0 || (x>(2*y) & (y!=0 || x==tn)) )
            {
                if( x<0 || x==0 || (tn-x)<0 || (x>(2*y) & (y!=0 || x==tn)) )
                {
                    cout<<"err: player 1 choose your num. "<<endl;
                    cin>>x;
                }
                else
                    break;
            }
            tn-=x;
            cout<<"total : " <<tn<<endl;
            if (tn==0)
            {
                cout<<"winner: player 1"<<endl;
                break;
            }

            cout<<"player 2 choose your num. "<<endl;      //player 2's turn
            cin>>y;
            while (y<0 || y==0 || (tn-y)<0 || y>(2*x))
            {
                if (y<0 || y==0 || (tn-y)<0 || y>(2*x))
                {
                    cout<<"err: player 2 choose your num. "<<endl;
                    cin>>y;
                }
                else
                    break;
            }
            tn-=y;
            cout<<"total : " <<tn<<endl;

            if (tn==0)
            {
                cout<<"winner: player 2"<<endl;
                break;
            }
        }
        cout<<"wanna play again?"<<endl;
        cout<<"0-Yes"<<endl;
        cout<<"1-May be later"<<endl;
        cin>>z;
        if (z==1)
        {
            cout<<"see you later !!"<<endl;
            break;
        }
    }
}

