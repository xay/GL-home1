#include<glut.h>
void init (void){

  
	glColor3f(0.0,0.0,1.0);
	glPointSize(4.0);
	glMatrixMode(GL_PROJECTION);		
	gluOrtho2D(-5.0,5.0,-5.0,5.0);//keyboardAssign
	glOrtho(-1,1,-1,1,-1,1);//ModelView
	glMatrixMode(GL_MODELVIEW);
	glClearColor(1.0,1.0,1.0,0.0);
	glColor3f(0.0,0.0,1.0);
	glMatrixMode(GL_PROJECTION);
	gluOrtho2D(-5.0,5.0,-5.0,5.0);//keyboardAssign
	glLoadIdentity();
	gluOrtho2D(0.0,830.0,0.0,1080.0);
}
void myDisplay(void)
{
	glClear(GL_COLOR_BUFFER_BIT);//KeyboardAssign
	glPushMatrix();//KeyboardAssign
	glEnd();//KeyboardAssign
	glBegin(GL_POLYGON);
	glColor3f(1.60,1.40,0.12);
	glVertex2i(48,58);
	glVertex2i(780,60);                    // si puen
	glVertex2i(780,1020);
	glVertex2i(48,1020);
	glEnd();
///////////////////
	glBegin(GL_POLYGON);
	glColor3f(0.0,1.0,0.0);
	glVertex2i(600,350);
	glVertex2i(400,650);
	glVertex2i(550,680);
	glVertex2i(750,400);                   // diam pam
	glEnd();
	/////////////
	glBegin(GL_POLYGON);			// thog rau ncoo
	glColor3f(0.3,0.6,0.8);
	glVertex2i(460,580);
	glVertex2i(405,660);
	glVertex2i(540,680);
	glVertex2i(560,670); 
	glVertex2i(585,610);                   
	glEnd();
	///////////////////
	glBegin(GL_LINES);
	glColor3f(0.0,0.0,0.0);
	glVertex2i(400,650);
	glVertex2i(550,680);                   // LAIY tieng norn 1
	glEnd();
	/////////////
	glBegin(GL_LINES);
	glColor3f(0.0,0.0,0.0);
	glVertex2i(550,680);
	glVertex2i(750,400);                   // LAIY tieng norn 2
	glEnd();
	/////////////

	glBegin(GL_POLYGON);         // las txaj ntev
	glColor3f(1.98,0.04,0.70);
	glVertex2i(600,350);
	glVertex2i(600,300);
	glVertex2i(400,600);
	glVertex2i(400,650);

	glEnd();

	////////////////////

	glBegin(GL_POLYGON);         // kar khop tieng roup 1
	glColor3f(0.98,0.04,0.70);
	glVertex2i(600,300);
	glVertex2i(585,340);
	glVertex2i(585,260);
	glVertex2i(600,240);

	glEnd();

	////////////////////

	glBegin(GL_POLYGON);         // kar khop tieng roup 2
	glColor3f(0.98,0.04,0.70);
	glVertex2i(600,300);
	glVertex2i(612,305);
	glVertex2i(612,240);
	glVertex2i(600,240);

	glEnd();

	////////////////////

	glBegin(GL_LINES);         // kar khop tieng roup 3
	glColor3f(0.0,0.0,0.0);
	glVertex2i(600,300);
	glVertex2i(600,240);

	glEnd();
	/////////////////

	glBegin(GL_LINES);         // kar khop tieng roup 4
	glColor3f(0.0,0.0,0.0);
	glVertex2i(612,240);
	glVertex2i(600,240);

	glEnd();
	///////////////////

	
	glBegin(GL_LINES);         // kar khop tieng roup 5
	glColor3f(0.0,0.0,0.0);
	glVertex2i(612,240);
	glVertex2i(612,305);

	glEnd();
	/////////////

	glBegin(GL_LINES);         // kar khop tieng roup 6
	glColor3f(0.0,0.0,0.0);
	glVertex2i(600,300);
	glVertex2i(612,302);

	glEnd();

	//////////////////


	glBegin(GL_POLYGON);         // kar khop tieng roup kua 1
	glColor3f(0.98,0.04,0.70);
	glVertex2i(750,350);
	glVertex2i(750,280);
	glVertex2i(740,280);
	glVertex2i(740,348);
	glEnd();

	/////////////////

	glBegin(GL_POLYGON);         // kar khop tieng roup kua 2
	glColor3f(0.98,0.04,0.70);
	glVertex2i(740,348);
	glVertex2i(725,340);
	glVertex2i(725,300);
	glVertex2i(740,280);
	glEnd();

	/////////////////
    
	glBegin(GL_LINES);         // kar khop tieng roup kua 3
	glColor3f(0.0,0.0,0.0);
	glVertex2i(750,350);
	glVertex2i(750,280);
	glEnd();

	/////////////////

	glBegin(GL_LINES);         // kar khop tieng roup kua 4
	glColor3f(0.0,0.0,0.0);
	glVertex2i(740,280);
	glVertex2i(740,348);
	glEnd();

	////////////////

	glBegin(GL_LINES);         // kar khop tieng roup kua 5
	glColor3f(0.0,0.0,0.0);
	glVertex2i(750,348);
	glVertex2i(740,345);
	glEnd();

	/////////////////
	glBegin(GL_LINES);         // kar khop tieng roup kua 1
	glColor3f(0.0,0.0,0.0);
	glVertex2i(750,280);
	glVertex2i(740,280);
	glEnd();

	/////////////////

	glBegin(GL_POLYGON);         // kar khop tieng3
	glColor3f(0.98,0.04,0.70);
	glVertex2i(400,600);
	glVertex2i(414,580);
	glVertex2i(414,520);
	glVertex2i(400,540);

	glEnd();

	////////////////////
	glBegin(GL_POLYGON);         // kar khop tieng4
	glColor3f(0.98,0.04,0.70);
	glVertex2i(414,580);
	glVertex2i(425,560);
	glVertex2i(425,520);
	glVertex2i(414,520);

	glEnd();
	/////////////////

	glBegin(GL_LINES);         //  laiy kar khop tieng5
	glColor3f(0.0,0.0,0.0);
	glVertex2i(414,580);
	glVertex2i(414,520);

	glEnd();
	
	/////////////////

	glBegin(GL_LINES);         //  laiy kar khop tieng6
	glColor3f(0.0,0.0,0.0);
	glVertex2i(414,580);
	glVertex2i(425,560);

	glEnd();
	/////////////////

	glBegin(GL_LINES);         // laiy kar khop tieng7
	glColor3f(0.0,0.0,0.0);
	glVertex2i(425,560);
	glVertex2i(425,520);

	glEnd();
	/////////////////

	glBegin(GL_LINES);         // laiy kar khop tieng8
	glColor3f(0.0,0.0,0.0);
	glVertex2i(425,520);
	glVertex2i(414,520);

	glEnd();
	/////////////////

	glBegin(GL_POLYGON);         // karng khop tieng1
	glColor3f(1.0,1.0,1.0);
	glVertex2i(600,350);
	glVertex2i(600,330);
	glVertex2i(400,630);
	glVertex2i(400,650);

	glEnd();
	////////////////////
	glBegin(GL_LINES);           // LAIY SIEN TIENG
	glColor3f(0.0,0.0,0.0);
	glVertex2i(600,350);
	glVertex2i(400,650);
	glEnd();

	////////////////
	////////////////////
	glBegin(GL_POLYGON);         // TUENG tieng
	glColor3f(1.98,0.04,0.70);
	glVertex2i(400,650);
	glVertex2i(400,670);
	glVertex2i(550,700);
	glVertex2i(550,680);
	glEnd();
	///////////////////////////////
	glBegin(GL_LINES);         // LAIY TUENG tieng
	glColor3f(0.98,0.04,0.70);
	glVertex2i(400,650);
	glVertex2i(400,670);
	glEnd();

	glBegin(GL_POLYGON);         // karng khop tieng2
	glColor3f(0.98,0.04,0.70);
	glVertex2i(600,350);
	glVertex2i(600,300);
	glVertex2i(750,350);
	glVertex2i(750,400);
	glEnd();
	//////////////////////
    glBegin(GL_POLYGON);         // karng khop tieng3
	glColor3f(1.0,1.0,1.0);
	glVertex2i(600,350);
	glVertex2i(600,330);
	glVertex2i(750,380);
	glVertex2i(750,400);
	glEnd();
	/////////////////////

	  glBegin(GL_LINES);         // LAIY TIENG 2
	glColor3f(0.0,0.0,0.0);
	glVertex2i(600,350);
	glVertex2i(750,400);
	glEnd();

	//////////

	  glBegin(GL_LINES);         // karng khop tieng
	glColor3f(0.0,0.0,0.0);
	glVertex2i(600,350);
	glVertex2i(600,330);
	glEnd();
	/////////////////////
glBegin(GL_POLYGON);         // phab xub ntsab sab haug
	glColor3f(3.98,0.625,1.12);
	glVertex2i(550,710);
	glVertex2i(550,1020);
	glVertex2i(780,1020);
	glVertex2i(780,400);

	glEnd();
	///////////////////////////////

	glBegin(GL_POLYGON);         // phab xub ntsab peb tau hauj
	glColor3f(3.98,0.625,1.12);
	glVertex2i(550,710);
	glVertex2i(550,1020);
	glVertex2i(50,1020);
	glVertex2i(50,600);

	glEnd();
	///////////////////////////////
	glBegin(GL_LINES);         // sien baeg  tieng 5
	glColor3f(0.0,0.0,0.0);
	glVertex2i(550,710);
	glVertex2i(50,600);

	glEnd();
	///////////////////////////////

	glBegin(GL_LINES);         // sien baeg  tieng 3
	glColor3f(0.0,0.0,0.0);
	glVertex2i(550,710);
	glVertex2i(550,1020);
	glEnd();
	///////////////////////////////

	glBegin(GL_LINES);         // sien baeg  tieng 4
	glColor3f(0.0,0.0,0.0);
	glVertex2i(550,710);
	glVertex2i(780,400);

	glEnd();

	/////////////////////////
	glBegin(GL_POLYGON);
	glColor3f(0.0,6.0,1.0);
	glVertex2i(130,850);
	glVertex2i(130,1010);
	glVertex2i(230,1010);
	glVertex2i(230,870);
	glVertex2i(130,850);
    glEnd();
	////////////////////
	glBegin(GL_POLYGON);
	glColor3f(0.0,6.0,1.0);
	glVertex2i(50,850);
	glVertex2i(110,850);
	glVertex2i(110,1010);
	glVertex2i(50,1010);
	glVertex2i(60,850);
	
    glEnd();

	
	glBegin(GL_POLYGON);
	glColor3f(0.0,6.0,1.0);
	glVertex2i(60,820);
	glVertex2i(110,820);
	glVertex2i(110,690);
	glVertex2i(60,680);
	glVertex2i(60,820);
    glEnd();
	///////////////////
	glBegin(GL_POLYGON);
	glColor3f(0.0,6.0,1.0);
	glVertex2i(130,820);
	glVertex2i(260,850);
	glVertex2i(260,710);
	glVertex2i(130,690);
	glVertex2i(130,820);
    glEnd();
	/////////////////////
	glBegin(GL_LINE_STRIP);
	glColor3f(0.0,0.0,0.0);
	glVertex2i(130,1011);
	glVertex2i(130,915);
	glVertex2i(130,845);
	glVertex2i(170,850);
	glVertex2i(210,860);
	glVertex2i(225,860);
    glEnd();
	///////////////////
	glBegin(GL_LINE_STRIP);
	glColor3f(0.0,0.0,0.0);
	glVertex2i(112,1013);
	glVertex2i(110,910);
	glVertex2i(110,870);
	glVertex2i(110,842);
	glVertex2i(60,840);
	glEnd();
	///////////////////
	glBegin(GL_LINE_STRIP);
	glColor3f(0.0,0.0,0.0);
	glVertex2i(60,820);
	glVertex2i(110,820);
	glVertex2i(110,682);
	glVertex2i(60,672);
	glEnd();
	///////////////////
	glBegin(GL_LINE_STRIP);
	glColor3f(0.0,0.0,0.0);
	glVertex2i(230,845);
	glVertex2i(130,820);
	glVertex2i(125,690);
	glVertex2i(230,705);
	glEnd();
	///////////////////
	glBegin(GL_LINES);
	glColor3f(0.0,0.0,0.0);
	glVertex2i(58,678);
	glVertex2i(220,700);
	glVertex2i(57,650);
	glVertex2i(178,670);
	glVertex2i(260,800);
	glVertex2i(260,720);
	glVertex2i(268,790);
	glVertex2i(268,710);
	glVertex2i(290,745);
	glVertex2i(290,710);
	glEnd();
	////////////////////////////
        // pa kung
	glBegin(GL_POLYGON);
	glColor3f(2.5,0.8,0.8);
	glVertex2i(220,1015);
	glVertex2i(210,1000);
	glVertex2i(210,940);
	glVertex2i(215,900);
	glVertex2i(220,870);
	glVertex2i(225,860);
	glVertex2i(230,860);
	glVertex2i(235,840);
	glVertex2i(240,830);
	glVertex2i(242,820);
	glVertex2i(250,810);
	glVertex2i(260,800);
	glVertex2i(270,790);
	glVertex2i(280,780);
	glVertex2i(290,778);
	glVertex2i(300,773);
	glVertex2i(310,772);
	glVertex2i(320,773);
	glVertex2i(330,778);
	glVertex2i(335,790);
	glVertex2i(280,780);
	glVertex2i(290,770);
	glVertex2i(300,760);
	glVertex2i(310,758);
	glVertex2i(330,765);
	glVertex2i(338,778);
	glVertex2i(360,1012);
	glVertex2i(365,1000);
	glVertex2i(370,970);
	glVertex2i(370,920);
	glVertex2i(365,900);
	glVertex2i(360,880);
	glVertex2i(270,1010);
	glVertex2i(268,1000);
	glVertex2i(265,990);
	glVertex2i(262,980);
	glVertex2i(260,960);
	glVertex2i(260,930);
	glVertex2i(258,900);
	glVertex2i(260,870);
	glVertex2i(270,830);
	glVertex2i(270,860);
	glVertex2i(275,840);
	glVertex2i(280,820);
	glVertex2i(290,800);
	glVertex2i(295,790);
	glVertex2i(300,780);
	glVertex2i(310,772);	
	glVertex2i(340,1015);
	glVertex2i(340,950);
	glVertex2i(340,950);
	glVertex2i(350,920);
	glVertex2i(350,900);
	glVertex2i(340,880);
	glEnd();
	///////////////////
	glBegin(GL_LINE_STRIP);
	glColor3f(0.98,0.04,0.70);
	glVertex2i(220,1015);
	glVertex2i(210,1000);
	glVertex2i(210,940);
	glVertex2i(215,900);
	glVertex2i(220,870);
	glVertex2i(225,860);
	glVertex2i(230,860);
	glVertex2i(235,840);
	glVertex2i(240,830);
	glVertex2i(242,820);
	glVertex2i(250,810);
	glVertex2i(260,800);
	glVertex2i(270,790);
	glVertex2i(280,780);
	glVertex2i(290,778);
	glVertex2i(300,773);
	glVertex2i(310,772);
	glVertex2i(320,773);
	glVertex2i(330,778);
	glVertex2i(335,790);
	glEnd();
	///////////////////
	glBegin(GL_LINE_STRIP);
	glColor3f(0.98,0.04,0.70);
	glVertex2i(360,1012);
	glVertex2i(365,1000);
	glVertex2i(370,970);
	glVertex2i(370,920);
	glVertex2i(365,900);
	glVertex2i(360,880);
	glEnd();
	///////////////////
	glBegin(GL_LINE_STRIP);
	glColor3f(0.98,0.04,0.70);
	glVertex2i(270,1010);
	glVertex2i(268,1000);
	glVertex2i(265,990);
	glVertex2i(262,980);
	glVertex2i(260,960);
	glVertex2i(260,930);
	glVertex2i(258,900);
	glVertex2i(260,870);
	glVertex2i(270,830);
	glEnd();
	///////////////////
	glBegin(GL_LINE_STRIP);
	glColor3f(0.98,0.04,0.70);
	glVertex2i(265,870);
	glVertex2i(270,860);
	glVertex2i(275,840);
	glVertex2i(280,820);
	glVertex2i(290,800);
	glVertex2i(295,790);
	glVertex2i(300,780);
	glVertex2i(310,772);
	glEnd();
	///////////////////
	glBegin(GL_LINE_STRIP);
	glColor3f(0.98,0.04,0.70);
	glVertex2i(340,1015);
	glVertex2i(340,950);
	glVertex2i(340,950);
	glVertex2i(350,920);
	glVertex2i(350,900);
	glVertex2i(340,880);
	glEnd();
	///////////////////
	glBegin(GL_LINE_STRIP);
	glColor3f(0.98,0.04,0.70);
	glVertex2i(280,780);
	glVertex2i(290,770);
	glVertex2i(300,760);
	glVertex2i(310,758);
	glVertex2i(330,765);
	glVertex2i(338,778);
	glEnd();
	///////////////////
	glBegin(GL_POLYGON);
	glColor3f(2.5,0.8,0.8);
	glVertex2i(280,780);
	glVertex2i(280,750);
	glVertex2i(295,740);
	glVertex2i(308,728);
	glVertex2i(320,730);
	glVertex2i(330,735);
	glVertex2i(335,740);
	glVertex2i(345,748);
	glEnd();
	///////////////////
	glBegin(GL_LINE_STRIP);
	glColor3f(0.98,0.04,0.70);
	glVertex2i(280,780);
	glVertex2i(280,750);
	glVertex2i(295,740);
	glVertex2i(308,728);
	glVertex2i(320,730);
	glVertex2i(330,735);
	glVertex2i(335,740);
	glVertex2i(345,748);
	glEnd();
	///////////////////
	glBegin(GL_POLYGON);
	glColor3f(2.5,0.8,0.8);
	glVertex2i(300,735);
	glVertex2i(290,710);
	glVertex2i(280,690);
	glVertex2i(272,660);
	glVertex2i(268,638);
	glVertex2i(280,630);
	glVertex2i(370,720);
	glVertex2i(340,800);
	glEnd();
	///////////////////	
	glBegin(GL_LINE_STRIP);
	glColor3f(0.98,0.04,0.70);
	glVertex2i(300,735);
	glVertex2i(290,710);
	glVertex2i(280,690);
	glVertex2i(272,660);
	glVertex2i(268,638);
	glVertex2i(280,630);
	glEnd();
///////////////////////////////////////////////////////////////////////
		// dok mai
	glBegin(GL_POLYGON);
	glColor3f(0.98,0.04,0.70);
	glVertex2i(255,1012);
	glVertex2i(250,1005);
	glVertex2i(260,998);
	glVertex2i(268,1000);
	glEnd();
	///////////////////
	glBegin(GL_LINE_STRIP);
	glColor3f(0.98,0.04,0.70);
	glVertex2i(255,1012);
	glVertex2i(250,1005);
	glVertex2i(260,998);
	glVertex2i(268,1000);
	glEnd();
///////////////////////////////
	glBegin(GL_POLYGON);
	glColor3f(0.98,0.04,0.70);
	glVertex2i(210,965);
	glVertex2i(228,958);
	glVertex2i(222,965);
	glVertex2i(230,970);
	glVertex2i(235,972);
	glVertex2i(240,962);
	glVertex2i(250,968);
	glVertex2i(258,960);
	glVertex2i(257,950);
	glVertex2i(245,950);
	glVertex2i(250,940);
	glVertex2i(240,930);
	glVertex2i(232,940);
	glVertex2i(225,930);
	glVertex2i(210,935);
	glVertex2i(220,950);
	glVertex2i(210,955);
	glEnd();
	///////////////////
	glBegin(GL_LINE_STRIP);
	glColor3f(0.98,0.04,0.70);
	glVertex2i(210,965);
	glVertex2i(228,958);
	glVertex2i(222,965);
	glVertex2i(230,970);
	glVertex2i(235,972);
	glVertex2i(240,962);               // dok
	glVertex2i(250,968);
	glVertex2i(258,960);
	glVertex2i(257,950);
	glVertex2i(245,950);
	glVertex2i(250,940);
	glVertex2i(240,930);
	glVertex2i(232,940);
	glVertex2i(225,930);
	glVertex2i(210,935);
	glVertex2i(220,950);
	glVertex2i(210,955);
	glEnd();
///////////////////////////////////////
	glBegin(GL_POLYGON);
	glColor3f(1.0,1.0,1.0);
	glVertex2i(228,950);
	glVertex2i(235,955);
	glVertex2i(240,950);
	glVertex2i(237,948);                    // jai
	glVertex2i(230,948);
	glVertex2i(228,950); 
    glEnd();
///////////////////
    glBegin(GL_LINE_STRIP);
	glColor3f(0.98,0.04,0.70);
	glVertex2i(228,950);
	glVertex2i(235,955);
	glVertex2i(240,950);
	glVertex2i(237,948);
	glVertex2i(230,948);
	glVertex2i(228,950);
    glEnd();
///////////////////////////////////////////////
	glBegin(GL_POLYGON);
	glColor3f(1.0,1.0,1.0);
	glVertex2i(325,1012);
	glVertex2i(322,1008);
	glVertex2i(330,1000);
	glVertex2i(332,1010);
    glEnd();
///////////////////
    glBegin(GL_LINE_STRIP);
	glColor3f(0.98,0.04,0.70);
	glVertex2i(325,1012);
	glVertex2i(322,1008);
	glVertex2i(330,1000);
	glVertex2i(332,1010);
    glEnd();
//////////////////////////////////////////
	glBegin(GL_POLYGON);
	glColor3f(0.98,0.04,0.70);
	glVertex2i(310,1012);
	glVertex2i(315,1008);
	glVertex2i(300,1000);
	glVertex2i(310,990);
	glVertex2i(320,990);
	glVertex2i(325,998);
	glVertex2i(330,990);
	glVertex2i(340,992);
    glEnd();
///////////////////
	glBegin(GL_LINE_STRIP);
	glColor3f(0.98,0.04,0.70);
	glVertex2i(310,1012);
	glVertex2i(315,1008);
	glVertex2i(300,1000);
	glVertex2i(310,990);
	glVertex2i(320,990);
	glVertex2i(325,998);
	glVertex2i(330,990);
	glVertex2i(340,992);
    glEnd();
//////////////////////////////////////
	glBegin(GL_POLYGON);
	glColor3f(0.98,0.04,0.70);
	glVertex2i(340,965);
	glVertex2i(350,960);
	glVertex2i(350,950);
	glVertex2i(355,952);            //dok
	glVertex2i(360,940);
	glVertex2i(355,930);
	glVertex2i(350,930);
	glVertex2i(348,918);
    glEnd();
///////////////////
	glBegin(GL_LINE_STRIP);
	glColor3f(0.98,0.04,0.70);
	glVertex2i(340,965);
	glVertex2i(350,960);         //dok
	glVertex2i(350,950);
	glVertex2i(355,952);
	glVertex2i(360,940);
	glVertex2i(355,930);
	glVertex2i(350,930);
	glVertex2i(348,918);
    glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.98,0.40,0.70);
	glVertex2i(300,932);
	glVertex2i(300,940);
	glVertex2i(310,950);
	glVertex2i(318,940);
	glVertex2i(315,935);
	glVertex2i(322,942);
	glVertex2i(330,940);
	glVertex2i(332,935);
	glVertex2i(330,930);
	glVertex2i(322,920);
	glVertex2i(330,918);
	glVertex2i(332,910);
	glVertex2i(325,900);
	glVertex2i(320,899);
	glVertex2i(310,910);
	glVertex2i(310,900);
	glVertex2i(305,898);
	glVertex2i(300,900);
	glVertex2i(295,910);
	glVertex2i(300,918);
	glVertex2i(290,920);
	glVertex2i(290,930);
	glEnd();

	glBegin(GL_LINE_LOOP);
	glColor3f(0.98,0.04,0.70);
	glVertex2i(300,932);
	glVertex2i(300,940);
	glVertex2i(310,950);
	glVertex2i(318,940);
	glVertex2i(315,935);
	glVertex2i(322,942);
	glVertex2i(330,940);
	glVertex2i(332,935);
	glVertex2i(330,930);
	glVertex2i(322,920);
	glVertex2i(330,918);
	glVertex2i(332,910);
	glVertex2i(325,900);
	glVertex2i(320,899);
	glVertex2i(310,910);
	glVertex2i(310,900);
	glVertex2i(305,898);
	glVertex2i(300,900);
	glVertex2i(295,910);
	glVertex2i(300,918);
	glVertex2i(290,920);
	glVertex2i(290,930);
	glEnd();

