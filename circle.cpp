#include<iostream>
#include<graphics.h>
using namespace std;

void bresemcircle(int r,int xc,int yc){
    int x=0;
    int y=r;
    float d=3-2*r;
    while(x<=y){
        if(d>=0){
            d += 4*(x-y)+10;
            x++;
            y--;
        }
        else if(d<0){
            d += 4 * (x) + 6;
            x++;
        }
           

        putpixel(xc + x, yc + y,9);
        putpixel(xc - x, yc + y, 9);
        putpixel(xc + x, yc - y, 9);
        putpixel(xc - x, yc - y, 9);
        putpixel(xc + y, yc + x, 9);
        putpixel(xc + y, yc - x, 9);
        putpixel(xc - y, yc + x, 9);
        putpixel(xc - y, yc - x, 9);
    }
}

int main(){
int gd=DETECT,gm;
initgraph(&gd,&gm,NULL);
int r=10,x=300,y=250;
// cout<<"enter radius of circle";
// cin>>r;
// cout<<"enter center of circle";
// cin>>x>>y;
for (int i=1;i<22;i++){
bresemcircle(r*i, x, y);
delay(1000);

}

getch();
closegraph();
 return 0;
}