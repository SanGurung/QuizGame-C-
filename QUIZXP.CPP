//Graphically minimized modal of quiz program.
//Program related to quizteam.Written by Santos Gurung
//Warning:-
/*   Th is computer program is protected by copyright law and cyber law.
      Copying whole or a part of the program may result
*® ©   © to severe civil & criminal penalties and will be prosecuted
  ® ™   to the maximum extent possible under the law */
#include<conio.h>
#include<stdio.h>
#include<dos.h>
#include<iostream.h>
#include<graphics.h>
#include <stdlib.h>
static int score,totscore,geoscore,highscores;
static int gscore,sscore,itscore,idscore,aescore,errorcode,fifty,audience;
static int gover,sover,itover,idover,aeover;
static highname[20];
graphdefirst();
spaie();
space2();
//sound prototyping
sound_win();
sound_loose();
sound_lifeline();
// help
invitab();
About();
//lifeline prototyping
audienceshow();
audienceout();
lifeline_fifty();
optionsare5();
audiencevote(int in1,int in2,int in3,int in4);
disp_score();
lifeline_audience();
endallfile();
//Question functions prototype
info_tech();
history_geography();
sports_enterntainment();
imp_dates();
science();
//function once explored can't be explored
ruleblock();
// main started now
correctanswer();
wronganswer();
fiftyshow();
fiftyout();
void main()
{
clrscr();
clreol();
_setcursortype(_NOCURSOR);
graphdefirst();
getche();
}
correctanswer()
{
 cout<<"\nøGood it is correct"<<endl;
    sound_win();
    score=score+100;
    cout<<"øScore is  "<<score<<endl;         delay(1500);
//    getche();
    return(0);
}
wronganswer()
{
cout<<"\nøWrong so exit from block."<<endl;
    sound_loose();   delay(1500);
//    getche();
    return(0);
}
fiftyshow()
{
    cout<<"\nøFifty-fifty (50-50)"<<endl;
    sound_lifeline();  delay(1500);
//    getche();
    fifty=fifty+3;
    return(0);
}
fiftyout()
{
    cout<<"\nøSorry,50-50 has been already used."<<endl;
    sound_loose();  delay(1500);
 // getche();
    return(0);
}
space()              //loading and spacing function
{
int z;
cout<<endl;
//cout<<"ÛÛÛÛÛÛÛÛ";
for(z=0;z<=79;z++)
{
 cprintf("Ü");
 delay(6);
// z++;
 }
cout<<"\n\n\n\n"<<endl;
return(0);
}
// second space
space2()
{
cout<<"\n\nYou choose ¯ ";
return(0);
}
sound_win()
{
sound(500); delay(400);
nosound();
return(0);
}
//sound when the answer is Wrong
sound_loose()
{
sound(20); delay(400);
nosound();
return(0);
}
//sound when user uses lifeline
sound_lifeline()
{
sound(2500); delay(400);
sound(2400); delay(400);
sound(2500); delay(400);
nosound();
return(0);
}
// help ,about and keys information.
invitab()
{
cout<<"\t\t\t\t\t\t  ";
return(0);
}
lifeline_audience()
{
cout<<"øAudience vote";
return(0);
}
//no use of audience vote
disp_score()
{ int tot;
tot=gscore+sscore+itscore+idscore+aescore+score;
if(tot==0) { }
else { cout<<"Total: "<<tot; }
cout<<" Score: "<<score;
cout<<"                     Lifelines  ";
return(0);
}
audienceshow()
{
    cout<<"\nøAudience Vote"<<endl;
    audience=5;   delay(1500);
//    getche();
    return(0);
}
audienceout()
{
cout<<"\nøAudience Vote used already."<<endl;   delay(1500);
// getche();
 return(0);
}
lifeline_fifty()
{
cout<<" ø50-50  ";
return(0);
}
optionsare()
{
cout<<"\nøOptions are 1,2,3,4,5 & 6."<<endl;     delay(1500);
//getche();
return(0);
}
optionsare5()
{
cout<<"\nøOptions are 1,2 & 6."<<endl;    delay(1500);
//getche();
return(0);
}
About()
{
cout<<"\nWe are five very important code master";
getche();
return(0);
}