//////////////////////////////////////////////////////////////
   
	glBegin(GL_POLYGON);
	glColor3f(1.0,1.0,1.0);
	glVertex2i(320,930);
	glVertex2i(310,932);
	glVertex2i(300,920);
	glVertex2i(305,915);
	glVertex2i(310,910);
	glVertex2i(322,920);
	glVertex2i(320,930);
	glEnd();
	
	glBegin(GL_LINE_LOOP);
	glColor3f(0.98,0.04,0.70);
	glVertex2i(320,930);
	glVertex2i(310,932);
	glVertex2i(300,920);
	glVertex2i(305,915);
	glVertex2i(310,910);
	glVertex2i(322,920);
	glVertex2i(320,930);
	glEnd();
/////////////////////////////////////
 

	glBegin(GL_POLYGON);
	glColor3f(0.98,0.04,0.70);
    glVertex2i(260,900);
	glVertex2i(250,895);
	glVertex2i(260,890);
	glVertex2i(250,870);
	glVertex2i(260,870);
	glVertex2i(270,860);
	glVertex2i(280,865);
	glVertex2i(285,870);
	glVertex2i(270,880);
	glVertex2i(280,880);
	glVertex2i(285,890);
	glVertex2i(280,898);
	glVertex2i(270,890);
	glVertex2i(270,900);
	glEnd();

	
	
	glBegin(GL_LINE_LOOP);
	glColor3f(0.98,0.04,0.70);
    glVertex2i(260,900);
	glVertex2i(250,895);
	glVertex2i(260,890);
	glVertex2i(250,870);
	glVertex2i(260,870);
	glVertex2i(270,860);
	glVertex2i(280,865);
	glVertex2i(285,870);
	glVertex2i(270,880);
	glVertex2i(280,880);
	glVertex2i(285,890);
	glVertex2i(280,898);
	glVertex2i(270,890);
	glVertex2i(270,900);
	glEnd();
