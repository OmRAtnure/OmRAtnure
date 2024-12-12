#include<iostream>
#include<graphics.h>
#include<math.h>
using namespace std;

void dda(int x1,int y1,int x2,int y2){
    float xi,yi,xn,yn,dx,dy,steps;
    dx=x2-x1;
    dy=y2-y1;
    if(abs(dx)>=abs(dy))
        steps=dx;
    else
        steps=dy;
    xi=dx/steps;
    yi=dy/steps;
    xn=x1;
    yn=y1;
    for(int i=1;i<steps;i++){
    putpixel(floor(xn),floor(yn),BLUE);
    xn+=xi;
    yn+=yi;
    delay(10);

    }
    
}

int main(){
    int gd=DETECT,gm;
    initgraph(&gd,&gm,NULL);
    int x1,x2,y1,y2;
    cout<<"enter point 1"<<endl;
    cin>>x1>>y1;
    cout<<"enter point 2"<<endl;
    cin>>x2>>y2;
    dda(x1,y1,x2,y2);
    getch();
    closegraph();
}