// lifeline number 2 that is Audience vote(bar graph)
audiencevote(int in1,int in2,int in3,int in4)
{
clrscr();
int ms,vs;
int gdriver,gmode;
gdriver=DETECT;
initgraph(&gdriver,&gmode,"c:\\TURBOC3\\bgi");
errorcode = graphresult();
if (errorcode != grOk)
{
   printf("Graphics error: %s\n", grapherrormsg(errorcode));
   printf("Press any key to halt:");
   getch();
   exit(1);
}
 vs=100;
 in1=in1*3;
 in2=in2*3;
 in3=in3*3;
 in4=in4*3;
//setfillstyle(SOLID_FILL,DARKGRAY);
//bar(0,0,700,700);
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
setfillstyle(9,8);
setcolor(WHITE);
bar3d(10, 20, 500, 50,0,0);
settextstyle(0,HORIZ_DIR,1);
setcolor(WHITE);
outtextxy(20,32," Audience Vote shown in bar graph ");
setfillstyle(11,DARKGRAY);
setcolor(WHITE);
bar3d(10,90,500,402,0,0);
setfillstyle(SOLID_FILL,WHITE);
setcolor(WHITE);
fillellipse(520, 35, 37, 17);
setcolor(WHITE);
 setfillstyle(SOLID_FILL,5);
 fillellipse(520, 35, 35, 15);
settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
setcolor(WHITE);
outtextxy(490,32,"Audience");
setfillstyle(SOLID_FILL,BLUE);
setcolor(LIGHTGRAY);
bar3d(100,400-in1,140,400,5,5);
bar3d(200,400-in2,240,400,5,5);
bar3d(300,400-in3,340,400,5,5);
bar3d(400,400-in4,440,400,5,5);
setcolor(WHITE);
settextstyle(0,1,1);
outtextxy(100,332,"Option-1");
outtextxy(200,332,"Option-2");
outtextxy(300,332,"Option-3");
outtextxy(400,332,"Option-4");
settextstyle(0,0,1);

for(ms=0;ms<11;ms++)
{
line(5,vs,15,vs);
vs=vs+30;
}
cout<<"              "<<in1/3<<"%         "<<in2/3<<"%          "<<in3/3<<"%         "<<in4/3<<"%";
outtextxy(12,98," 100%");
outtextxy(12,128," 90%");
outtextxy(12,158," 80%");
outtextxy(12,188," 70%");
outtextxy(12,218," 60%");
outtextxy(12,248," 50%");
outtextxy(12,278," 40%");
outtextxy(12,308," 30%");
outtextxy(12,338," 20%");
outtextxy(12,368," 10%");
outtextxy(12,394,"  0%");
sound_lifeline();
getche();
closegraph();
return(0);
}
ruleblock()
{  int xs;  _setcursortype(_NOCURSOR);
    cout<<"\n\n\n\n ";
    space();
    cout<<"      øSorry,you have already explored this block."<<endl;
    cout<<"      øBy the rule of game,once entered block can't be again explored."<<endl;
cout<<"\n\n\n\n\n";
for(xs=0;xs<=79;xs++)
{ cprintf("Ü"); delay(4);  }
sound_loose();
sound_loose();
getch();
_setcursortype(_NORMALCURSOR);
return(0);
}
//from here we play
graphdefirst()
{
int gdriver,gmode;
int i,loop,loope,iu;
int c,choice;
clrscr();
gdriver=DETECT;
initgraph(&gdriver,&gmode,"c:\\TURBOC3\\bgi");
choice=1;
setfillstyle(10, DARKGRAY);
setcolor(BLACK);
 bar3d(120,120, 518, 348,0,0);
setfillstyle(1, LIGHTGRAY);
setcolor(WHITE);
 bar3d(500,330, 100, 90,0,0);
  setbkcolor(BLACK);
  setcolor(BLUE);
settextstyle(GOTHIC_FONT,HORIZ_DIR, 5);
  outtextxy(120,130,"Quiz Program 2005");
  setcolor(DARKGRAY);
settextstyle(DEFAULT_FONT,HORIZ_DIR, 1);
outtextxy(140,200,"By quiz project group of pec.");
outtextxy(140,210,"Contents more than 150 tough questions.");
outtextxy(140,220,"The most stylis+knowledgable program from c++.");
outtextxy(140,230,"New features:- 50-50,Audience vote & more.");
  settextstyle(DEFAULT_FONT,HORIZ_DIR, 1);
 setcolor(DARKGRAY);
setfillstyle(SOLID_FILL, RED);
 bar3d(500,110, 100, 90,0,0);
setfillstyle(SOLID_FILL, BLUE);
 bar3d(477,110, 100, 90,0,0);
 setcolor(WHITE);
 outtextxy(121,97,"Quiz Program 2005..");
 rectangle(479,92,498,108);
 outtextxy(486,97,"X");
 setcolor(RED);
 outtextxy(120,275,"Please Wait...");
 setcolor(WHITE);
 setfillstyle(SOLID_FILL, BLACK);
 bar3d(420,300, 210, 286,0,0);
delay(2000);
for(loope=220;loope<420;loope++)
{
 setfillstyle(SOLID_FILL, BROWN);
 bar3d(loope,300, 211, 286,0,0);
delay(21);
}
delay(100); about:
cleardevice();
setfillstyle(SOLID_FILL, BLACK);
 bar(640,480, 0, 0);
setbkcolor(BLACK);
setfillstyle(SOLID_FILL, BROWN);
 bar3d(520,365, 120, 70,0,0);
 setfillstyle(SOLID_FILL, DARKGRAY);
 bar3d(520,100, 120, 337,0,0);
outtextxy(140,80,"About the game rules & Keys...");
settextstyle(DEFAULT_FONT,HORIZ_DIR, 1);
outtextxy(125,110,"A)Rules");
setcolor(LIGHTGRAY);
outtextxy(140,125,"1)Score will increase by 100.");
outtextxy(140,135,"2)In each block,lifelines available(Only once).");
outtextxy(140,145,"3)Execution from the block(If Answer==wrong).");
outtextxy(140,155,"4)Block once explored will be unavailable.");
setcolor(WHITE);
outtextxy(125,175,"B)keys");
setcolor(LIGHTGRAY);
outtextxy(140,190,"key :-  1,2,3,4   5            6");
outtextxy(140,200,"Role:-  Options   Fifty-Fifty  Audience Vote");
setcolor(WHITE);
outtextxy(125,220,"C)Programmers:-");
setcolor(LIGHTGRAY);
outtextxy(140,235,"Santos Gurung,Rohan Thapa,Krishna Tamang");
outtextxy(140,245,"Mahesh Gurung,Suresh Sapkota < Pec >");
setcolor(WHITE);
outtextxy(125,265,"D)Warning:-");
setcolor(LIGHTGRAY);
settextstyle(DEFAULT_FONT,HORIZ_DIR, 1);
outtextxy(140,280,"This program is protected by copyright law. ");
outtextxy(140,290,"Copying whole or a part of the program may");
outtextxy(140,300,"result to severe civil & criminal penalties");
outtextxy(140,310,"and will be prosecutedto the maximum extent ");
outtextxy(140,320,"possible under the law.All Rights reserved.");
setcolor(WHITE);
settextstyle(DEFAULT_FONT,HORIZ_DIR, 1);
getche();
goto resjump;
mainselect:     	//Label mainselect
initgraph(&gdriver,&gmode,"\\tc\\bgi");
resjump: //goto seci;
setbkcolor(BLACK);
cleardevice();
setfillstyle(10, DARKGRAY); setcolor(BLACK);  bar3d(135,125, 530, 370,0,0);
setfillstyle(1,LIGHTBLUE);
setcolor(WHITE);
 bar3d(-5,70,650,400,0,0);
errorselect2:
//clrscr();   seci:
setbkcolor(BLACK);
setfillstyle(SOLID_FILL,BLUE);   setcolor(LIGHTGRAY);
bar3d(-5,0, 650,70,0,0);   bar3d(-5,400, 650, 500,0,0);
setcolor(LIGHTGRAY); outtextxy(55,30,"ÎQuiz Program 2005e"); outtextxy(500,430,"ØVersion 1.0.25 ");
setcolor(LIGHTGRAY); outtextxy(55,430," Press  Tab(Up Down) & Spacebar(Enter)");
errorselect:
if(choice==1)
{   setfillstyle(SOLID_FILL,GREEN);    setcolor(LIGHTGRAY);
 bar3d(462,160, 170, 180,0,0);       setcolor(WHITE);
  outtextxy(140,168,"      Information technology & computers."); }
 else{   setfillstyle(SOLID_FILL,BLUE);     setcolor(LIGHTGRAY);
 bar3d(462,160, 170, 180,0,0);         setcolor(LIGHTGRAY);
  outtextxy(140,168,"      Information technology & computers."); }
if(choice==2)
{  setfillstyle(SOLID_FILL,GREEN);          setcolor(LIGHTGRAY);
   bar3d(462,190, 170, 210,0,0);         setcolor(WHITE);
  outtextxy(140,198,"      History & Geography.");  }
 else{  setfillstyle(SOLID_FILL,BLUE);    setcolor(LIGHTGRAY);
   bar3d(462,190, 170, 210,0,0);               setcolor(LIGHTGRAY);
  outtextxy(140,198,"      History & Geography."); }
if(choice==3)
{ setfillstyle(SOLID_FILL,GREEN);          setcolor(LIGHTGRAY);
 bar3d(462,220, 170, 240,0,0);          setcolor(WHITE);
  outtextxy(140,228,"      Science."); }
 else{   setfillstyle(SOLID_FILL,BLUE);    setcolor(LIGHTGRAY);
 bar3d(462,220, 170, 240,0,0);      setcolor(LIGHTGRAY);
  outtextxy(140,228,"      Science.");}
if(choice==4)
{  setfillstyle(SOLID_FILL,GREEN);     setcolor(LIGHTGRAY);
 bar3d(462,250, 170, 270,0,0);      setcolor(WHITE);
  outtextxy(140,258,"      Arts Sports & Enterntainment.");}
 else{   setfillstyle(SOLID_FILL,BLUE);     setcolor(LIGHTGRAY);
 bar3d(462,250, 170, 270,0,0);      setcolor(LIGHTGRAY);
  outtextxy(140,258,"      Arts Sports & Enterntainment.");}
if(choice==5)
{   setfillstyle(SOLID_FILL,GREEN);   setcolor(LIGHTGRAY);
 bar3d(462,280, 170, 300,0,0);      setcolor(WHITE);
  outtextxy(140,285,"      Important Dates."); }
else{   setfillstyle(SOLID_FILL,BLUE);   setcolor(LIGHTGRAY);
 bar3d(462,280, 170, 300,0,0);      setcolor(LIGHTGRAY);
  outtextxy(140,285,"      Important Dates."); }
if(choice==6) {  setcolor(WHITE); outtextxy(500,30,"Help"); }
else {  setcolor(LIGHTGRAY); outtextxy(500,30,"Help"); }
if(choice==7)  { setcolor(WHITE);  outtextxy(550,30,"Exit"); }
else{   setcolor(LIGHTGRAY);   outtextxy(550,30,"Exit"); }
setcolor(WHITE);
gotoxy(0,0);
input:
c=getche();
/*
if(c=='\n')
{
if(choice<=1)
{ choice=7; }
else { choice=choice-1; }
goto errorselect;
}                     */
if(c=='	')
{
if(choice>=7)
{ choice=1; }
else { choice=choice+1; }
goto errorselect;
}
else if(c==' ')
{
if(choice==1)
{   	closegraph();
	clrscr();
	info_tech();
	goto mainselect;
}
else if(choice==2)
{	closegraph();
	clrscr();
	history_geography();
	goto mainselect;
}
else if(choice==3)
{	closegraph();
	clrscr();
	science();
	goto mainselect;
}
else if(choice==4)
{    	closegraph();
	clrscr();
	sports_enterntainment();
	goto mainselect;
}
else if(choice==5)
{	closegraph();
	clrscr();
	imp_dates();
	goto mainselect;
}
else if(choice==6)
{  goto about; }
else if(choice==7)
{ endallfile(); }
}
else { goto input; }

//getche();
closegraph();
nosound();
return(0);
}
//text animation from here do not copy it..
endallfile()
{
int gdriver,gmode;
long int lop,lops,totquestion;
char nameuser[15],ani;
clrscr();
gdriver=DETECT;
initgraph(&gdriver,&gmode,"\\tc\\bgi");
totscore=gscore+sscore+itscore+idscore+aescore;
totquestion=totscore/100;
errorcode = graphresult();
if (errorcode != grOk)
{
   printf("Graphics error: %s\n", grapherrormsg(errorcode));
   printf("Press any key to halt:");
   getch();
   exit(1);
}
cout<<"Enter your first name only :- ";
cin>>nameuser;
errorenter:
cout<<"Play the animation(y/n)   :-";
ani = getch();
if(ani=='y'||ani=='Y') { goto next; }
else if(ani=='n'||ani=='N') { goto next; }
else{ cout<<endl; cout<<"Enter Y for Yes,N for No"<<endl; goto errorenter; }
next:
clrscr();
setfillstyle(SOLID_FILL,BLACK);
bar(0,0,700, 600);
setfillstyle(SOLID_FILL,WHITE);
setcolor(WHITE);
fillellipse(430, 35, 37, 17);
 setfillstyle(SOLID_FILL,BLUE);
 fillellipse(430, 35, 35, 15);
settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
outtextxy(410,32,"50:50");
setfillstyle(SOLID_FILL,WHITE);
fillellipse(520, 35, 37, 17);
setfillstyle(SOLID_FILL,5);
fillellipse(520, 35, 35, 15);
settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
outtextxy(490,32,"Audience");
setfillstyle(SOLID_FILL,BLACK);
setcolor(BLACK);
cout<<"\n\n\n\n\n\n";   cout<<"\t\t\t\t\t\t";
settextstyle(0,HORIZ_DIR,1);
setcolor(BLACK);
cout<<"(1)Highscore record:-"<<endl;       invitab();
cout<<"ùHighscore:"<<highscores<<endl;  invitab();
cout<<"ùPlayer   :"<<highname<<endl<<endl;
cout<<"\t\t\t\t\t\t";
cout<<"(2)Your Record:-"<<endl;   invitab();
cout<<"ùCurrent Player: "<<nameuser<<endl;   invitab();
//cout<<""<<endl;                     invitab();
cout<<"ùInfo.Tech   :"<<itscore<<endl;  invitab();
cout<<"ùHistory&Geo :"<<gscore<<endl;   invitab();
cout<<"ùScience     :"<<sscore<<endl;   invitab();
cout<<"ùArts,Entern :"<<aescore<<endl;  invitab();
cout<<"ùImp.Dates   :"<<idscore<<endl;
cout<<endl;                             invitab();
cout<<"äTotal Score :"<<totscore<<endl; invitab();
cout<<"äQuestions Attended:"<<totquestion<<endl;
cout<<endl;
cout<<"\t\t\t\t\t\t";
cout<<"(3)Comments:-";
cout<<endl;                            invitab();
if(totscore<=300)
{
cout<<"ùVery very very low in G.k.";
}

else if(totscore<=500)
{
cout<<"ùVery very low in G.k.";
}
else if(totscore<=1000)
{
cout<<"ùGood,but try hard.";
}
else if(totscore<=2000)
{
cout<<"ùVery good,but try hard.";
}
else if(totscore<4000)
{
cout<<"ùExecellent,you r a genius"<<endl;   invitab();
cout<<"ùVery very much impressed.";
}
else if(totscore>=4000)
{
cout<<"ùExcellent,New Einstein.";
}
cout<<endl<<endl;  cout<<"\t\t\t\t\t\t";
cout<<"(4)Press any key to Exit"<<endl;
if(ani=='y'||ani=='Y')
{ goto rightnext; }
else if(ani=='n'||ani=='N')
{ goto lastnext; }
else { goto rightnext;}
rightnext:
//for(lop=500;lop>-470;lop--)
lop=500;
setfillstyle(SOLID_FILL,BLACK);
setcolor(WHITE);
while(!kbhit())
{
delay(50);
bar(0,0,340, 500);
settextstyle(4,HORIZ_DIR,4);
outtextxy(5,lop-100,"Thanx for Evaluating.");
settextstyle(0,HORIZ_DIR,1);
outtextxy(80,lop,"Programmers");
setfillstyle(1,0);
outtextxy(130,lop+20,"ùSantos  Gurung");
outtextxy(130,lop+30,"ùSuresh  Sapkota");
outtextxy(130,lop+40,"ùRohan   Thapa");
outtextxy(130,lop+50,"ùKrishna Tamang");
outtextxy(130,lop+60,"ùMahesh  Gurung");
outtextxy(80,lop+90,"Lead Programmer");
outtextxy(130,lop+110,"ùSantos  Gurung");
outtextxy(80,lop+130,"Questions Collector");
outtextxy(130,lop+150,"ùSuresh Sapkota");
outtextxy(80,lop+170,"Questions Corrections");
outtextxy(130,lop+190,"ùKrishna Tamang");
outtextxy(130,lop+200,"ùRohan Thapa");
outtextxy(80,lop+220,"Questions options");
outtextxy(130,lop+240,"ùRohan Thapa");
outtextxy(80,lop+260,"50-50 Idea");
outtextxy(130,lop+270,"ùSuresh Sapkota");
outtextxy(130,lop+280,"ùRohan Thapa");
outtextxy(80,lop+300,"Audience Vote idea");
outtextxy(130,lop+310,"ùRohan Thapa");
outtextxy(130,lop+320,"ùSuresh Sapkota");
outtextxy(80,lop+340,"Text Animation");
outtextxy(130,lop+350,"ùSantos gurung");
outtextxy(80,lop+370,"Sound Codes");
outtextxy(130,lop+380,"ùMahesh Gurung");
outtextxy(130,lop+390,"ùSuresh Sapkota");
outtextxy(80,lop+410,"Code correction");
outtextxy(130,lop+420,"ùSantos Gurung");
outtextxy(80,lop+440,"Question Source");
outtextxy(130,lop+450,"ùDifferent G.k Books");
outtextxy(80,lop+470,"Test Players");
outtextxy(130,lop+480,"ùDikpal Dura,Dan bdr grg");
outtextxy(130,lop+490,"ùBabita,Dan bdr grg");
outtextxy(130,lop+500,"ùPrakash,Dan bdr grg");
outtextxy(130,lop+510,"ùDikpal Dura,Dan bdr grg");
outtextxy(80,lop+530,"Special Thanks");
outtextxy(130,lop+540,"ùRaju Tiwari Sir");
outtextxy(80,lop+560,"For any queries mail at");
outtextxy(80,lop+570,"    santosgurung07@hotmail.com");
outtextxy(80,lop+580,"    quizteam07@hotmail.com");
lop--;
if(lop==-490) { goto lastnext; }
delay(50);
}
if(!kbhit()==0)
 { exit(1);   }
lastnext:
setfillstyle(9,BLACK);
setcolor(WHITE);
for(lops=300;lops>185;lops--)
{
bar(0,0,340, 500);
settextstyle(4,HORIZ_DIR,5);
outtextxy(45,lops,"Quiz program'5");
settextstyle(0,HORIZ_DIR,1);
outtextxy(100,lops+60,"(c)2005 Quizteam");
}
getche(); exit(1); return(0);
}
// Questions at the starting
info_tech()
{
//note fifty-fifty has been given value 2 so,in every questions function user can use  50-50 which we don't want
// change the question as you increase the questions as next label is to be written question2.
clrscr();
int answer,fifty;
int A1=0,A2=0,A3=0,A4=0;
static int audience;
audience=0;  fifty=2; score=0;
if(itover==100) {  ruleblock(); goto over;   }
//fill down here
question1:
    clrscr();     disp_score();
if(fifty==2)  {    lifeline_fifty();  }
if(audience==0)  {    lifeline_audience();  }  space();
    cout<<"\t(1)Who is known as father ofy Computer?"<<endl;
if(fifty!=5)  {
    cout<<"\n\tOptions are  (1) Charles Darwin\t (2) Charles Babage\n\t             (3) Robert Lafore\t (4) Bill Gates"<<endl;
    space2();
    answer=getche();
 if(answer=='2')
  {    correctanswer();    goto question2;  }
 if(answer=='1' ||answer=='3' ||answer=='4')
  {    wronganswer();    goto end;  }
else if(answer=='5')
  {  if(fifty==2)    { fiftyshow(); fifty=fifty+3;  goto question1;    }
    else    {fiftyout();    goto question1;    }  }
else if(answer=='6')
   {    if(audience!=5)
       {    audienceshow();  audience=5; 
    A1=23, A2=33, A3=12, A4=32;
    audiencevote(A1,A2,A3,A4);     }
       else       {  audienceout();       }
    goto question1;     }
    else    {    optionsare();      goto question1;     }     }
 if(fifty==5)
    {    cout<<"\n\tOptions are  (1)Charles Babage\t(2) Bill Gates"<<endl;
    space2();
    answer=getche();
 if(answer=='1')
   {    correctanswer();     fifty=fifty+5;    goto question2;     }  
else if(answer=='2')
   {    wronganswer();     fifty=fifty+5;    goto end;;     }  
else if(answer=='5')
   {    fiftyout();     goto question1;     }  
else if(answer=='6')
   {    if(audience!=5)       {   audienceshow();      audience=5;
    A1=23, A2=33, A3=12, A4=32;
    audiencevote(A1,A2,A3,A4); }
       else       {  audienceout();        }    goto question1;       }
else  {     optionsare5();    goto question1;   }
 }
question2:
    clrscr();     disp_score();
if(fifty==2)  {    lifeline_fifty();  }
if(audience==0)  {    lifeline_audience();  }  space();
    cout<<"\t(2)The popular operating system for microcomputers of early time?"<<endl;
if(fifty!=5)  {
    cout<<"\n\tOptions are  (1) Os\\2\t (2) MS-DOS\n\t             (3) CP\\M\t (4) Linux"<<endl;
    space2();
    answer=getche();
 if(answer=='3')
  {    correctanswer();    goto question3;  }
 if(answer=='1' ||answer=='2' ||answer=='4')
  {    wronganswer();    goto end;  }
else if(answer=='5')
  {  if(fifty==2)    { fiftyshow(); fifty=fifty+3;  goto question2;    }
    else    {fiftyout();    goto question2;    }  }
else if(answer=='6')
   {    if(audience!=5)
       {    audienceshow();  audience=5; 
    A1=14, A2=33, A3=32, A4=21;
    audiencevote(A1,A2,A3,A4);     }
       else       {  audienceout();       }
    goto question2;     }
    else    {    optionsare();      goto question2;     }     }
 if(fifty==5)
    {    cout<<"\n\tOptions are  (1)CP\\M\t(2) Linux"<<endl;
    space2();
    answer=getche();
 if(answer=='1')
   {    correctanswer();     fifty=fifty+5;    goto question3;     }  
else if(answer=='2')
   {    wronganswer();     fifty=fifty+5;    goto end;;     }  
else if(answer=='5')
   {    fiftyout();     goto question2;     }  
else if(answer=='6')
   {    if(audience!=5)       {   audienceshow();      audience=5;
    A1=14, A2=33, A3=32, A4=21;
    audiencevote(A1,A2,A3,A4); }
       else       {  audienceout();        }    goto question2;       }
else  {     optionsare5();    goto question2;   }
 }
question3:
    clrscr();     disp_score();
if(fifty==2)  {    lifeline_fifty();  }
if(audience==0)  {    lifeline_audience();  }  space();
    cout<<"\t(3)The biggest 'virus' of year 2004 by a little boy?"<<endl;
if(fifty!=5)  {
    cout<<"\n\tOptions are  (1) W32General@mm\t (2) Red Screen\n\t             (3) Iloveyou\t (4) My Dhoom"<<endl;
    space2();
    answer=getche();
 if(answer=='4')
  {    correctanswer();    goto question4;  }
 if(answer=='1' ||answer=='2' ||answer=='3')
  {    wronganswer();    goto end;  }
else if(answer=='5')
  {  if(fifty==2)    { fiftyshow(); fifty=fifty+3;  goto question3;    }
    else    {fiftyout();    goto question3;    }  }
else if(answer=='6')
   {    if(audience!=5)
       {    audienceshow();  audience=5; 
    A1=12, A2=20, A3=2, A4=66;
    audiencevote(A1,A2,A3,A4);     }
       else       {  audienceout();       }
    goto question3;     }
    else    {    optionsare();      goto question3;     }     }
 if(fifty==5)
    {    cout<<"\n\tOptions are  (1)W32General@mm\t(2) My Dhoom"<<endl;
    space2();
    answer=getche();
 if(answer=='1')
   {    wronganswer();     fifty=fifty+5;    goto end;;     }  
else if(answer=='2')
   {    correctanswer();     fifty=fifty+5;    goto question4;     }  
else if(answer=='5')
   {    fiftyout();     goto question3;     }  
else if(answer=='6')
   {    if(audience!=5)       {   audienceshow();      audience=5;
    A1=12, A2=20, A3=2, A4=66;
    audiencevote(A1,A2,A3,A4); }
       else       {  audienceout();        }    goto question3;       }
else  {     optionsare5();    goto question3;   }
 }
question4:
    clrscr();     disp_score();
if(fifty==2)  {    lifeline_fifty();  }
if(audience==0)  {    lifeline_audience();  }  space();
    cout<<"\t(4)The Short form of 'Computer Association Of Nepal' is......"<<endl;
if(fifty!=5)  {
    cout<<"\n\tOptions are  (1) CAOF\t (2) CAN\n\t             (3) CAO\t (4) CANL"<<endl;
    space2();
    answer=getche();
 if(answer=='2')
  {    correctanswer();    goto question5;  }
 if(answer=='1' ||answer=='3' ||answer=='4')
  {    wronganswer();    goto end;  }
else if(answer=='5')
  {  if(fifty==2)    { fiftyshow(); fifty=fifty+3;  goto question4;    }
    else    {fiftyout();    goto question4;    }  }
else if(answer=='6')
   {    if(audience!=5)
       {    audienceshow();  audience=5; 
    A1=12, A2=75, A3=2, A4=11;
    audiencevote(A1,A2,A3,A4);     }
       else       {  audienceout();       }
    goto question4;     }
    else    {    optionsare();      goto question4;     }     }
 if(fifty==5)
    {    cout<<"\n\tOptions are  (1)CAN\t(2) CANL"<<endl;
    space2();
    answer=getche();
 if(answer=='1')
   {    correctanswer();     fifty=fifty+5;    goto question5;     }  
else if(answer=='2')
   {    wronganswer();     fifty=fifty+5;    goto end;;     }  
else if(answer=='5')
   {    fiftyout();     goto question4;     }  
else if(answer=='6')
   {    if(audience!=5)       {   audienceshow();      audience=5;
    A1=12, A2=75, A3=2, A4=11;
    audiencevote(A1,A2,A3,A4); }
       else       {  audienceout();        }    goto question4;       }
else  {     optionsare5();    goto question4;   }
 }
question5:
    clrscr();     disp_score();
if(fifty==2)  {    lifeline_fifty();  }
if(audience==0)  {    lifeline_audience();  }  space();
    cout<<"\t(5)Who developed binary number system?"<<endl;
if(fifty!=5)  {
    cout<<"\n\tOptions are  (1) Bill Gates\t (2) Francis Bacon\n\t             (3) Veitch\t             (4) Thevenins"<<endl;
    space2();
    answer=getche();
 if(answer=='2')
  {    correctanswer();    goto question6;  }
 if(answer=='1' ||answer=='3' ||answer=='4')
  {    wronganswer();    goto end;  }
else if(answer=='5')
  {  if(fifty==2)    { fiftyshow(); fifty=fifty+3;  goto question5;    }
    else    {fiftyout();    goto question5;    }  }
else if(answer=='6')
   {    if(audience!=5)
       {    audienceshow();  audience=5; 
    A1=15, A2=60, A3=12, A4=13;
    audiencevote(A1,A2,A3,A4);     }
       else       {  audienceout();       }
    goto question5;     }
    else    {    optionsare();      goto question5;     }     }
 if(fifty==5)
    {    cout<<"\n\tOptions are  (1)Francis Bacon\t(2) Veitch"<<endl;
    space2();
    answer=getche();
 if(answer=='1')
   {    correctanswer();     fifty=fifty+5;    goto question6;     }  
else if(answer=='2')
   {    wronganswer();     fifty=fifty+5;    goto end;;     }  
else if(answer=='5')
   {    fiftyout();     goto question5;     }  
else if(answer=='6')
   {    if(audience!=5)       {   audienceshow();      audience=5;
    A1=15, A2=60, A3=12, A4=13;
    audiencevote(A1,A2,A3,A4); }
       else       {  audienceout();        }    goto question5;       }
else  {     optionsare5();    goto question5;   }
 }
question6:
    clrscr();     disp_score();
if(fifty==2)  {    lifeline_fifty();  }
if(audience==0)  {    lifeline_audience();  }  space();
    cout<<"\t(6)Who wrote the original DOS?(Before MS-DOS)"<<endl;
if(fifty!=5)  {
    cout<<"\n\tOptions are  (1) Edwin\t (2) Hilton\n\t             (3) Tem Patterson\t (4) Tim Patterson"<<endl;
    space2();
    answer=getche();
 if(answer=='4')
  {    correctanswer();    goto question7;  }
 if(answer=='1' ||answer=='2' ||answer=='3')
  {    wronganswer();    goto end;  }
else if(answer=='5')
  {  if(fifty==2)    { fiftyshow(); fifty=fifty+3;  goto question6;    }
    else    {fiftyout();    goto question6;    }  }
else if(answer=='6')
   {    if(audience!=5)
       {    audienceshow();  audience=5; 
    A1=20, A2=18, A3=30, A4=32;
    audiencevote(A1,A2,A3,A4);     }
       else       {  audienceout();       }
    goto question6;     }
    else    {    optionsare();      goto question6;     }     }
 if(fifty==5)
    {    cout<<"\n\tOptions are  (1)Tim Patterson\t(2) Tem Patterson"<<endl;
    space2();
    answer=getche();
 if(answer=='1')
   {    correctanswer();     fifty=fifty+5;    goto question7;     }  
else if(answer=='2')
   {    wronganswer();     fifty=fifty+5;    goto end;;     }  
else if(answer=='5')
   {    fiftyout();     goto question6;     }  
else if(answer=='6')
   {    if(audience!=5)       {   audienceshow();      audience=5;
    A1=20, A2=18, A3=30, A4=32;
    audiencevote(A1,A2,A3,A4); }
       else       {  audienceout();        }    goto question6;       }
else  {     optionsare5();    goto question6;   }
 }
question7:
    clrscr();     disp_score();
if(fifty==2)  {    lifeline_fifty();  }
if(audience==0)  {    lifeline_audience();  }  space();
    cout<<"\t(7)How many satellites were needed to send the message thro' irridium phone?"<<endl;
if(fifty!=5)  {
    cout<<"\n\tOptions are  (1) 5\t (2) 77\n\t             (3) 45\t (4) 18"<<endl;
    space2();
    answer=getche();
 if(answer=='2')
  {    correctanswer();    goto question8;  }
 if(answer=='1' ||answer=='3' ||answer=='4')
  {    wronganswer();    goto end;  }
else if(answer=='5')
  {  if(fifty==2)    { fiftyshow(); fifty=fifty+3;  goto question7;    }
    else    {fiftyout();    goto question7;    }  }
else if(answer=='6')
   {    if(audience!=5)
       {    audienceshow();  audience=5; 
    A1=30, A2=33, A3=23, A4=14;
    audiencevote(A1,A2,A3,A4);     }
       else       {  audienceout();       }
    goto question7;     }
    else    {    optionsare();      goto question7;     }     }
 if(fifty==5)
    {    cout<<"\n\tOptions are  (1)5\t(2) 77"<<endl;
    space2();
    answer=getche();
 if(answer=='1')
   {    wronganswer();     fifty=fifty+5;    goto end;;     }  
else if(answer=='2')
   {    correctanswer();     fifty=fifty+5;    goto question8;     }  
else if(answer=='5')
   {    fiftyout();     goto question7;     }  
else if(answer=='6')
   {    if(audience!=5)       {   audienceshow();      audience=5;
    A1=30, A2=33, A3=23, A4=14;
    audiencevote(A1,A2,A3,A4); }
       else       {  audienceout();        }    goto question7;       }
else  {     optionsare5();    goto question7;   }
 }
question8:
    clrscr();     disp_score();
if(fifty==2)  {    lifeline_fifty();  }
if(audience==0)  {    lifeline_audience();  }  space();
    cout<<"\t(8)Which of following is not the characteristics for being oops?"<<endl;
if(fifty!=5)  {
    cout<<"\n\tOptions are  (1) Inheritance\t (2) Methods & messages\n\t             (3) Entapsulation\t(4) Class & Object"<<endl;
    space2();
    answer=getche();
 if(answer=='3')
  {    correctanswer();    goto question9;  }
 if(answer=='1' ||answer=='2' ||answer=='4')
  {    wronganswer();    goto end;  }
else if(answer=='5')
  {  if(fifty==2)    { fiftyshow(); fifty=fifty+3;  goto question8;    }
    else    {fiftyout();    goto question8;    }  }
else if(answer=='6')
   {    if(audience!=5)
       {    audienceshow();  audience=5; 
    A1=11, A2=30, A3=47, A4=12;
    audiencevote(A1,A2,A3,A4);     }
       else       {  audienceout();       }
    goto question8;     }
    else    {    optionsare();      goto question8;     }     }
 if(fifty==5)
    {    cout<<"\n\tOptions are  (1)Methods & messages\t(2) Entapsulation"<<endl;
    space2();
    answer=getche();
 if(answer=='1')
   {    wronganswer();     fifty=fifty+5;    goto end;;     }  
else if(answer=='2')
   {    correctanswer();     fifty=fifty+5;    goto question9;     }  
else if(answer=='5')
   {    fiftyout();     goto question8;     }  
else if(answer=='6')
   {    if(audience!=5)       {   audienceshow();      audience=5;
    A1=11, A2=30, A3=47, A4=12;
    audiencevote(A1,A2,A3,A4); }
       else       {  audienceout();        }    goto question8;       }
else  {     optionsare5();    goto question8;   }
 }
question9:
    clrscr();     disp_score();
if(fifty==2)  {    lifeline_fifty();  }
if(audience==0)  {    lifeline_audience();  }  space();
    cout<<"\t(9)The ASCII code of 'A' is ....."<<endl;
if(fifty!=5)  {
    cout<<"\n\tOptions are  (1) 1000001\t (2) 1100001\n\t             (3) 1100010\t(4) 1100100"<<endl;
    space2();
    answer=getche();
 if(answer=='1')
  {    correctanswer();    goto question10;  }
 if(answer=='2' ||answer=='3' ||answer=='4')
  {    wronganswer();    goto end;  }
else if(answer=='5')
  {  if(fifty==2)    { fiftyshow(); fifty=fifty+3;  goto question9;    }
    else    {fiftyout();    goto question9;    }  }
else if(answer=='6')
   {    if(audience!=5)
       {    audienceshow();  audience=5; 
    A1=36, A2=35, A3=8, A4=21;
    audiencevote(A1,A2,A3,A4);     }
       else       {  audienceout();       }
    goto question9;     }
    else    {    optionsare();      goto question9;     }     }
 if(fifty==5)
    {    cout<<"\n\tOptions are  (1)1000001\t(2) 1100100"<<endl;
    space2();
    answer=getche();
 if(answer=='1')
   {    correctanswer();     fifty=fifty+5;    goto question10;     }  
else if(answer=='2')
   {    wronganswer();     fifty=fifty+5;    goto end;;     }  
else if(answer=='5')
   {    fiftyout();     goto question9;     }  
else if(answer=='6')
   {    if(audience!=5)       {   audienceshow();      audience=5;
    A1=36, A2=35, A3=8, A4=21;
    audiencevote(A1,A2,A3,A4); }
       else       {  audienceout();        }    goto question9;       }
else  {     optionsare5();    goto question9;   }
 }

question10:


end:
itscore=score;
getch();
over:
itover=100;
//donot insert question below it
return(0);
}
history_geography()
{
//clreol();
//int answer,fifty;
//int A1=0,A2=0,A3=0,A4=0;
//static int audience;
//audience=0;  fifty=2; score=0;
//if(gover==100) {  ruleblock(); goto over;   }
//fill down here

//end:
//gscore=score;
//getch();
//over:
//gover=100;
return(0);
}