/////////////////////////////////////////////
	
	glBegin(GL_POLYGON);
	glColor3f(1.0,1.0,1.0);
	glVertex2i(260,890);
	glVertex2i(268,885);
	glVertex2i(270,880);
	glVertex2i(260,870);
    glEnd();
	
	glBegin(GL_LINE_STRIP);
	glColor3f(0.98,0.04,0.70);
	glVertex2i(260,890);
	glVertex2i(268,885);
	glVertex2i(270,880);
	glVertex2i(260,870);
    glEnd();
/////////////////////////////////////////////
	
	glBegin(GL_POLYGON);
	glColor3f(0.98,0.04,0.70);
	glVertex2i(240,830);
	glVertex2i(245,835);
	glVertex2i(250,840);
	glVertex2i(260,835);
	glVertex2i(262,830);
	glVertex2i(255,820);
	glVertex2i(265,820);
	glVertex2i(270,810);
	glVertex2i(260,800);
    glEnd();
	
	glBegin(GL_LINE_STRIP);
	glColor3f(0.98,0.04,0.70);
	glVertex2i(240,830);
	glVertex2i(245,835);
	glVertex2i(250,840);
	glVertex2i(260,835);
	glVertex2i(262,830);
	glVertex2i(255,820);
	glVertex2i(265,820);
	glVertex2i(270,810);
	glVertex2i(260,800);
    glEnd();
