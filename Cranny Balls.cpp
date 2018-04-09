#include<stdio.h>
#include<graphics.h>
#include<math.h>
int main(){

    /************  To initializing graphical window  ***********/
    bool dbflag= false,closeflag=true;
    initwindow(955,700,"Cranny Balls",0,0,dbflag, closeflag);
    /************  Drawing rectangle  ************/
    float d1,d2,d3,d4,d5,d6,c1,c2;
    int point=0,a1=0,b1=0,cc=0,dd=0,e1=0,f1=0,x=0,y=0,l=0,ll=160,rem,res,t1,t2,t3,count=0,count1=0,count2=0,j;
    char s[5];
    setcolor(4);
    settextstyle(10,HORIZ_DIR,5);
    outtextxy(390,20,"WELLCOME");
     setcolor(5);
    outtextxy(460,60,"TO");
    settextstyle(10,HORIZ_DIR,7);
    delay(1500);
     setcolor(9);
    outtextxy(235,100,"CRANNY BALLS");
    setcolor(4);
    delay(1500);
    outtextxy(227,250,"YOUR MISSION:");
    settextstyle(10,HORIZ_DIR,5);
    setcolor(15);
    delay(1500);
    outtextxy(250,350,"You HAVE 160 MOVES");
    outtextxy(140,400,"YOU HAVE TO SHOOT ALL BALLS");
    outtextxy(290,450,"IN THESE MOVES");
    settextstyle(10,HORIZ_DIR,4);
     setcolor(6);
     delay(1500);
    outtextxy(230,550,"PRESS ANY BUTTON TO START");
    settextstyle(10,HORIZ_DIR,5);
     setcolor(13);
    outtextxy(320,630,"BEST OF LUCK");
    getch();
    cleardevice();
/** moving pointer **/
char ch;
int a=0,b=0;
for(;1;){

        t1=ll;
t2=ll;
t3=ll;
res=1;
for(;res!=0;){
    rem=t1%10;
res=t1/10;
t1=res;
//printf("res=%d\nrem=%d\n",res,rem);
count++;
count1++;
count2++;
}
res=1;
for(;res!=0;){
rem=t2%10;
res=t2/10;
t2=res;

if(rem==0){
    s[count-1]='0';
    count--;
}
if(rem==1){
    s[count-1]='1';
    count--;
}
if(rem==2){
    s[count-1]='2';
    count--;
}
if(rem==3){
    s[count-1]='3';
    count--;
}
if(rem==4){
    s[count-1]='4';
    count--;
}
if(rem==5){
    s[count-1]='5';
    count--;
}
if(rem==6){
    s[count-1]='6';
    count--;
}
if(rem==7){
    s[count-1]='7';
    count--;
}
if(rem==8){
    s[count-1]='8';
    count--;
}
if(rem==9){
    s[count-1]='9';
    count--;
}
//printf("rem=%d\nres=%d\ncount=%d\ns[%d]=%c\n,ll=%d\nt1=%d\n",rem,res,count,count,s[count],ll,t1);
//for(j=0;j<=count2;j++)
//printf("string=%c",s[count2]);
}
s[count1]='\0';
count1=0;

count2=0;

        setbkcolor(0);
    if(ch=='w'){
        b=b+10;
    }
        if(ch=='s'){
            b=b-10;
        }
        if(ch=='a'){
            a=a-10;
        }
        if(ch=='d'){
            a=a+10;
        }
        setcolor(2);

setfillstyle(4,2);
bar3d(50,400,150,500,10,10);
settextstyle(10,HORIZ_DIR,3);
setcolor(15);
outtextxy(0,520,"Moving Buttons:");
settextstyle(10,HORIZ_DIR,2);
outtextxy(0,550,"w :- Up       s :- down       d :- right       a :- left       q :- shoot");
//  for(y=1;y<=99;y++){
//    line(50,400+y,150,400+y);
//  }
//floodfill(100,450,2);
setcolor(14);
setfillstyle(5,14);
  bar3d(200,250,300,350,10,10);

//floodfill(250,300,2);
//  for(y=1;y<=99;y++){
//    line(200,250+y,300,250+y);
//  }
setcolor(9);
setfillstyle(8,9);

  bar3d(350,100,450,200,10,10);
//  for(y=1;y<=99;y++){
//    line(350,100+y,450,100+y);
//  }

//floodfill(400,150,2);
setcolor(7);
setfillstyle(8,7);

bar3d(500,100,600,200,10,10);
//  for(y=1;y<=99;y++){
//    line(500,100+y,600,100+y);
//  }
setcolor(6);
setfillstyle(6,6);
//floodfill(550,150,2);
  bar3d(650,250,750,350,10,10);
//  for(y=1;y<=99;y++){
//    line(650,250+y,750,250+y);
//  }
setcolor(5);
setfillstyle(4,5);
//floodfill(700,300,2);
  bar3d(800,400,900,500,10,10);
//  for(y=1;y<=99;y++){
//    line(800,400+y,900,400+y);
//  }
//setfillstyle(1,8);
//floodfill(850,450,2);
//  setcolor(14);
  if(a1==0){
        setcolor(5);
  circle(100,355,45);
  circle(100,355,44);setcolor(5);
  circle(100,355,43);
  circle(100,355,42);
  circle(100,355,41);
//setcolor(14);
//setfillstyle(9,2);
//fillellipse(100,355,45,45);
}
  if(b1==0){
        setcolor(6);
  circle(250,205,45);
circle(250,205,44);setcolor(6);
circle(250,205,43);
circle(250,205,42);
circle(250,205,41);
//setcolor(14);
//setfillstyle(9,2);
//fillellipse(250,205,45,45);
}
if(cc==0){
        setcolor(7);
circle(400,55,45);
setcolor(7);
circle(400,55,44);setcolor(7);
circle(400,55,43);
circle(400,55,42);
circle(400,55,41);
//setcolor(14);
//setfillstyle(9,2);
//fillellipse(400,55,45,45);
}
if(dd==0){
        setcolor(9);
circle(550,55,45);
circle(550,55,44);
circle(550,55,43);
circle(550,55,42);
circle(550,55,41);
//setcolor(14);
//setfillstyle(9,2);
//fillellipse(550,55,45,45);
}
if(e1==0){
        setcolor(14);
circle(700,205,45);setcolor(14);
circle(700,205,44);setcolor(14);
circle(700,205,43);
circle(700,205,42);
circle(700,205,41);
//setcolor(14);
//setfillstyle(9,2);
//fillellipse(700,205,45,45);
}
if(f1==0){
        setcolor(2);
circle(850,355,45);
            circle(850,355,44);setcolor(2);
            circle(850,355,43);
            circle(850,355,42);
            circle(850,355,41);
//setcolor(14);
//setfillstyle(9,2);
//fillellipse(850,355,45,45);
}
 /* 1 circle(100,355,45);setcolor(14);
  circle(100,355,44);setcolor(14);
  circle(100,355,43);*/
/* 2
circle(250,205,45);setcolor(14);
circle(250,205,44);setcolor(14);
circle(250,205,43);*/
/*3
circle(400,55,45);
setcolor(14);
circle(400,55,44);setcolor(14);
circle(400,55,43);*/
/*4
setcolor(14);
circle(550,55,45);setcolor(14);
circle(550,55,44);setcolor(14);
circle(550,55,43);*/
/*5
setcolor(14);
circle(700,205,45);setcolor(14);
circle(700,205,44);setcolor(14);
circle(700,205,43);*/
/*6
setcolor(14);
circle(850,355,45);setcolor(14);
circle(850,355,44);setcolor(14);
circle(850,355,43);*/

 setcolor(15);
     circle(475+a,450-b,16);
        line(485+a,450-b,495+a,450-b);
line(465+a,450-b,455+a,450-b);
line(475+a,440-b,475+a,430-b);
line(475+a,460-b,475+a,470-b);
c1=(float)(475+a);
c2=(float)(450-b);
d1=pow(((100.0-c1)*(100.0-c1)+(355.0-c2)*(355.0-c2)),0.5);
d2=pow(((250.0-c1)*(250.0-c1)+(205.0-c2)*(205.0-c2)),0.5);
d3=pow(((400.0-c1)*(400.0-c1)+(55.0-c2)*(55.0-c2)),0.5);
d4=pow(((550.0-c1)*(550.0-c1)+(55.0-c2)*(55.0-c2)),0.5);
d5=pow(((700.0-c1)*(700.0-c1)+(205-c2)*(205.0-c2)),0.5);
d6=pow(((850.0-c1)*(850.0-c1)+(355.0-c2)*(355.0-c2)),0.5);
setcolor(15);
if(d1<=61.0){
   if(ch=='q'){
    setcolor(0);
    circle(100,355,45);
    circle(100,355,44);
    circle(100,355,43);
    circle(100,355,42);
    circle(100,355,41);
    setcolor(15);
//setcolor(0);
//setfillstyle(9,0);
//fillellipse(100,355,45,45);
    point+=2;
    a1=1;
   }}
   if(d2<=61.0){
   if(ch=='q'){
        setcolor(0);
   circle(250,205,45);
   circle(250,205,44);
   circle(250,205,43);
   circle(250,205,42);
   circle(250,205,41);
   setcolor(15);
//setcolor(0);
//setfillstyle(9,0);
//fillellipse(250,205,45,45);
   point+=2;
   b1=1;
   }}
   if(d3<=61.0){
   if(ch=='q'){
    setcolor(0);
    circle(400,55,45);
    circle(400,55,44);
    circle(400,55,43);
    circle(400,55,42);
    circle(400,55,41);
    setcolor(15);
//setcolor(0);
//setfillstyle(9,0);
//fillellipse(400,55,45,45);
    point+=2;
    cc=1;
   }}
   if(d4<=61.0){
   if(ch=='q'){
    setcolor(0);
    circle(550,55,45);
    circle(550,55,44);
    circle(550,55,43);
    circle(550,55,42);
    circle(550,55,41);
    setcolor(15);
//setcolor(0);
//setfillstyle(9,0);
//fillellipse(550,55,45,45);
    point+=2;
    dd=1;
   }}
   if(d5<=61.0){
   if(ch=='q'){
    setcolor(0);
    circle(700,205,45);
    circle(700,205,44);
    circle(700,205,43);
    circle(700,205,42);circle(700,205,41);
    setcolor(15);
//setcolor(0);
//setfillstyle(9,0);
//fillellipse(700,205,45,45);
    point+=2;
    e1=1;
   }}
   if(d6<=61.0){
   if(ch=='q'){
    setcolor(0);
    circle(850,355,45);
    circle(850,355,44);
    circle(850,355,43);
    circle(850,355,42);
    circle(850,355,41);
    setcolor(15);
// setcolor(0);
//setfillstyle(9,0);
//fillellipse(850,355,45,45);
    point+=2;
    f1=1;
   }}
   settextstyle(10,HORIZ_DIR,3);
outtext(s);
outtext(" moves left");
if(a1==1&&b1==1&&cc==1&&dd==1&&e1==1&&f1==1){
        delay(1500);
       cleardevice();
 setcolor(2);
settextstyle(10,HORIZ_DIR,7);
   outtextxy(257,240,"Congrats....");
   delay(1500);
   setcolor(15);
   settextstyle(10,HORIZ_DIR,5);
   outtextxy(80,340,"You have successfully completed");
   delay(1500);
   setcolor(9);
   settextstyle(10,HORIZ_DIR,6);
   outtextxy(370,410,"Your  ");
   delay(1500);
   setcolor(4);
   settextstyle(10,HORIZ_DIR,6);
   outtextxy(330,480,"MISSION");
   delay(2500);
    break;}

   if(l==160){
        delay(1500);
        cleardevice();
 setcolor(4);
settextstyle(10,HORIZ_DIR,7);
   outtextxy(200,240,"Move finished!");
   delay(1500);
   setcolor(15);
   outtextxy(200,320,"MISSION FAILED");
   delay(1500);
   setcolor(9);
   outtextxy(70,400,"BETTER LUCK NEXT TIME");
   delay(2500);
   break;
   }



    l++;
ll--;

ch=getch();
//delay(02);
cleardevice();

}

//delay(10);
//printf("your score: %d\nThanks for playing my game",point);

//printf("congrats you have successfully completed your mission");
getch();
/** moving circle
 int i=1;
int c=0;
 while(i<=6){
    if(i==1){

   setcolor(2);
  rectangle(50,400,150,500);
  rectangle(200,250,300,350);
  rectangle(350,100,450,200);
  rectangle(500,100,600,200);
  rectangle(650,250,750,350);
  rectangle(800,400,900,500);
//bar(500,550,510,710);
 //bar(490,568,500,710);
        setcolor(14);
  circle(100,355,45);setcolor(14);
  circle(100,355,44);setcolor(14);
  circle(100,355,43);delay(1900);
  cleardevice();
        i+=3;
    }
        if(i==2){
                //setcolor(0);
 // circle(100,355,45);
 setcolor(2);
  rectangle(50,400,150,500);
  rectangle(200,250,300,350);
  rectangle(350,100,450,200);
  rectangle(500,100,600,200);
  rectangle(650,250,750,350);
  rectangle(800,400,900,500);
//bar(500,550,510,710);
 //bar(490,568,500,710);
            setcolor(14);
            circle(250,205,45);setcolor(14);
            circle(250,205,44);setcolor(14);
            circle(250,205,43);delay(1900);
            cleardevice();
i=1;
        }
        if(i==3){
                if(c>=12){
                    break;
                }
                //setcolor(0);
                //circle(250,205,45);
                setcolor(2);
  rectangle(50,400,150,500);
  rectangle(200,250,300,350);
  rectangle(350,100,450,200);
  rectangle(500,100,600,200);
  rectangle(650,250,750,350);
  rectangle(800,400,900,500);
//bar(500,550,510,710);
// bar(490,568,500,710);
            setcolor(14);
            circle(400,55,45);
            setcolor(14);
            circle(400,55,44);setcolor(14);
            circle(400,55,43);delay(1900);
            cleardevice();
            i+=2;
        }
        if(i==4){
            //setcolor(0);
            //circle(400,55,45);
            setcolor(2);
  rectangle(50,400,150,500);
  rectangle(200,250,300,350);
  rectangle(350,100,450,200);
  rectangle(500,100,600,200);
  rectangle(650,250,750,350);
  rectangle(800,400,900,500);
//bar(500,550,510,710);
 //bar(490,568,500,710);
            setcolor(14);
            circle(550,55,45);setcolor(14);
            circle(550,55,44);setcolor(14);
            circle(550,55,43);delay(1900);
            cleardevice();
            i+=2;

        }
        if(i==5){
                //setcolor(0);
                //circle(550,55,45);
                setcolor(2);
  rectangle(50,400,150,500);
  rectangle(200,250,300,350);
  rectangle(350,100,450,200);
  rectangle(500,100,600,200);
  rectangle(650,250,750,350);
  rectangle(800,400,900,500);
//bar(500,550,510,710);
 //bar(490,568,500,710);
            setcolor(14);
            circle(700,205,45);setcolor(14);
            circle(700,205,44);setcolor(14);
            circle(700,205,43);delay(1900);
            cleardevice();
            i-=3;
        }
        if(i==6){
           // setcolor(0);
            //circle(700,205,45);
            setcolor(2);
  rectangle(50,400,150,500);
  rectangle(200,250,300,350);
  rectangle(350,100,450,200);
  rectangle(500,100,600,200);
  rectangle(650,250,750,350);
  rectangle(800,400,900,500);
//bar(500,550,510,710);
 //bar(490,568,500,710);
            setcolor(14);
            circle(850,355,45);setcolor(14);
            circle(850,355,44);setcolor(14);
            circle(850,355,43);delay(1900);
            cleardevice();
            i-=3;
            c++;
        }
 }***/
// ch=getch();
//  getch();
// return 0;
}