imp_dates()
{
//clreol();
//int answer,fifty;
//int A1=0,A2=0,A3=0,A4=0;
//static int audience;
//audience=0;  fifty=2; score=0;
//if(idover==100) {  ruleblock(); goto over;   }
//fill down here


//end:
//idscore=score;
//getch();
//over:
//idover=100;
return(0);
}

science()
{    /*
clreol();
int answer=0;
static int audience,fifty,A1=0,A2=0,A3=0,A4=0;
audience=0; score=0; fifty=2;
if(sover==100) {  ruleblock(); goto over;   }



end:
sscore=score;
getch();
over:
sover=100;        */
return(0);
}

sports_enterntainment()
{
clreol();
int answer,fifty;
int A1=0,A2=0,A3=0,A4=0;
static int audience;
audience=0;  fifty=2; score=0;
if(aeover==100) {  ruleblock(); goto over;   }
//fill down here
question1:
    clrscr();     disp_score();
if(fifty==2)  {    lifeline_fifty();  }
if(audience==0)  {    lifeline_audience();  }  space();
    cout<<"\t(1)Bob Marley died of cancer in 1981 at the age of...."<<endl;
if(fifty!=5)  {
    cout<<"\n\tOptions are  (1) 36\t (2)  42\n\t             (3) 38\t (4) 35"<<endl;
    space2();
    answer=getche();
 if(answer=='1')
  {    correctanswer();    goto question2;  }
 if(answer=='2' ||answer=='3' ||answer=='4')
  {    wronganswer();    goto end;  }
else if(answer=='5')
  {  if(fifty==2)    { fiftyshow(); fifty=fifty+3;  goto question1;    }
    else    {fiftyout();    goto question1;    }  }
else if(answer=='6')
   {    if(audience!=5)
       {    audienceshow();  audience=5; 
    A1=40, A2=10, A3=15, A4=35;
    audiencevote(A1,A2,A3,A4);     }
       else       {  audienceout();       }
    goto question1;     }
    else    {    optionsare();      goto question1;     }     }
 if(fifty==5)
    {    cout<<"\n\tOptions are  (1)36\t (2) 35"<<endl;
    space2();
    answer=getche();
 if(answer=='1')
   {    correctanswer();     fifty=fifty+5;    goto question2;     }  
else if(answer=='2')
   {    wronganswer();     fifty=fifty+5;    goto end;;     }  
else if(answer=='5')
   {    fiftyout();     goto question1;     }  
else if(answer=='6')
   {    if(audience!=5)       {   audienceshow();      audience=5;
    A1=40, A2=10, A3=15, A4=35;
    audiencevote(A1,A2,A3,A4); }
       else       {  audienceout();        }    goto question1;       }
else  {     optionsare5();    goto question1;   }
 }
question2:
    clrscr();     disp_score();
if(fifty==2)  {    lifeline_fifty();  }
if(audience==0)  {    lifeline_audience();  }  space();
    cout<<"\t(2)The movie that win Oscar Award in 1997 is....."<<endl;
if(fifty!=5)  {
    cout<<"\n\tOptions are  (1) Gladiator\t (2) American Beauty\n\t             (3) Titanic\t (4) The God father-2"<<endl;
    space2();
    answer=getche();
 if(answer=='3')
  {    correctanswer();    goto question3;  }
 if(answer=='1' ||answer=='2' ||answer=='4')
  {    wronganswer();    goto end;  }
else if(answer=='5')
  {  if(fifty==2)    { fiftyshow(); fifty=fifty+3;  goto question2;    }
    else    {fiftyout();    goto question2;    }  }
else if(answer=='6')
   {    if(audience!=5)
       {    audienceshow();  audience=5; 
    A1=15, A2=30, A3=40, A4=15;
    audiencevote(A1,A2,A3,A4);     }
       else       {  audienceout();       }
    goto question2;     }
    else    {    optionsare();      goto question2;     }     }
 if(fifty==5)
    {    cout<<"\n\tOptions are  (1)Titanic\t(2) American Beauty"<<endl;
    space2();
    answer=getche();
 if(answer=='1')
   {    correctanswer();     fifty=fifty+5;    goto question3;     }  
else if(answer=='2')
   {    wronganswer();     fifty=fifty+5;    goto end;;     }  
else if(answer=='5')
   {    fiftyout();     goto question2;     }  
else if(answer=='6')
   {    if(audience!=5)       {   audienceshow();      audience=5;
    A1=15, A2=30, A3=40, A4=15;
    audiencevote(A1,A2,A3,A4); }
       else       {  audienceout();        }    goto question2;       }
else  {     optionsare5();    goto question2;   }
 }
question3:
    clrscr();     disp_score();
if(fifty==2)  {    lifeline_fifty();  }
if(audience==0)  {    lifeline_audience();  }  space();
    cout<<"\t(3)The most successful movie of Shah .R.Khan in 1995 is...."<<endl;
if(fifty!=5)  {
    cout<<"\n\tOptions are  (1) D.Dulhaniya Le jayenge\t (2) Dil to pagal hai\n\t             (3) Kuch kuch hota hai\t (4) Koila"<<endl;
    space2();
    answer=getche();
 if(answer=='1')
  {    correctanswer();    goto question4;  }
 if(answer=='2' ||answer=='3' ||answer=='4')
  {    wronganswer();    goto end;  }
else if(answer=='5')
  {  if(fifty==2)    { fiftyshow(); fifty=fifty+3;  goto question3;    }
    else    {fiftyout();    goto question3;    }  }
else if(answer=='6')
   {    if(audience!=5)
       {    audienceshow();  audience=5; 
    A1=60, A2=5, A3=33, A4=2;
    audiencevote(A1,A2,A3,A4);     }
       else       {  audienceout();       }
    goto question3;     }
    else    {    optionsare();      goto question3;     }     }
 if(fifty==5)
    {    cout<<"\n\tOptions are  (1)D.Dulhaniya Le jayenge\t(2) Dil to pagal hai"<<endl;
    space2();
    answer=getche();
 if(answer=='1')
   {    correctanswer();     fifty=fifty+5;    goto question4;     }  
else if(answer=='2')
   {    wronganswer();     fifty=fifty+5;    goto end;;     }  
else if(answer=='5')
   {    fiftyout();     goto question3;     }  
else if(answer=='6')
   {    if(audience!=5)       {   audienceshow();      audience=5;
    A1=60, A2=5, A3=33, A4=2;
    audiencevote(A1,A2,A3,A4); }
       else       {  audienceout();        }    goto question3;       }
else  {     optionsare5();    goto question3;   }
 }
question4:
    clrscr();     disp_score();
if(fifty==2)  {    lifeline_fifty();  }
if(audience==0)  {    lifeline_audience();  }  space();
    cout<<"\t(4)The Beatles Pop group which become famous in 1960 is originated in ..."<<endl;
if(fifty!=5)  {
    cout<<"\n\tOptions are  (1) USA\t (2) Britan\n\t             (3) Ireland\t (4) Canada"<<endl;
    space2();
    answer=getche();
 if(answer=='2')
  {    correctanswer();    goto question5;  }
 if(answer=='1' ||answer=='3' ||answer=='4')
  {    wronganswer();    goto end;  }
else if(answer=='5')
  {  if(fifty==2)    { fiftyshow(); fifty=fifty+3;  goto question4;    }
    else    {fiftyout();    goto question4;    }  }
else if(answer=='6')
   {    if(audience!=5)
       {    audienceshow();  audience=5; 
    A1=35, A2=30, A3=15, A4=20;
    audiencevote(A1,A2,A3,A4);     }
       else       {  audienceout();       }
    goto question4;     }
    else    {    optionsare();      goto question4;     }     }
 if(fifty==5)
    {    cout<<"\n\tOptions are  (1)USA\t(2) Britan"<<endl;
    space2();
    answer=getche();
 if(answer=='1')
   {    wronganswer();     fifty=fifty+5;    goto end;;     }  
else if(answer=='2')
   {    correctanswer();     fifty=fifty+5;    goto question5;     }  
else if(answer=='5')
   {    fiftyout();     goto question4;     }  
else if(answer=='6')
   {    if(audience!=5)       {   audienceshow();      audience=5;
    A1=35, A2=30, A3=15, A4=20;
    audiencevote(A1,A2,A3,A4); }
       else       {  audienceout();        }    goto question4;       }
else  {     optionsare5();    goto question4;   }
 }

question5:
    clrscr();     disp_score();
if(fifty==2)  {    lifeline_fifty();  }
if(audience==0)  {    lifeline_audience();  }  space();
    cout<<"\t(5)Aashu Kabi the title belongs to  ....."<<endl;
if(fifty!=5)  {
    cout<<"\n\tOptions are  (1) Gopal Prasad Rimal\t (2) Bairagi Kaila\n\t             (3) Shambu Prasad Dhungel\t (4) Dharma Raj Thapa"<<endl;
    space2();
    answer=getche();
 if(answer=='3')
  {    correctanswer();    goto question6;  }
 if(answer=='1' ||answer=='2' ||answer=='4')
  {    wronganswer();    goto end;  }
else if(answer=='5')
  {  if(fifty==2)    { fiftyshow(); fifty=fifty+3;  goto question5;    }
    else    {fiftyout();    goto question5;    }  }
else if(answer=='6')
   {    if(audience!=5)
       {    audienceshow();  audience=5; 
    A1=10, A2=33, A3=42, A4=15;
    audiencevote(A1,A2,A3,A4);     }
       else       {  audienceout();       }
    goto question5;     }
    else    {    optionsare();      goto question5;     }     }
 if(fifty==5)
    {    cout<<"\n\tOptions are  (1)Bairagi Kaila\t(2) Shambu Prasad Dhungel"<<endl;
    space2();
    answer=getche();
 if(answer=='1')
   {    wronganswer();     fifty=fifty+5;    goto end;;     }  
else if(answer=='2')
   {    correctanswer();     fifty=fifty+5;    goto question6;     }  
else if(answer=='5')
   {    fiftyout();     goto question5;     }  
else if(answer=='6')
   {    if(audience!=5)       {   audienceshow();      audience=5;
    A1=10, A2=33, A3=42, A4=15;
    audiencevote(A1,A2,A3,A4); }
       else       {  audienceout();        }    goto question5;       }
else  {     optionsare5();    goto question5;   }
 }
question6:
    clrscr();     disp_score();
if(fifty==2)  {    lifeline_fifty();  }
if(audience==0)  {    lifeline_audience();  }  space();
    cout<<"\t(6)Kaukuti a satirical essay is written by......."<<endl;
if(fifty!=5)  {
    cout<<"\n\tOptions are  (1) Bhairab Arayal\t (2) B.P.Koirala\n\t             (3) Siddhi charan Shrestha\t(4) Leknath Paudyel"<<endl;
    space2();
    answer=getche();
 if(answer=='1')
  {    correctanswer();    goto question7;  }
 if(answer=='2' ||answer=='3' ||answer=='4')
  {    wronganswer();    goto end;  }
else if(answer=='5')
  {  if(fifty==2)    { fiftyshow(); fifty=fifty+3;  goto question6;    }
    else    {fiftyout();    goto question6;    }  }
else if(answer=='6')
   {    if(audience!=5)
       {    audienceshow();  audience=5; 
    A1=70, A2=5, A3=22, A4=3;
    audiencevote(A1,A2,A3,A4);     }
       else       {  audienceout();       }
    goto question6;     }
    else    {    optionsare();      goto question6;     }     }
 if(fifty==5)
    {    cout<<"\n\tOptions are  (1)Bhairab Arayal\t(2) B.P.Koirala"<<endl;
    space2();
    answer=getche();
 if(answer=='1')
   {    correctanswer();     fifty=fifty+5;    goto question7;     }  
else if(answer=='2')
   {    wronganswer();     fifty=fifty+5;    goto end;;     }  
else if(answer=='5')
   {    fiftyout();     goto question6;     }  
else if(answer=='6')
   {    if(audience!=5)       {   audienceshow();      audience=5;
    A1=70, A2=5, A3=22, A4=3;
    audiencevote(A1,A2,A3,A4); }
       else       {  audienceout();        }    goto question6;       }
else  {     optionsare5();    goto question6;   }
 }
question7:
    clrscr();     disp_score();
if(fifty==2)  {    lifeline_fifty();  }
if(audience==0)  {    lifeline_audience();  }  space();
    cout<<"\t(7)Hari B. Acharya & Madan K.Shrestha lunched their combine program after 2038 B.S. is known as ..."<<endl;
if(fifty!=5)  {
    cout<<"\n\tOptions are  (1) Sur-Besur\t (2) Pandra Gatei\n\t             (3) Maha\t (4) Yamlok"<<endl;
    space2();
    answer=getche();
 if(answer=='3')
  {    correctanswer();    goto question8;  }
 if(answer=='1' ||answer=='2' ||answer=='4')
  {    wronganswer();    goto end;  }
else if(answer=='5')
  {  if(fifty==2)    { fiftyshow(); fifty=fifty+3;  goto question7;    }
    else    {fiftyout();    goto question7;    }  }
else if(answer=='6')
   {    if(audience!=5)
       {    audienceshow();  audience=5; 
    A1=25, A2=12, A3=52, A4=11;
    audiencevote(A1,A2,A3,A4);     }
       else       {  audienceout();       }
    goto question7;     }
    else    {    optionsare();      goto question7;     }     }
 if(fifty==5)
    {    cout<<"\n\tOptions are  (1)Sur-Besur\t(2) Maha"<<endl;
    space2();
    answer=getche();
 if(answer=='1')
   {    wronganswer();     fifty=fifty+5;    goto end;;     }  
else if(answer=='2')
   {    correctanswer();     fifty=fifty+5;    goto question8;     }  
else if(answer=='5')
   {    fiftyout();     goto question7;     }  
else if(answer=='6')
   {    if(audience!=5)       {   audienceshow();      audience=5;
    A1=25, A2=12, A3=52, A4=11;
    audiencevote(A1,A2,A3,A4); }
       else       {  audienceout();        }    goto question7;       }
else  {     optionsare5();    goto question7;   }
 }
question8:
    clrscr();     disp_score();
if(fifty==2)  {    lifeline_fifty();  }
if(audience==0)  {    lifeline_audience();  }  space();
    cout<<"\t(8)The singer who won New Artist of the year & Female pop Artist of the Image Award 2004 is....."<<endl;
if(fifty!=5)  {
    cout<<"\n\tOptions are  (1) Mausami Gurung\t (2) Nalina Chitrakar\n\t             (3) Dipa Jha\t(4) Preeti Kaur"<<endl;
    space2();
    answer=getche();
 if(answer=='1')
  {    correctanswer();    goto question9;  }
 if(answer=='2' ||answer=='3' ||answer=='4')
  {    wronganswer();    goto end;  }
else if(answer=='5')
  {  if(fifty==2)    { fiftyshow(); fifty=fifty+3;  goto question8;    }
    else    {fiftyout();    goto question8;    }  }
else if(answer=='6')
   {    if(audience!=5)
       {    audienceshow();  audience=5; 
    A1=39, A2=11, A3=7, A4=43;
    audiencevote(A1,A2,A3,A4);     }
       else       {  audienceout();       }
    goto question8;     }
    else    {    optionsare();      goto question8;     }     }
 if(fifty==5)
    {    cout<<"\n\tOptions are  (1)Mausami Gurung\t(2) Preeti Kaur"<<endl;
    space2();
    answer=getche();
 if(answer=='1')
   {    correctanswer();     fifty=fifty+5;    goto question9;     }  
else if(answer=='2')
   {    wronganswer();     fifty=fifty+5;    goto end;;     }  
else if(answer=='5')
   {    fiftyout();     goto question8;     }  
else if(answer=='6')
   {    if(audience!=5)       {   audienceshow();      audience=5;
    A1=39, A2=11, A3=7, A4=43;
    audiencevote(A1,A2,A3,A4); }
       else       {  audienceout();        }    goto question8;       }
else  {     optionsare5();    goto question8;   }
 }

question9:
    clrscr();     disp_score();
if(fifty==2)  {    lifeline_fifty();  }
if(audience==0)  {    lifeline_audience();  }  space();
    cout<<"\t(9)Find the name of river from the word anagrams(Nepal)."<<endl;
if(fifty!=5)  {
    cout<<"\n\tOptions are  (1) HOSKI\t (2) SENBAG\n\t             (3) HOLCITI\t(4) EHPWA"<<endl;
    space2();
    answer=getche();
 if(answer=='1')
  {    correctanswer();    goto question10;  }
 if(answer=='2' ||answer=='3' ||answer=='4')
  {    wronganswer();    goto end;  }
else if(answer=='5')
  {  if(fifty==2)    { fiftyshow(); fifty=fifty+3;  goto question9;    }
    else    {fiftyout();    goto question9;    }  }
else if(answer=='6')
   {    if(audience!=5)
       {    audienceshow();  audience=5; 
    A1=51, A2=12, A3=29, A4=8;
    audiencevote(A1,A2,A3,A4);     }
       else       {  audienceout();       }
    goto question9;     }
    else    {    optionsare();      goto question9;     }     }
 if(fifty==5)
    {    cout<<"\n\tOptions are  (1)HOSKI\t(2) SENBAG"<<endl;
    space2();
    answer=getche();
 if(answer=='1')
   {    correctanswer();     fifty=fifty+5;    goto question10;     }  
else if(answer=='2')
   {    wronganswer();     fifty=fifty+5;    goto end;;     }  
else if(answer=='5')
   {    fiftyout();     goto question9;     }  
else if(answer=='6')
   {    if(audience!=5)       {   audienceshow();      audience=5;
    A1=51, A2=12, A3=29, A4=8;
    audiencevote(A1,A2,A3,A4); }
       else       {  audienceout();        }    goto question9;       }
else  {     optionsare5();    goto question9;   }
 }
question10:
    clrscr();     disp_score();
if(fifty==2)  {    lifeline_fifty();  }
if(audience==0)  {    lifeline_audience();  }  space();
    cout<<"\t(10)Which well known Tennis palyer nicknamed `the mosquito'?"<<endl;
if(fifty!=5)  {
    cout<<"\n\tOptions are  (1) Aandra Aagase\t (2) Rozer Fedar\n\t             (3) Juan Ferraro\t(4) Richard Causton "<<endl;
    space2();
    answer=getche();
 if(answer=='3')
  {    correctanswer();    goto question11;  }
 if(answer=='1' ||answer=='2' ||answer=='4')
  {    wronganswer();    goto end;  }
else if(answer=='5')
  {  if(fifty==2)    { fiftyshow(); fifty=fifty+3;  goto question10;    }
    else    {fiftyout();    goto question10;    }  }
else if(answer=='6')
   {    if(audience!=5)
       {    audienceshow();  audience=5; 
    A1=10, A2=36, A3=50, A4=4;
    audiencevote(A1,A2,A3,A4);     }
       else       {  audienceout();       }
    goto question10;     }
    else    {    optionsare();      goto question10;     }     }
 if(fifty==5)
    {    cout<<"\n\tOptions are  (1)Aandra Aagase\t(2) Juan Ferraro"<<endl;
    space2();
    answer=getche();
 if(answer=='1')
   {    wronganswer();     fifty=fifty+5;    goto end;;     }  
else if(answer=='2')
   {    correctanswer();     fifty=fifty+5;    goto question11;     }  
else if(answer=='5')
   {    fiftyout();     goto question10;     }  
else if(answer=='6')
   {    if(audience!=5)       {   audienceshow();      audience=5;
    A1=10, A2=36, A3=50, A4=4;
    audiencevote(A1,A2,A3,A4); }
       else       {  audienceout();        }    goto question10;       }
else  {     optionsare5();    goto question10;   }
 }
question11:
    clrscr();     disp_score();
if(fifty==2)  {    lifeline_fifty();  }
if(audience==0)  {    lifeline_audience();  }  space();
    cout<<"\t(11)Who is the first Nepali male singer of Radio Nepal?"<<endl;
if(fifty!=5)  {
    cout<<"\n\tOptions are  (1) Hari Prasad Rimal\t (2) Rabin Shrma\n\t             (3) Kali Prasad Rijal\t(4) Nati kagi"<<endl;
    space2();
    answer=getche();
 if(answer=='1')
  {    correctanswer();    goto question12;  }
 if(answer=='2' ||answer=='3' ||answer=='4')
  {    wronganswer();    goto end;  }
else if(answer=='5')
  {  if(fifty==2)    { fiftyshow(); fifty=fifty+3;  goto question11;    }
    else    {fiftyout();    goto question11;    }  }
else if(answer=='6')
   {    if(audience!=5)
       {    audienceshow();  audience=5; 
    A1=55, A2=10, A3=15, A4=20;
    audiencevote(A1,A2,A3,A4);     }
       else       {  audienceout();       }
    goto question11;     }
    else    {    optionsare();      goto question11;     }     }
 if(fifty==5)
    {    cout<<"\n\tOptions are  (1)Hari Prasad Rimal\t(2) Nati kagi"<<endl;
    space2();
    answer=getche();
 if(answer=='1')
   {    correctanswer();     fifty=fifty+5;    goto question12;     }  
else if(answer=='2')
   {    wronganswer();     fifty=fifty+5;    goto end;;     }  
else if(answer=='5')
   {    fiftyout();     goto question11;     }  
else if(answer=='6')
   {    if(audience!=5)       {   audienceshow();      audience=5;
    A1=55, A2=10, A3=15, A4=20;
    audiencevote(A1,A2,A3,A4); }
       else       {  audienceout();        }    goto question11;       }
else  {     optionsare5();    goto question11;   }
 }
question12:
    clrscr();     disp_score();
if(fifty==2)  {    lifeline_fifty();  }
if(audience==0)  {    lifeline_audience();  }  space();
    cout<<"\t(12)The country which won ICC world cup in 1999 is ....."<<endl;
if(fifty!=5)  {
    cout<<"\n\tOptions are  (1) West indies\t (2) Pakistan\n\t             (3) India\t(4) Australia"<<endl;
    space2();
    answer=getche();
 if(answer=='4')
  {    correctanswer();    goto question13;  }
 if(answer=='1' ||answer=='2' ||answer=='3')
  {    wronganswer();    goto end;  }
else if(answer=='5')
  {  if(fifty==2)    { fiftyshow(); fifty=fifty+3;  goto question12;    }
    else    {fiftyout();    goto question12;    }  }
else if(answer=='6')
   {    if(audience!=5)
       {    audienceshow();  audience=5; 
    A1=10, A2=15, A3=24, A4=51;
    audiencevote(A1,A2,A3,A4);     }
       else       {  audienceout();       }
    goto question12;     }
    else    {    optionsare();      goto question12;     }     }
 if(fifty==5)
    {    cout<<"\n\tOptions are  (1)India\t(2) Australia"<<endl;
    space2();
    answer=getche();
 if(answer=='1')
   {    wronganswer();     fifty=fifty+5;    goto end;;     }  
else if(answer=='2')
   {    correctanswer();     fifty=fifty+5;    goto question13;     }  
else if(answer=='5')
   {    fiftyout();     goto question12;     }  
else if(answer=='6')
   {    if(audience!=5)       {   audienceshow();      audience=5;
    A1=10, A2=15, A3=24, A4=51;
    audiencevote(A1,A2,A3,A4); }
       else       {  audienceout();        }    goto question12;       }
else  {     optionsare5();    goto question12;   }
 }
question13:
    clrscr();     disp_score();
if(fifty==2)  {    lifeline_fifty();  }
if(audience==0)  {    lifeline_audience();  }  space();
    cout<<"\t(13)Who is known as Pioneer Poet of Nepal?"<<endl;
if(fifty!=5)  {
    cout<<"\n\tOptions are  (1) Moti ram Bhatt\t (2) Motti Bhatt\n\t             (3) Bhanu bhakta\t(4) L.P.Devkota"<<endl;
    space2();
    answer=getche();
 if(answer=='3')
  {    correctanswer();    goto question14;  }
 if(answer=='1' ||answer=='2' ||answer=='4')
  {    wronganswer();    goto end;  }
else if(answer=='5')
  {  if(fifty==2)    { fiftyshow(); fifty=fifty+3;  goto question13;    }
    else    {fiftyout();    goto question13;    }  }
else if(answer=='6')
   {    if(audience!=5)
       {    audienceshow();  audience=5; 
    A1=37, A2=2, A3=53, A4=8;
    audiencevote(A1,A2,A3,A4);     }
       else       {  audienceout();       }
    goto question13;     }
    else    {    optionsare();      goto question13;     }     }
 if(fifty==5)
    {    cout<<"\n\tOptions are  (1)Moti ram Bhatt\t(2) Bhanu bhakta"<<endl;
    space2();
    answer=getche();
 if(answer=='1')
   {    wronganswer();     fifty=fifty+5;    goto end;;     }  
else if(answer=='2')
   {    correctanswer();     fifty=fifty+5;    goto question14;     }  
else if(answer=='5')
   {    fiftyout();     goto question13;     }  
else if(answer=='6')
   {    if(audience!=5)       {   audienceshow();      audience=5;
    A1=37, A2=2, A3=53, A4=8;
    audiencevote(A1,A2,A3,A4); }
       else       {  audienceout();        }    goto question13;       }
else  {     optionsare5();    goto question13;   }
 }
question14:
end:
aescore=score;
getch();
over:
aeover=100;
return(0);
}