////////////////////////////////
	
	glBegin(GL_POLYGON);
	glColor3f(0.98,0.04,0.70);
	glVertex2i(325,840);
	glVertex2i(320,848);
	glVertex2i(310,840);
	glVertex2i(318,830);
	glVertex2i(300,830);
	glVertex2i(298,820);
	glVertex2i(310,810);
	glVertex2i(308,805);
	glVertex2i(310,800);
	glVertex2i(315,798);
	glVertex2i(320,800);
	glVertex2i(325,810);
	glEnd();
///////////////////
	glBegin(GL_LINE_STRIP);
	glColor3f(0.98,0.04,0.70);
	glVertex2i(325,840);
	glVertex2i(320,848);
	glVertex2i(310,840);
	glVertex2i(318,830);
	glVertex2i(300,830);
	glVertex2i(298,820);
	glVertex2i(310,810);
	glVertex2i(308,805);
	glVertex2i(310,800);
	glVertex2i(315,798);
	glVertex2i(320,800);
	glVertex2i(325,810);
	glEnd();
///////////////////////////////////////////////////////////////
	
	glBegin(GL_POLYGON);
	glColor3f(1.0,1.0,1.0);
	glVertex2i(325,830);
	glVertex2i(317,830);
	glVertex2i(319,820);
	glVertex2i(320,810);
	glVertex2i(325,810);
	glEnd();
	
	glBegin(GL_LINE_STRIP);
	glColor3f(0.98,0.04,0.70);
	glVertex2i(325,830);
	glVertex2i(317,830);
	glVertex2i(319,820);
	glVertex2i(320,810);
	glVertex2i(325,810);
	glEnd();
