#include <iostream>
#include<math.h>
using namespace std;

float calculer(float xa,float xb,float ya,float yb){
return sqrt(pow((yb-ya),2)+pow((yb-ya),2));
}





int main()
{float xa,xb,ya,yb;

cout<<"enter xa:"<<endl;
cin>>xa;
cout<<"enter xb:"<<endl;
cin>>xb;
cout<<"enter ya:"<<endl;
cin>>ya;
cout<<"enter yb:"<<endl;
cin>>yb;

float d = calculer(xa,xb,ya,yb);
cout<<"d="<<d<<endl;
    return 0;
}
