#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<graphics.h>


int main()
{

    int gdrive=DETECT,gmode,i;
    initgraph(&gdrive,&gmode,"..\\bgi");

        //bkcolor
        setfillstyle(1,9);
        bar(0,0,639,320);
        setfillstyle(1,2);
        bar(0,320,639,500);

        //Station
        setfillstyle(1,13);
        bar(220,200,520,320);
        setfillstyle(1,0);
        bar(350,240,390,320);
        setfillstyle(1,0);
        bar(220,195,520,200);
        setfillstyle(1,13);
        bar(230,100,510,195);
        setfillstyle(1,0);
        bar(230,95,510,100);
        setfillstyle(1,0);
        bar(320,125,430,175);

        //tree
        setcolor(15);

        ellipse(95,100,200,-90,40,40);
        ellipse(15,100,280,-20,50,40);
        line(20,135,45,148);

        ellipse(105,140,190,-90,40,40);
        ellipse(-5,149,300,0,50,40);
        line(20,182,43,194);

        ellipse(115,175,205,-90,40,40);
        ellipse(-7,185,290,-15,50,40);
        line(76,195,106,179);
        line(65,148,95,140);
        ellipse(100,185,230,-80,100,30);
        ellipse(-5,192,-80,-10,90,30);
        line(50,215,50,320);
        line(70,212,70,320);
        line(30,320,80,320);

        setfillstyle(1,2);
        floodfill(55,150,15);
        floodfill(80,210,15);
        floodfill(40,215,15);

        setfillstyle(9,6);
        floodfill(55,310,15);
        floodfill(55,250,15);

        //line
        setcolor(0);
        line(0,370,639,370);
        line(0,371,639,371);
        line(0,390,639,390);
        line(0,391,639,391);

        //1 body
        setcolor(15);
        circle(20,350,21);
        for( i=20;i>=1;i=i-5)
        {
            circle(20,350,i);
        }
        circle(100,350,21);
        for(i=20;i>=1;i=i-5)
        {
            circle(100,350,i);
        }

        setcolor(0);
        for(i=20;i<=110;i++)
        {
            rectangle(i,300,110,375);
        }

        //2b1w
        setcolor(15);
        circle(170,350,21);
        for(i=20;i>=1;i=i-5)
        {
            circle(170,350,i);
        }

        //join
        setcolor(0);
        for(i=110;i<=170;i++)
        {
            rectangle(i,350,170,360);
        }

        setcolor(15);
        circle(30,370,21);
        for(i=20;i>=1;i=i-5)
        {
            circle(30,370,i);
        }
        circle(110,370,21);
        for(i=20;i>=1;i=i-5)
        {
            circle(110,370,i);
        }

        //2 body
        circle(250,350,21);
        for(i=20;i>=1;i=i-5)
        {
            circle(250,350,i);
        }

        setcolor(0);
        for(i=170;i<=260;i++)
        {
            rectangle(i,300,260,375);
        }

        //3b1w
        setcolor(15);
        circle(320,350,21);
        for(i=20;i>=1;i=i-5)
        {
            circle(320,350,i);
        }

        //join
        setcolor(0);
        for(i=250;i<=320;i++)
        {
            rectangle(i,350,320,360);
        }

        setcolor(15);
        circle(180,370,21);
        for(i=20;i>=1;i=i-5)
        {
            circle(180,370,i);
        }
        circle(260,370,21);
        for(i=20;i>=1;i=i-5)
        {
            circle(260,370,i);
        }

        //3 body
        circle(400,350,21);
        for(i=20;i>=1;i=i-5)
        {
            circle(400,350,i);
        }

        setcolor(0);
        for(i=320;i<=410;i++)
        {
            rectangle(i,300,410,375);
        }

        setcolor(15);
        circle(330,370,21);
        for(i=20;i>=1;i=i-5)
        {
            circle(330,370,i);
        }


        setcolor(0);
        //head
        for(i=410;i<=440;i++)
        {
            rectangle(i,355,440,365);
        }
        for(i=425;i<=435;i++)
        {
            rectangle(i,340,435,355);
        }

        setcolor(15);
        circle(410,370,21);
        for(i=20;i>=1;i=i-5)
        {
            circle(410,370,i);
        }

        //3 body head
        setcolor(0);
        for(i=350;i<=380;i++)
        {
            rectangle(i,285,380,305);
        }

        //text
        settextstyle(3,0,4);
        setcolor(4);
        outtextxy(265,65,"DIU Railway");


    printf("Press 1 for Moving\n");
    int c;
    scanf("%d",&c);
    if(c==1)
    {
    for(;;)
    {
        for (int n=20;n<639;n=n+2)
    {

        //1 body
        setcolor(15);
        circle(20+n,350,21);
        for( i=20;i>=1;i=i-5)
        {
            circle(20+n,350,i);
        }
        circle(100+n,350,21);
        for(i=20;i>=1;i=i-5)
        {
            circle(100+n,350,i);
        }

        setcolor(0);
        for(i=20;i<=110;i++)
        {
            rectangle(i+n,300,110+n,375);
        }

        //2b1w
        setcolor(15);
        circle(170+n,350,21);
        for(i=20;i>=1;i=i-5)
        {
            circle(170+n,350,i);
        }

        //join
        setcolor(0);
        for(i=110;i<=170;i++)
        {
            rectangle(i+n,350,170+n,360);
        }

        setcolor(15);
        circle(30+n,370,21);
        for(i=20;i>=1;i=i-5)
        {
            circle(30+n,370,i);
        }
        circle(110+n,370,21);
        for(i=20;i>=1;i=i-5)
        {
            circle(110+n,370,i);
        }

        //2 body

        circle(250+n,350,21);
        for(i=20;i>=1;i=i-5)
        {
            circle(250+n,350,i);
        }

        setcolor(0);
        for(i=170;i<=260;i++)
        {
            rectangle(i+n,300,260+n,375);
        }

        //3b1w
        setcolor(15);
        circle(320+n,350,21);
        for(i=20;i>=1;i=i-5)
        {
            circle(320+n,350,i);
        }

        //join
        setcolor(0);
        for(i=250;i<=320;i++)
        {
            rectangle(i+n,350,320+n,360);
        }

        setcolor(15);
        circle(180+n,370,21);
        for(i=20;i>=1;i=i-5)
        {
            circle(180+n,370,i);
        }
        circle(260+n,370,21);
        for(i=20;i>=1;i=i-5)
        {
            circle(260+n,370,i);
        }

        //3 body
        circle(400+n,350,21);
        for(i=20;i>=1;i=i-5)
        {
            circle(400+n,350,i);
        }

        setcolor(0);
        for(i=320;i<=410;i++)
        {
            rectangle(i+n,300,410+n,375);
        }

        setcolor(15);
        circle(330+n,370,21);
        for(i=20;i>=1;i=i-5)
        {
            circle(330+n,370,i);
        }
        circle(410+n,370,21);
        for(i=20;i>=1;i=i-5)
        {
            circle(410+n,370,i);
        }
        //3 body head
        setcolor(0);
        for(i=350;i<=380;i++)
        {
            rectangle(i+n,285,380+n,305);
        }
        //head
        for(i=410;i<=440;i++)
        {
            rectangle(i+n,355,440+n,365);
        }
        for(i=425;i<=435;i++)
        {
            rectangle(i+n,340,435+n,355);
        }



        cleardevice();


        //bkcolor
        setfillstyle(1,9);
        bar(0,0,639,320);
        setfillstyle(1,2);
        bar(0,320,639,500);

        //Station
        setfillstyle(1,13);
        bar(220,200,520,320);
        setfillstyle(1,0);
        bar(350,240,390,320);
        setfillstyle(1,0);
        bar(220,195,520,200);
        setfillstyle(1,13);
        bar(230,100,510,195);
        setfillstyle(1,0);
        bar(230,95,510,100);
        setfillstyle(1,0);
        bar(320,125,430,175);

        //tree
        setcolor(15);

        ellipse(95,100,200,-90,40,40);
        ellipse(15,100,280,-20,50,40);
        line(20,135,45,148);

        ellipse(105,140,190,-90,40,40);
        ellipse(-5,149,300,0,50,40);
        line(20,182,43,194);

        ellipse(115,175,205,-90,40,40);
        ellipse(-7,185,290,-15,50,40);
        line(76,195,106,179);
        line(65,148,95,140);
        ellipse(100,185,230,-80,100,30);
        ellipse(-5,192,-80,-10,90,30);
        line(50,215,50,320);
        line(70,212,70,320);
        line(30,320,80,320);

        setfillstyle(1,2);
        floodfill(55,150,15);
        floodfill(80,210,15);
        floodfill(40,215,15);

        setfillstyle(9,6);
        floodfill(55,310,15);
        floodfill(55,250,15);

        //text
        settextstyle(3,0,4);
        setcolor(4);
        outtextxy(265,65,"DIU Railway");



        //line
        line(0,370,639,370);
        line(0,371,639,371);
        line(0,390,639,390);
        line(0,391,639,391);
    }
    }
    }


    getch();
}