///////////////////////////////////////
	
	glBegin(GL_POLYGON);
	glColor3f(0.98,0.04,0.70);
	glVertex2i(325,750);
	glVertex2i(320,740);
	glVertex2i(310,730);
	glVertex2i(300,735);
	glVertex2i(290,750);
	glVertex2i(295,755);
	glVertex2i(300,750);
	glVertex2i(310,760);
	glVertex2i(320,760);
	glVertex2i(325,755);
	glEnd();
	
	glBegin(GL_LINE_LOOP);
	glColor3f(0.98,0.04,0.70);
	glVertex2i(325,750);
	glVertex2i(320,740);
	glVertex2i(310,730);
	glVertex2i(300,735);
	glVertex2i(290,750);
	glVertex2i(295,755);
	glVertex2i(300,750);
	glVertex2i(310,760);
	glVertex2i(320,760);
	glVertex2i(325,755);
	glEnd();
////////////////////////////
	
	
	glBegin(GL_POLYGON);
	glColor3f(1.0,1.0,1.0);
	glVertex2i(302,750);
	glVertex2i(310,753);
	glVertex2i(312,748);
	glVertex2i(310,742);
	glVertex2i(308,742);
    glEnd();
///////////////////
	glBegin(GL_LINE_LOOP);
	glColor3f(0.98,0.04,0.70);
	glVertex2i(302,750);
	glVertex2i(310,753);
	glVertex2i(312,748);
	glVertex2i(310,742);
	glVertex2i(308,742);
    glEnd();
//////////////////////////////////////
	
	glBegin(GL_POLYGON);
	glColor3f(0.98,0.04,0.70);
	glVertex2i(348,718);
	glVertex2i(345,728);
	glVertex2i(340,730);
	glVertex2i(330,728);
	glVertex2i(330,710);
	glVertex2i(325,710);
	glVertex2i(315,710);
	glEnd();
	
	glBegin(GL_LINE_STRIP);
	glColor3f(0.98,0.04,0.70);
	glVertex2i(348,718);
	glVertex2i(345,728);
	glVertex2i(340,730);
	glVertex2i(330,728);
	glVertex2i(330,710);
	glVertex2i(325,710);
	glVertex2i(315,710);
	glEnd();
//////////////////////////////////////

	glBegin(GL_POLYGON);
	glColor3f(0.98,0.04,0.70);
	glVertex2i(280,700);
	glVertex2i(295,690);
	glVertex2i(300,680);
	glVertex2i(300,670);
	glVertex2i(295,662);
	glVertex2i(290,672);
	glVertex2i(285,665);
	glVertex2i(280,660);
    glEnd();

	glBegin(GL_LINE_STRIP);
	glColor3f(0.98,0.04,0.70);
	glVertex2i(280,700);
	glVertex2i(295,690);
	glVertex2i(300,680);
	glVertex2i(300,670);
	glVertex2i(295,662);
	glVertex2i(290,672);
	glVertex2i(285,665);
	glVertex2i(280,660);
    glEnd();
////////////////////////////////////////
	
	glBegin(GL_POLYGON);
	glColor3f(1.0,1.0,1.0);
	glVertex2i(280,685);
	glVertex2i(290,680);
	glVertex2i(280,675);
	glEnd();
	
	glBegin(GL_LINE_STRIP);
	glColor3f(0.98,0.04,0.70);
	glVertex2i(280,685);
	glVertex2i(290,680);
	glVertex2i(280,675);
	glEnd();


	///////////////////////////////////////////////////////////////////////////////////
	// tung
	glBegin(GL_LINES);
	glColor3f(0.0,0.0,0.0);

	glVertex2i(500,370);
	glVertex2i(658,240);	 		
    glVertex2i(490,360);
	glVertex2i(495,350);
	glVertex2i(508,338);
	glVertex2i(515,335);					
    glVertex2i(548,308);
	glVertex2i(508,280);
	glVertex2i(590,270);
	glVertex2i(750,130);					
    glVertex2i(240,580);
	glVertex2i(290,600);
	glVertex2i(300,560);
	glVertex2i(330,540);					
    glVertex2i(258,588);
	glVertex2i(320,538);
	glVertex2i(240,560);
	glVertex2i(340,480);					
    glVertex2i(220,490);
	glVertex2i(250,450);
	glVertex2i(270,428);
	glVertex2i(278,418);					
    glVertex2i(220,460);
	glVertex2i(290,382);
	glVertex2i(300,352);
	glVertex2i(312,352);					
    glVertex2i(355,302);
	glVertex2i(360,298);
	glVertex2i(370,282);
	glVertex2i(420,230);					
    glVertex2i(435,210);
	glVertex2i(450,190);
	glVertex2i(498,148);
	glVertex2i(502,138);					
    glVertex2i(360,255);
	glVertex2i(460,150);
	glVertex2i(482,122);
	glVertex2i(490,118);					
    glVertex2i(325,200);
	glVertex2i(340,180);
	glVertex2i(360,150);
	glVertex2i(370,130);					
    glVertex2i(60,500);
	glVertex2i(90,460);
	glVertex2i(115,400);
	glVertex2i(130,390);
	glVertex2i(150,320);
	glVertex2i(160,310);					
    glVertex2i(238,170);
	glVertex2i(245,150);
    glEnd();
///////////////////
	glBegin(GL_LINE_STRIP);
	glColor3f(0.0,0.0,0.0);
	glVertex2i(225,125);
	glVertex2i(240,130);
	glVertex2i(270,150);
	glVertex2i(240,120);
	glVertex2i(260,110);
	glVertex2i(300,102);
	glVertex2i(240,100);
	glVertex2i(230,90);
	glVertex2i(230,70);
	glVertex2i(180,100);
	glVertex2i(160,100);
	glVertex2i(140,85);
	glVertex2i(160,110);
	glVertex2i(160,120);
	glVertex2i(130,160);
	glVertex2i(170,130);
    glEnd();

	glBegin(GL_LINE_STRIP);
	glColor3f(0.0,0.0,0.0);
	glVertex2i(135,130);
	glVertex2i(120,150);
	glVertex2i(110,170);
	glVertex2i(90,180);
	glVertex2i(80,190);
	glVertex2i(50,200);
    glEnd();

	glBegin(GL_LINE_STRIP);
	glColor3f(0.0,0.0,0.0);
	glVertex2i(120,175);
	glVertex2i(110,180);
	glVertex2i(100,190);
	glVertex2i(90,200);
	glVertex2i(70,220);
    glEnd();

	glBegin(GL_LINE_STRIP);
	glColor3f(0.0,0.0,0.0);
	glVertex2i(150,150);
	glVertex2i(140,170);
	glVertex2i(130,180);
	glVertex2i(120,200);
	glVertex2i(110,210);
	glVertex2i(100,220);
	glVertex2i(80,230);
	glVertex2i(60,240);
    glEnd();
//////////////////////////////////////////////////////////////////

	glPopMatrix();//KeyboardAssign
	glutSwapBuffers();//KeyboardAssign
	
glFlush();
}
void Keyboard(unsigned char key,int x,int y)
	{
		switch (key)
		{
		case 'o':
			glutReshapeWindow(300,300);
			glutPostRedisplay();
			break;
				case 'z':
			glutReshapeWindow(1300,700);
			glutPostRedisplay();
			break;
		}
	}


void main(int argc,char** argv)
{
		glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
	glutInitWindowPosition(100,100);
	glutInitWindowSize(800,600);
	glutCreateWindow("The bedroom");
	init();
	glutDisplayFunc(myDisplay);
	glutKeyboardFunc(Keyboard);
	
	glutMainLoop();
}
