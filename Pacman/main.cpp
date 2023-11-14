#include<graphics.h>
#include<stdio.h>


int foods(int x, int y);
int foodsArr[116];
void lose(int score, int play);
void won(int score, int play);
void pacmangame();

void pacman(int x, int y){
  circle(x,y,15);
}

void map(){
    rectangle(10,10,630,470);
    rectangle(250,98,368,208);
    bar(45,45,283,65);
    bar(320,45,595,65);
    bar(45,98,100,210);
    bar(500,98,595,210);
    bar(135,98,215,210);
    bar(405,98,465,210);

    bar(250,98,260,210);
    bar(360,98,370,210);
    bar(250,198,370,210);

    bar(45,245,283,300);
    bar(320,245,595,300);
    bar(45,335,150,435);
    bar(185,335,283,435);
    bar(320,335,440,435);
    bar(475,335,595,435);

}

int foods(double x, double y, int score){
    //LEFT SIDE COLUMN 1
    if(x==26&&y==26 && foodsArr[0]==0){
        foodsArr[0]=1;
        score++;
    }else if(foodsArr[0]==0)
        circle(26,26,5);
    if(x==26&&y==66 && foodsArr[1]==0){
        foodsArr[1]=1;
        score++;
    }else if(foodsArr[1]==0)
        circle(26,66,5);
    if(x==26&&y==106 && foodsArr[2]==0){
        foodsArr[2]=1;
        score++;
    }else if(foodsArr[2]==0)
        circle(26,106,5);
    if(x==26&&y==146 && foodsArr[3]==0){
        foodsArr[3]=1;
        score++;
    }else if(foodsArr[3]==0)
        circle(26,146,5);
    if(x==26&&y==186 && foodsArr[4]==0){
        foodsArr[4]=1;
        score++;
    }else if(foodsArr[4]==0)
        circle(26,186,5);
    if(x==26&&y==227 && foodsArr[5]==0){
        foodsArr[5]=1;
        score++;
    }else if(foodsArr[5]==0)
        circle(26,227,5);
    if(x==26&&y==270 && foodsArr[6]==0){
        foodsArr[6]=1;
        score++;
    }else if(foodsArr[6]==0)
        circle(26,270,5);
    if(x==26&&y==306 && foodsArr[7]==0){
        foodsArr[7]=1;
        score++;
    }else if(foodsArr[7]==0)
        circle(26,306,5);
    if(x==26&&y==346 && foodsArr[8]==0){
        foodsArr[8]=1;
        score++;
    }else if(foodsArr[8]==0)
        circle(26,346,5);
    if(x==26&&y==386 && foodsArr[9]==0){
        foodsArr[9]=1;
        score++;
    }else if(foodsArr[9]==0)
        circle(26,386,5);
    if(x==26&&y==426 && foodsArr[10]==0){
        foodsArr[10]=1;
        score++;
    }else if(foodsArr[10]==0)
        circle(26,426,5);
    if(x==26&&y==454 && foodsArr[11]==0){
        foodsArr[11]=1;
        score++;
    }else if(foodsArr[11]==0)
        circle(26,454,5);

    //ROW 2-3 COLUMN 1
    if(foodsArr[12]==0){
        if(x==116&&y==106){
            foodsArr[12]=1;
            score++;
        }else
            circle(116,106,5);
    }
    if(foodsArr[13]==0){
        if(x==116&&y==146){
            foodsArr[13]=1;
            score++;
        }else
            circle(116,146,5);
    }
    if(foodsArr[14]==0){
        if(x==116&&y==186){
            foodsArr[14]=1;
            score++;
        }else
            circle(116,186,5);
    }

    //ROW 2-3 COLUMN 2
    if(foodsArr[15]==0){
        if(x==233&&y==106){
            foodsArr[15]=1;
            score++;
        }else
            circle(233,106,5);
    }
    if(foodsArr[16]==0){
        if(x==233&&y==146){
            foodsArr[16]=1;
            score++;
        }else
            circle(233,146,5);
    }
    if(foodsArr[17]==0){
        if(x==233&&y==186){
            foodsArr[17]=1;
            score++;
        }else
            circle(233,186,5);
    }

    //ROW 2-3 COLUMN 3
    if(foodsArr[18]==0){
        if(x==387&&y==106){
            foodsArr[18]=1;
            score++;
        }else
            circle(387,106,5);
    }
    if(foodsArr[19]==0){
        if(x==387&&y==146){
            foodsArr[19]=1;
            score++;
        }else
            circle(387,146,5);
    }
    if(foodsArr[20]==0){
        if(x==387&&y==186){
            foodsArr[20]=1;
            score++;
        }else
            circle(387,186,5);
    }

    //ROW 2-3 COLUMN 4
    if(foodsArr[21]==0){
        if(x==482&&y==106){
            foodsArr[21]=1;
            score++;
        }else
            circle(482,106,5);
    }
    if(foodsArr[22]==0){
        if(x==482&&y==146){
            foodsArr[22]=1;
            score++;
        }else
            circle(482,146,5);
    }
    if(foodsArr[23]==0){
        if(x==482&&y==186){
            foodsArr[23]=1;
            score++;
        }else
            circle(482,186,5);
    }

    //ROW 4-5 COL 1
    if(foodsArr[24]==0){
        if(x==169&&y==350){
            foodsArr[24]=1;
            score++;
        }else
            circle(169,350,5);
    }
    if(foodsArr[25]==0){
        if(x==169&&y==390){
            foodsArr[25]=1;
            score++;
        }else
            circle(169,390,5);
    }
    if(foodsArr[26]==0){
        if(x==169&&y==430){
            foodsArr[26]=1;
            score++;
        }else
            circle(169,430,5);
    }

    //ROW 4-5 COL 2 CENTER
    if(foodsArr[27]==0){
        if(x==300&&y==270){
            foodsArr[27]=1;
            score++;
        }else
            circle(300,270,5);
    }
    if(foodsArr[28]==0){
        if(x==300&&y==350){
            foodsArr[28]=1;
            score++;
        }else
            circle(300,350,5);
    }
    if(foodsArr[29]==0){
        if(x==300&&y==390){
            foodsArr[29]=1;
            score++;
        }else
            circle(300,390,5);
    }
    if(foodsArr[30]==0){
        if(x==300&&y==430){
            foodsArr[30]=1;
            score++;
        }else
            circle(300,430,5);
    }

    //ROW 4-5 COL 3
    if(foodsArr[31]==0){
        if(x==458&&y==350){
            foodsArr[31]=1;
            score++;
        }else
            circle(458,350,5);
    }
    if(foodsArr[32]==0){
        if(x==458&&y==390){
            foodsArr[32]=1;
            score++;
        }else
            circle(458,390,5);
    }
    if(foodsArr[33]==0){
        if(x==458&&y==430){
            foodsArr[33]=1;
            score++;
        }else
            circle(458,430,5);
    }

    //ROW 1 RIGHT

    if(foodsArr[34]==0){
        if(x==613&&y==26){
            foodsArr[34]=1;
            score++;
        }else
            circle(613,26,5);
    }
    if(foodsArr[35]==0){
        if(x==613&&y==66){
            foodsArr[35]=1;
            score++;
        }else
            circle(613,66,5);
    }
    if(foodsArr[36]==0){
        if(x==613&&y==106){
            foodsArr[36]=1;
            score++;
        }else
            circle(613,106,5);
    }
    if(foodsArr[37]==0){
        if(x==613&&y==146){
            foodsArr[37]=1;
            score++;
        }else
            circle(613,146,5);
    }
    if(foodsArr[38]==0){
        if(x==613&&y==186){
            foodsArr[38]=1;
            score++;
        }else
            circle(613,186,5);
    }
    if(foodsArr[39]==0){
        if(x==613&&y==226){
            foodsArr[39]=1;
            score++;
        }else
            circle(613,226,5);
    }
    if(foodsArr[40]==0){
        if(x==613&&y==266){
            foodsArr[40]=1;
            score++;
        }else
            circle(613,266,5);
    }
    if(foodsArr[41]==0){
        if(x==613&&y==306){
            foodsArr[41]=1;
            score++;
        }else
            circle(613,306,5);
    }
    if(foodsArr[42]==0){
        if(x==613&&y==346){
            foodsArr[42]=1;
            score++;
        }else
            circle(613,346,5);
    }
    if(foodsArr[43]==0){
        if(x==613&&y==386){
            foodsArr[43]=1;
            score++;
        }else
            circle(613,386,5);
    }
    if(foodsArr[44]==0){
        if(x==613&&y==426){
            foodsArr[44]=1;
            score++;
        }else
            circle(613,426,5);
    }
    if(foodsArr[45]==0){
        if(x==613&&y==454){
            foodsArr[45]=1;
            score++;
        }else
            circle(613,454,5);
    }

    //TOP
    if(foodsArr[46]==0){
        if(x==66&&y==26){
            foodsArr[46]=1;
            score++;
        }else
            circle(66,26,5);
    }
    if(foodsArr[47]==0){
        if(x==106&&y==26){
            foodsArr[47]=1;
            score++;
        }else
            circle(106,26,5);
    }
    if(foodsArr[48]==0){
        if(x==146&&y==26){
            foodsArr[48]=1;
            score++;
        }else
            circle(146,26,5);
    }
    if(foodsArr[49]==0){
        if(x==186&&y==26){
            foodsArr[49]=1;
            score++;
        }else
            circle(186,26,5);
    }
    if(foodsArr[50]==0){
        if(x==226&&y==26){
            foodsArr[50]=1;
            score++;
        }else
            circle(226,26,5);
    }
    if(foodsArr[51]==0){
        if(x==306&&y==26){
            foodsArr[51]=1;
            score++;
        }else
            circle(306,26,5);
    }
    if(foodsArr[52]==0){
        if(x==346&&y==26){
            foodsArr[52]=1;
            score++;
        }else
            circle(346,26,5);
    }
    if(foodsArr[53]==0){
        if(x==386&&y==26){
            foodsArr[53]=1;
            score++;
        }else
            circle(386,26,5);
    }
    if(foodsArr[54]==0){
        if(x==426&&y==26){
            foodsArr[54]=1;
            score++;
        }else
            circle(426,26,5);
    }
    if(foodsArr[56]==0){
        if(x==466&&y==26){
            foodsArr[56]=1;
            score++;
        }else
            circle(466,26,5);
    }
    if(foodsArr[57]==0){
        if(x==506&&y==26){
            foodsArr[57]=1;
            score++;
        }else
            circle(506,26,5);
    }
    if(foodsArr[58]==0){
        if(x==546&&y==26){
            foodsArr[58]=1;
            score++;
        }else
            circle(546,26,5);
    }
    if(foodsArr[59]==0){
        if(x==586&&y==26){
            foodsArr[59]=1;
            score++;
        }else
            circle(586,26,5);
    }
    if(foodsArr[60]==0){
        if(x==266&&y==26){
            foodsArr[60]=1;
            score++;
        }else
            circle(266,26,5);
    }

    //BOTTOM
    if(foodsArr[61]==0){
        if(x==106&&y==454){
            foodsArr[61]=1;
            score++;
        }else
            circle(106,454,5);
    }
    if(foodsArr[62]==0){
        if(x==146&&y==454){
            foodsArr[62]=1;
            score++;
        }else
            circle(146,454,5);
    }
    if(foodsArr[63]==0){
        if(x==186&&y==454){
            foodsArr[63]=1;
            score++;
        }else
            circle(186,454,5);
    }
    if(foodsArr[64]==0){
        if(x==226&&y==454){
            foodsArr[64]=1;
            score++;
        }else
            circle(226,454,5);
    }
    if(foodsArr[65]==0){
        if(x==266&&y==454){
            foodsArr[65]=1;
            score++;
        }else
            circle(266,454,5);
    }
    if(foodsArr[66]==0){
        if(x==306&&y==454){
            foodsArr[66]=1;
            score++;
        }else
            circle(306,454,5);
    }
    if(foodsArr[67]==0){
        if(x==346&&y==454){
            foodsArr[67]=1;
            score++;
        }else
            circle(346,454,5);
    }
    if(foodsArr[68]==0){
        if(x==386&&y==454){
            foodsArr[68]=1;
            score++;
        }else
            circle(386,454,5);
    }
    if(foodsArr[69]==0){
        if(x==426&&y==454){
            foodsArr[69]=1;
            score++;
        }else
            circle(426,454,5);
    }
    if(foodsArr[70]==0){
        if(x==466&&y==454){
            foodsArr[70]=1;
            score++;
        }else
            circle(466,454,5);
    }
    if(foodsArr[71]==0){
        if(x==506&&y==454){
            foodsArr[71]=1;
            score++;
        }else
            circle(506,454,5);
    }
    if(foodsArr[72]==0){
        if(x==546&&y==454){
            foodsArr[72]=1;
            score++;
        }else
            circle(546,454,5);
    }
    if(foodsArr[73]==0){
        if(x==586&&y==454){
            foodsArr[73]=1;
            score++;
        }else
            circle(586,454,5);
    }
    if(foodsArr[74]==0){
        if(x==66&&y==454){
            foodsArr[74]=1;
            score++;
        }else
            circle(66,454,5);
    }

    //ROW 3
    if(foodsArr[75]==0){
        if(x==66&&y==227){
            foodsArr[75]=1;
            score++;
        }else
            circle(66,227,5);
    }
    if(foodsArr[76]==0){
        if(x==106&&y==227){
            foodsArr[76]=1;
            score++;
        }else
            circle(106,227,5);
    }
    if(foodsArr[77]==0){
        if(x==146&&y==227){
            foodsArr[77]=1;
            score++;
        }else
            circle(146,227,5);
    }
    if(foodsArr[78]==0){
        if(x==186&&y==227){
            foodsArr[78]=1;
            score++;
        }else
            circle(186,227,5);
    }
    if(foodsArr[79]==0){
        if(x==226&&y==227){
            foodsArr[79]=1;
            score++;
        }else
            circle(226,227,5);
    }
    if(foodsArr[80]==0){
        if(x==266&&y==227){
            foodsArr[80]=1;
            score++;
        }else
            circle(266,227,5);
    }
    if(foodsArr[81]==0){
        if(x==306&&y==227){
            foodsArr[81]=1;
            score++;
        }else
            circle(306,227,5);
    }
    if(foodsArr[82]==0){
        if(x==346&&y==227){
            foodsArr[82]=1;
            score++;
        }else
            circle(346,227,5);
    }
    if(foodsArr[83]==0){
        if(x==386&&y==227){
            foodsArr[83]=1;
            score++;
        }else
            circle(386,227,5);
    }
    if(foodsArr[84]==0){
        if(x==426&&y==227){
            foodsArr[84]=1;
            score++;
        }else
            circle(426,227,5);
    }
    if(foodsArr[85]==0){
        if(x==466&&y==227){
            foodsArr[85]=1;
            score++;
        }else
            circle(466,227,5);
    }
    if(foodsArr[86]==0){
        if(x==506&&y==227){
            foodsArr[86]=1;
            score++;
        }else
            circle(506,227,5);
    }
    if(foodsArr[87]==0){
        if(x==546&&y==227){
            foodsArr[87]=1;
            score++;
        }else
            circle(546,227,5);
    }
    if(foodsArr[88]==0){
        if(x==586&&y==227){
            foodsArr[88]=1;
            score++;
        }else
            circle(586,227,5);
    }

    //ROW 2
    if(foodsArr[89]==0){
        if(x==66&&y==81){
            foodsArr[89]=1;
            score++;
        }else
            circle(66,81,5);
    }
    if(foodsArr[90]==0){
        if(x==106&&y==81){
            foodsArr[90]=1;
            score++;
        }else
            circle(106,81,5);
    }
    if(foodsArr[91]==0){
        if(x==146&&y==81){
            foodsArr[91]=1;
            score++;
        }else
            circle(146,81,5);
    }
    if(foodsArr[92]==0){
        if(x==186&&y==81){
            foodsArr[92]=1;
            score++;
        }else
            circle(186,81,5);
    }
    if(foodsArr[93]==0){
        if(x==226&&y==81){
            foodsArr[93]=1;
            score++;
        }else
            circle(226,81,5);
    }
    if(foodsArr[94]==0){
        if(x==266&&y==81){
            foodsArr[94]=1;
            score++;
        }else
            circle(266,81,5);
    }
    if(foodsArr[95]==0){
        if(x==306&&y==81){
            foodsArr[95]=1;
            score++;
        }else
            circle(306,81,5);
    }
    if(foodsArr[96]==0){
        if(x==346&&y==81){
            foodsArr[96]=1;
            score++;
        }else
            circle(346,81,5);
    }
    if(foodsArr[97]==0){
        if(x==386&&y==81){
            foodsArr[97]=1;
            score++;
        }else
            circle(386,81,5);
    }
    if(foodsArr[98]==0){
        if(x==426&&y==81){
            foodsArr[98]=1;
            score++;
        }else
            circle(426,81,5);
    }
    if(foodsArr[99]==0){
        if(x==466&&y==81){
            foodsArr[99]=1;
            score++;
        }else
            circle(466,81,5);
    }
    if(foodsArr[100]==0){
        if(x==506&&y==81){
            foodsArr[100]=1;
            score++;
        }else
            circle(506,81,5);
    }
    if(foodsArr[101]==0){
        if(x==546&&y==81){
            foodsArr[101]=1;
            score++;
        }else
            circle(546,81,5);
    }
    if(foodsArr[102]==0){
        if(x==586&&y==81){
            foodsArr[102]=1;
            score++;
        }else
            circle(586,81,5);
    }

    //ROW 4
    if(foodsArr[103]==0){
        if(x==66&&y==318){
            foodsArr[103]=1;
            score++;
        }else
            circle(66,318,5);
    }
    if(foodsArr[104]==0){
        if(x==106&&y==318){
            foodsArr[104]=1;
            score++;
        }else
            circle(106,318,5);
    }
    if(foodsArr[105]==0){
        if(x==146&&y==318){
            foodsArr[105]=1;
            score++;
        }else
            circle(146,318,5);
    }
    if(foodsArr[106]==0){
        if(x==186&&y==318){
            foodsArr[106]=1;
            score++;
        }else
            circle(186,318,5);
    }
    if(foodsArr[107]==0){
        if(x==226&&y==318){
            foodsArr[107]=1;
            score++;
        }else
            circle(226,318,5);
    }
    if(foodsArr[108]==0){
        if(x==266&&y==318){
            foodsArr[108]=1;
            score++;
        }else
            circle(266,318,5);
    }
    if(foodsArr[109]==0){
        if(x==346&&y==318){
            foodsArr[109]=1;
            score++;
        }else
            circle(346,318,5);
    }
    if(foodsArr[110]==0){
        if(x==386&&y==318){
            foodsArr[110]=1;
            score++;
        }else
            circle(386,318,5);
    }
    if(foodsArr[111]==0){
        if(x==426&&y==318){
            foodsArr[111]=1;
            score++;
        }else
            circle(426,318,5);
    }
    if(foodsArr[112]==0){
        if(x==466&&y==318){
            foodsArr[112]=1;
            score++;
        }else
            circle(466,318,5);
    }
    if(foodsArr[113]==0){
        if(x==506&&y==318){
            foodsArr[113]=1;
            score++;
        }else
            circle(506,318,5);
    }
    if(foodsArr[114]==0){
        if(x==546&&y==318){
            foodsArr[114]=1;
            score++;
        }else
            circle(546,318,5);
    }
    if(foodsArr[115]==0){
        if(x==586&&y==318){
            foodsArr[115]=1;
            score++;
        }else
            circle(586,318,5);
    }

    return score;
}

void enemy1(double x, double y){
    circle(x,y,15);
}
void enemy2(double x, double y){
    circle(x,y,15);
}
void enemy3(double x, double y){
    circle(x,y,15);
}
void enemy4(double x, double y){
    circle(x,y,15);
}

void pacmangame(){
    int page=0,pressed=0,pressed2=0,score=0,play=1;
    char c;
    double x=300,y=318,i=0,j=0;
    double enemyX=280,enemyY=150,enX,enY;
    double enemy2X=300,enemy2Y=150,en2X,en2Y;
    double enemy3X=300,enemy3Y=150,en3X,en3Y;
    double enemy4X=300,enemy4Y=150,en4X,en4Y;

    //---FOR ENEMY---//
    //CENTER//
    int center[4] = {1,2,3,4};
    //CORNERS//
    int leftdc[2]   = {2,3};
    int leftuc[2]   = {3,4};
    int rightdc[2]  = {1,2};
    int rightuc[2]  = {1,4};
    //EDGES
    int top[3]    = {1,3,4};
    int bottom[3] = {1,2,3};
    int left[3] = {3,2,4};
    int right[3] = {1,2,4};

    int randomIndex = 0;
    int randomValue = 0;
    int randomIndex2 = 0;
    int randomValue2 = 0;
    int randomIndex3 = 0;
    int randomValue3 = 0;
    int randomIndex4 = 0;
    int randomValue4 = 0;
    //---END FOR ENEMY---//

    //FOODS ARRAY//
    for(int i=0; i<116;i++)
        foodsArr[i]=0;
    //END FOODS ARRAY//

    while(play==1){
        setactivepage(page);
        setvisualpage(1-page);
        cleardevice();
        setcolor(YELLOW);
        setfillstyle(SOLID_FILL,YELLOW);
        pacman(x,y);
        floodfill(x,y,YELLOW);
        enemy1(enemyX,enemyY);
        enemy2(enemy2X,enemy2Y);
        enemy3(enemy3X,enemy3Y);
        enemy4(enemy4X,enemy4Y);
        outtextxy(220,480,"Press 'q' to quit");
        char scorew[100];
        //char q[50],w[50];
        setfillstyle(SOLID_FILL,BLUE);
        map();
        score = foods(x,y,score);

        sprintf(scorew,"SCORE %d",score);
        //sprintf(q,"X %.1f",x);
        //sprintf(w,"Y %.1f",y);

        //outtextxy(280,160,q);
        //outtextxy(280,170,w);
        outtextxy(280,180,scorew);

        if(kbhit()){
            //i = x; j = y
            c=getch();
            if(c==72){
                //UP
                 if(y==227 &&(x>26 && x<35)){
                    //ROW 3 COL 0
                    i=26;
                    pressed = 2;
                    pressed2 = 2;
                }else if(y==227 &&(x>106 && x<126)){
                    //ROW 3 COL 1
                    i=116;
                    pressed = 2;
                    pressed2 = 2;
                }else if(y==227 &&(x>219 && x<247)){
                    //ROW 3 COL 2
                    i=233;
                    pressed = 2;
                    pressed2 = 2;
                }else if(y==227 &&(x>379 && x<395)){
                    //ROW 3 COL 3
                    i=387;
                    pressed = 2;
                    pressed2 = 2;
                }else if(y==227 &&(x>476 && x<490)){
                    //ROW 3 COL 4
                    i=482;
                    pressed = 2;
                    pressed2 = 2;
                }else if(y==227 &&(x>602 && x<613)){
                    //ROW 3 COL 5
                    i=613;
                    pressed = 2;
                    pressed2 = 2;
                }else if(y==318 &&(x>286 && x<318)){
                    //ROW 4 CENTER
                    i=300;
                    pressed = 2;
                    pressed2 = 2;
                }else if(y==318 &&(x>25 && x<35)){
                    //ROW 4 COL 0
                    i=26;
                    pressed = 2;
                    pressed2 = 2;
                }else if(y==318 &&(x>602 && x<613)){
                    //ROW 4 COL 5
                    i=613;
                    pressed = 2;
                    pressed2 = 2;
                }else if(y==454 &&(x>289 && x<315)){
                    //ROW 5 COL 2
                    i=300;
                    pressed = 2;
                    pressed2 = 2;
                }else if(y==454 &&(x>151 && x<181)){
                    //ROW 5 COL 1
                    i=169;
                    pressed = 2;
                    pressed2 = 2;
                }else if(y==454 &&(x>444 && x<473)){
                    //ROW 5 COL 4
                    i=458;
                    pressed = 2;
                    pressed2 = 2;
                }else if(y==454 &&(x>602 && x<614)){
                    //ROW 5 COL 4
                    i=613;
                    pressed = 2;
                    pressed2 = 2;
                }else if(y==454 &&(x>25 && x<35)){
                    //ROW 5 COL 4
                    i=26;
                    pressed = 2;
                    pressed2 = 2;
                }else if(y==81 &&(x>26 && x<35)){
                    //ROW 2 COL 0
                    i=26;
                    pressed = 2;
                    pressed2 = 2;
                }else if(y==81 &&(x>602 && x<613)){
                    //ROW 2 COL 5
                    i=613;
                    pressed = 2;
                    pressed2 = 2;
                }else if(y==81 &&(x>289 && x<311)){
                    //ROW 2 COL 2
                    i=300;
                    pressed = 2;
                    pressed2 = 2;
                }else{
                    if(x==300 && (y>227&&y<454)){
                        j=-1;
                        i=0;
                        pressed2 = 2;
                    }
                    else if(x==458 && (y>318&&y<454)){
                        j=-1;
                        i=0;
                        pressed2 = 2;
                    }
                    else if(x==169 && (y>318&&y<454)){
                        j=-1;
                        i=0;
                        pressed2 = 2;
                    }
                    else if(x==613 && (y>26&&y<454)){
                        j=-1;
                        i=0;
                        pressed2 = 2;
                    }
                    else if(x==233 && (y>81&&y<227)){
                        j=-1;
                        i=0;
                        pressed2 = 2;
                    }
                    else if(x==116 && (y>81&&y<227)){
                        j=-1;
                        i=0;
                        pressed2 = 2;
                    }
                    else if(x==387 && (y>81&&y<227)){
                        j=-1;
                        i=0;
                        pressed2 = 2;
                    }
                    else if(x==482 && (y>81&&y<227)){
                        j=-1;
                        i=0;
                        pressed2 = 2;
                    }
                    else if(x==26 && (y>26&&y<454)){
                        j=-1;
                        i=0;
                        pressed2 = 2;
                    }
                    else if(x==300 && (y>26&&y<81)){
                        j=-1;
                        i=0;
                        pressed2 = 2;
                    }
                }
            }
            if(c==80){
                //DOWN
                if(y==227 && (x>288 && x<319)){
                    //ROW 3
                    i=300;
                    pressed = 4;
                    pressed2 = 4;
                }else if(y==227 &&(x>26 && x<35)){
                    //ROW 3 COL 0
                    i=26;
                    pressed = 4;
                    pressed2 = 4;
                }else if(y==227 &&(x>602 && x<613)){
                    //ROW 3 COL 5
                    i=613;
                    pressed = 4;
                    pressed2 = 4;
                }else if(y==318 &&(x>286 && x<318)){
                    //ROW 4 CENTER
                    i=300;
                    pressed = 4;
                    pressed2 = 4;
                }else if(y==318 &&(x>26 && x<35)){
                    //ROW 4 COL 0
                    i=26;
                    pressed = 4;
                    pressed2 = 4;
                }else if(y==318 &&(x>151 && x<181)){
                    //ROW 4 COL 1
                    i=169;
                    pressed = 4;
                    pressed2 = 4;
                }else if(y==318 &&(x>444 && x<473)){
                    //ROW 4 COL 3
                    i=458;
                    pressed = 4;
                    pressed2 = 4;
                }else if(y==318 &&(x>602 && x<613)){
                    //ROW 4 COL 3
                    i=613;
                    pressed = 4;
                    pressed2 = 4;
                }else if(y==81&&(x>26 && x<35)){
                    //ROW 2 COL 1-5
                    i=26;
                    pressed = 4;
                    pressed2 = 4;
                }else if(y==81&&(x>104 && x<133)){
                    //ROW 2 COL 1-5
                    i=116;
                    pressed = 4;
                    pressed2 = 4;
                }else if(y==81&&(x>219 && x<247)){
                    //ROW 2 COL 1-5
                    i=233;
                    pressed = 4;
                    pressed2 = 4;
                }else if(y==81&&(x>376 && x<399)){
                    //ROW 2 COL 1-5
                    i=387;
                    pressed = 4;
                    pressed2 = 4;
                }else if(y==81&&(x>478 && x<496)){
                    //ROW 2 COL 1-5
                    i=482;
                    pressed = 4;
                    pressed2 = 4;
                }else if(y==81&&(x>602 && x<613)){
                    //ROW 2 COL 1-5
                    i=613;
                    pressed = 4;
                    pressed2 = 4;
                }else if(y==26&&(x>289 && x<311)){
                    //ROW 1 COL 1-5
                    i=300;
                    pressed = 4;
                    pressed2 = 4;
                }else if(y==26&&(x>26 && x<35)){
                    //ROW 1 COL 1-5
                    i=26;
                    pressed = 4;
                    pressed2 = 4;
                }else if(y==26&&(x>602 && x<613)){
                    //ROW 1 COL 1-5
                    i=613;
                    pressed = 4;
                    pressed2 = 4;
                }else{
                    if(x==30){
                        j=1;
                        i=0;
                        pressed2 = 4;
                    }
                    if(x==458 && y>317){
                        j=1;
                        i=0;
                        pressed2 = 4;
                    }
                    if(x==169 && y>317){
                        j=1;
                        i=0;
                        pressed2 = 4;
                    }
                    if(x==613){
                        j=1;
                        i=0;
                        pressed2 = 4;
                    }
                    if(x==233 && (y>81 && y<227)){
                        j=1;
                        i=0;
                        pressed2 = 4;
                    }
                    if(x==116 && (y>81 && y<227)){
                        j=1;
                        i=0;
                        pressed2 = 4;
                    }
                    if(x==387 && (y>81 && y<227)){
                        j=1;
                        i=0;
                        pressed2 = 4;
                    }
                    if(x==482 && (y>81 && y<227)){
                        j=1;
                        i=0;
                        pressed2 = 4;
                    }
                    if(x==26){
                        j=1;
                        i=0;
                        pressed2 = 4;
                    }
                    if(x==300 && y>227){
                        j=1;
                        i=0;
                        pressed2 = 4;
                    }
                    if(x==300 && y<81){
                        j=1;
                        i=0;
                        pressed2 = 4;
                    }
                }

            }
            if(c==75){
                //LEFT
                if(x==300 && (y>224 && y<237)){
                    //ROW 3
                    j=227;
                    pressed = 1;
                    pressed2=1;
                }else if(x==26 && (y>215 && y<227)){
                    //ROW 3 COl 0
                    j=227;
                    pressed = 1;
                    pressed2=1;
                }else if(x==233 && (y>215 && y<227)){
                    //ROW 3 COl 2
                    j=227;
                    pressed = 1;
                    pressed2=1;
                }else if(x==116 && (y>215 && y<227)){
                    //ROW 3 COl 1
                    j=227;
                    pressed = 1;
                    pressed2=1;
                }else if(x==387 && (y>215 && y<227)){
                    //ROW 3 COl 3
                    j=227;
                    pressed = 1;
                    pressed2=1;
                }else if(x==482 && (y>215 && y<227)){
                    //ROW 3 COl 4
                    j=227;
                    pressed = 1;
                    pressed2=1;
                }else if(x==613 && (y>208 && y<238)){
                    //ROW 3 COL 5
                    j=227;
                    pressed = 1;
                    pressed2=1;
                }else if(x==613 && (y>301 && y<329)){
                    //ROW 4 COL 5
                    j=318;
                    pressed = 1;
                    pressed2=1;
                }else if(x==300 && (y>304 && y<334)){
                    //ROW 4 CENTER
                    j=318;
                    pressed = 1;
                    pressed2=1;
                }else if((x==169||x==458) && (y>318 && y<329)){
                    //ROW 4 COL 1
                    j=318;
                    pressed = 1;
                    pressed2=1;
                }else if(x==300 && (y>435 && y<454)){
                    //ROW 5 COL 3
                    j=454;
                    pressed = 1;
                    pressed2=1;
                }else if(x==613 && (y>435 && y<454)){
                    //ROW 5 COL 4
                    j=454;
                    pressed = 1;
                    pressed2=1;
                }else if(x==169 && (y>435 && y<454)){
                    //ROW 5 COL 1
                    j=454;
                    pressed = 1;
                    pressed2=1;
                }else if(x==458 && (y>435 && y<454)){
                    //ROW 5 COL 3
                    j=454;
                    pressed = 1;
                    pressed2=1;
                }else if((x==116||x==233||x==387||x==482||x==613) && (y>67 && y<96)){
                    //ROW 2 COL 1-5
                    j=81;
                    pressed = 1;
                    pressed2=1;
                }else if(x==300&& (y>64 && y<81)){
                    //ROW 2 COL 2 CENTER
                    j=81;
                    pressed = 1;
                    pressed2=1;
                }else if(x==613&& (y>26 && y<39)){
                    //ROW 2 COL 2 CENTER
                    j=26;
                    pressed = 1;
                    pressed2=1;
                }else if(x==300&& (y>26 && y<39)){
                    //ROW 1 COL 2 CENTER
                    j=26;
                    pressed = 1;
                    pressed2=1;
                }else{
                    if(y==227){
                        i=-1;
                        j=0;
                        pressed2=1;
                    }
                    if(y==81){
                        i=-1;
                        j=0;
                        pressed2=1;
                    }
                    if(y==318){
                        i=-1;
                        j=0;
                        pressed2=1;
                    }
                    if(y==454){
                        i=-1;
                        j=0;
                        pressed2=1;
                    }
                    if(y==26){
                        i=-1;
                        j=0;
                        pressed2=1;
                    }
                }
            }
            if(c==77){
                //RIGHT
                //ROW 3
                if(x==300 && (y>224 && y<237)){
                    j=227;
                    pressed = 3;
                    pressed2 = 3;
                }else if(x==300 && (y>304 && y<334)){
                    //ROW 4 COL 3
                    j=318;
                    pressed2 = 3;
                    pressed = 3;
                }else if(x==26 && (y>304 && y<334)){
                    //ROW 4 COL 0
                    j=318;
                    pressed2 = 3;
                    pressed = 3;
                }else if(x==26 && (y>209 && y<242)){
                    //ROW 3 COl 0
                    j=227;
                    pressed2 = 3;
                    pressed = 3;
                }else if(x==116 && (y>209 && y<227)){
                    //ROW 3 COl 1
                    j=227;
                    pressed2 = 3;
                    pressed = 3;
                }else if(x==233 && (y>209 && y<227)){
                    //ROW 3 COl 2
                    j=227;
                    pressed2 = 3;
                    pressed = 3;
                }else if(x==387 && (y>215 && y<227)){
                    //ROW 3 COl 3
                    j=227;
                    pressed2 = 3;
                    pressed = 3;
                }else if(x==482 && (y>209 && y<227)){
                    //ROW 3 COl 4
                    j=227;
                    pressed2 = 3;
                    pressed = 3;
                }else if((x==169||x==458) && (y>318 && y<329)){
                    //ROW 4 COL 1 2
                    j=318;
                    pressed2 = 3;
                    pressed = 3;
                }else if(x==300 && (y>435 && y<453)){
                    //ROW 5 COL 3
                    j=454;
                    pressed2 = 3;
                    pressed = 3;
                }else if(x==26 && (y>435 && y<455)){
                    //ROW 5 COL 0
                    j=454;
                    pressed2 = 3;
                    pressed = 3;
                }else if(x==169 && (y>435 && y<454)){
                    //ROW 5 COL 1
                    j=454;
                    pressed2 = 3;
                    pressed = 3;
                }else if(x==458 && (y>435 && y<454)){
                    //ROW 5 COL 4
                    j=454;
                    pressed2 = 3;
                    pressed = 3;
                }else if((x==26||x==116||x==233||x==387||x==482) && (y>67 && y<96)){
                    //ROW 2 COL 1-5
                    j=81;
                    pressed2 = 3;
                    pressed = 3;
                }else if(x==300&& (y>64 && y<81)){
                    //ROW 2 COL 2 CENTER
                    j=81;
                    pressed2 = 3;
                    pressed = 3;
                }else if(x==26&& (y>25 && y<39)){
                    //ROW 2 COL 2 CENTER
                    j=26;
                    pressed2 = 3;
                    pressed = 3;
                }else if(x==300&& (y>26 && y<39)){
                    //ROW 2 COL 2 CENTER
                    j=26;
                    pressed2 = 3;
                    pressed = 3;
                }else{
                    if(y==227 && (x>26 && x<613)){
                        i=1;
                        j=0;
                        pressed2 = 3;
                    }
                    if(y==81 && (x>26 && x<613)){
                        i=1;
                        j=0;
                        pressed2 = 3;
                    }
                    if(y==318 && (x>26 && x<613)){
                        i=1;
                        j=0;
                        pressed2 = 3;
                    }
                    if(y==454 && (x>26 && x<613)){
                        i=1;
                        j=0;
                        pressed2 = 3;
                    }
                    if(y==26 && (x>26 && x<613)){
                        i=1;
                        j=0;
                        pressed2 = 3;
                    }
                }
            }
            if(c==113)
                exit(0);

        }
        switch(pressed){
            case 1:
                //LEFT
                x+=i;
                y=j;
                i=-1;
                j=0;
                break;
            case 2:
                //UP
                x=i;
                y+=j;
                i=0;
                j=-1;
                break;
            case 3:
                //RIGHT
                x+=i;
                y=j;
                i=1;
                j=0;
                break;
            case 4:
                //DOWN
                y+=j;
                x=i;
                i=0;
                j=1;
                break;
            case 0:
                if(pressed2==2&&((x==300 && y==227)||(x==233 && y==81)||(x==116 && y==81)||(x==387 && y==81)||(x==482 && y==81))){
                    i=0;j=0;
                    pressed2=0;
                }
                if(pressed2==2&&((x==169 && y==319)||(x==458 && y==319))){
                    i=0;j=0;
                    pressed2=0;
                }
                if(pressed2==2&&y==26){
                    i=0;j=0;
                    pressed2=0;
                }
                if(pressed2==4&&((x==116 && y==227)||(x==233 && y==227)||(x==387 && y==227)||(x==482 && y==227))){
                    i=0;j=0;
                    pressed2=0;
                }
                if(pressed2==4&&((y==454&&x==26)||(y==454&&x==169)||(y==454&&x==300)||(y==453&&x==458)||(y==454&&x==613)||(y==81&&x==300))){
                    i=0;j=0;
                    pressed2=0;
                }
                if(pressed2==3&&(x==613&&y==454||x==613&&y==318||x==613&&y==227||x==613&&y==81||x==613&&y==26)){
                    i=0;j=0;
                    pressed2=0;
                }
                if(pressed2==1&&(x==26&&y==454||x==26&&y==318||x==26&&y==227||x==26&&y==81||x==26&&y==26)){
                    i=0;j=0;
                    pressed2=0;
                }
                x+=i;
                y+=j;
                break;
        }
        pressed=0;

        //-------ENEMY------//
        if(enemyX==280&&(enemyY>81&&enemyY<=150)){
            enX=0;
            enY=-1;
        }else if(enemyY==81){
            if(enemyX==26){
                //LEFT
                randomIndex = rand() % 3;
                randomValue = left[randomIndex];
                switch(randomValue){
                    case 2:
                        enX=0;
                        enY=-1;
                        break;
                    case 3:
                        enX=1;
                        enY=0;
                        break;
                    case 4:
                        enX=0;
                        enY=1;
                        break;
                    default:
                        break;
                }
            }
            if(enemyX==280){
                //TOP
                randomIndex = rand() % 3;
                randomValue = top[randomIndex];
                switch(randomValue){
                    case 1:
                        enX=-1;
                        enY=0;
                        break;
                    case 3:
                        enX=1;
                        enY=0;
                        break;
                    default:
                        enX=1;
                        enY=0;
                        break;
                }
            }
            if(enemyX==116||enemyX==233||enemyX==387||enemyX==482){
                //TOP
                randomIndex = rand() % 3;
                randomValue = top[randomIndex];
                switch(randomValue){
                    case 1:
                        enX=-1;
                        enY=0;
                        break;
                    case 3:
                        enX=1;
                        enY=0;
                        break;
                    case 4:
                        enX=0;
                        enY=1;
                        break;
                    default:
                        break;
                }
            }
            if(enemyX==300){
				//BOTTOM
                randomIndex = rand() % 3;
                randomValue = bottom[randomIndex];
                switch(randomValue){
                    case 1:
                        enX=-1;
                        enY=0;
                        break;
                    case 3:
                        enX=1;
                        enY=0;
                        break;
                    case 2:
                        enX=0;
                        enY=-1;
                        break;
                    default:
                        break;
                }
            }
            if(enemyX==613){
                //right
                randomIndex = rand() % 3;
                randomValue = right[randomIndex];
                switch(randomValue){
                    case 2:
                        enX=0;
                        enY=-1;
                        break;
                    case 1:
                        enX=-1;
                        enY=0;
                        break;
                    case 4:
                        enX=0;
                        enY=1;
                        break;
                    default:
                        break;
                }
            }

        }else if(enemyY==227){
            if(enemyX==26){
                //LEFT
                randomIndex = rand() % 3;
                randomValue = left[randomIndex];
                switch(randomValue){
                    case 2:
                        enX=0;
                        enY=-1;
                        break;
                    case 4:
                        enX=0;
                        enY=1;
                        break;
                    case 3:
                        enX=1;
                        enY=0;
                        break;
                    default:
                        break;
                }
            }
            if(enemyX==116||enemyX==233||enemyX==387||enemyX==482){
                //BOTTOM
                randomIndex = rand() % 3;
                randomValue = bottom[randomIndex];
                switch(randomValue){
                    case 1:
                        enX=-1;
                        enY=0;
                        break;
                    case 3:
                        enX=1;
                        enY=0;
                        break;
                    case 2:
                        enX=0;
                        enY=-1;
                        break;
                    default:
                        break;
                }
            }
            if(enemyX==613){
                //RIGHT
                randomIndex = rand() % 3;
                randomValue = right[randomIndex];
                switch(randomValue){
                    case 2:
                        enX=0;
                        enY=-1;
                        break;
                    case 1:
                        enX=-1;
                        enY=0;
                        break;
                    case 4:
                        enX=0;
                        enY=1;
                        break;
                    default:
                        break;
                }
            }
            if(enemyX==300){
                //TOP
                randomIndex = rand() % 3;
                randomValue = bottom[randomIndex];
                switch(randomValue){
                    case 1:
                        enX=-1;
                        enY=0;
                        break;
                    case 3:
                        enX=1;
                        enY=0;
                        break;
                    case 4:
                        enX=0;
                        enY=1;
                        break;
                    default:
                        break;
                }
            }
        }else if(enemyY==318){
            if(enemyX==26){
                //LEFT
                randomIndex = rand() % 3;
                randomValue = left[randomIndex];
                switch(randomValue){
                    case 2:
                        enX=0;
                        enY=-1;
                        break;
                    case 3:
                        enX=1;
                        enY=0;
                        break;
                    case 4:
                        enX=0;
                        enY=1;
                        break;
                    default:
                        break;
                }
            }
            if(enemyX==169||enemyX==458){
                //TOP
                randomIndex = rand() % 3;
                randomValue = top[randomIndex];
                switch(randomValue){
                    case 1:
                        enX=-1;
                        enY=0;
                        break;
                    case 3:
                        enX=1;
                        enY=0;
                        break;
                    case 4:
                        enX=0;
                        enY=1;
                        break;
                    default:
                        break;
                }
            }
            if(enemyX==300){
                //CENTER
                randomIndex = rand() % 3;
                randomValue = center[randomIndex];
                switch(randomValue){
                    case 1:
                        enX=-1;
                        enY=0;
                        break;
                    case 3:
                        enX=1;
                        enY=0;
                        break;
                    case 2:
                        enX=0;
                        enY=-1;
                        break;
                    case 4:
                        enX=0;
                        enY=1;
                        break;
                    default:
                        break;
                }
            }
            if(enemyX==613){
                //RIGHT
                randomIndex = rand() % 3;
                randomValue = right[randomIndex];
                switch(randomValue){
                    case 2:
                        enX=0;
                        enY=-1;
                        break;
                    case 1:
                        enX=-1;
                        enY=0;
                        break;
                    case 4:
                        enX=0;
                        enY=1;
                        break;
                    default:
                        break;
                }
            }
        }else if(enemyY==454){
            if(enemyX==26){
                //LEFTDC
                randomIndex = rand() % 2;
                randomValue = leftdc[randomIndex];
                switch(randomValue){
                    case 2:
                        enX=0;
                        enY=-1;
                        break;
                    case 3:
                        enX=1;
                        enY=0;
                        break;
                    default:
                        break;
                }
            }
            if(enemyX==169||enemyX==458||enemyX==300){
                //BOTTOM
                randomIndex = rand() % 3;
                randomValue = bottom[randomIndex];
                switch(randomValue){
                    case 1:
                        enX=-1;
                        enY=0;
                        break;
                    case 3:
                        enX=1;
                        enY=0;
                        break;
                    case 2:
                        enX=0;
                        enY=-1;
                        break;
                    default:
                        break;
                }
            }
            if(enemyX==613){
                //RIGHTDC
                randomIndex = rand() % 2;
                randomValue = rightdc[randomIndex];
                switch(randomValue){
                    case 2:
                        enX=0;
                        enY=-1;
                        break;
                    case 1:
                        enX=-1;
                        enY=0;
                        break;
                    default:
                        break;
                }
            }
        }else if(enemyY==26){
            if(enemyX==26){
                //LEFTUC
                randomIndex = rand() % 2;
                randomValue = leftuc[randomIndex];
                switch(randomValue){
                    case 4:
                        enX=0;
                        enY=1;
                        break;
                    case 3:
                        enX=1;
                        enY=0;
                        break;
                    default:
                        break;
                }
            }
            if(enemyX==300){
                //TOP
                randomIndex = rand() % 3;
                randomValue = top[randomIndex];
                switch(randomValue){
                    case 1:
                        enX=-1;
                        enY=0;
                        break;
                    case 3:
                        enX=1;
                        enY=0;
                        break;
                    case 4:
                        enX=0;
                        enY=1;
                        break;
                    default:
                        break;
                }
            }
            if(enemyX==613){
                //RIGHT UC
                randomIndex = rand() % 2;
                randomValue = rightuc[randomIndex];
                switch(randomValue){
                    case 4:
                        enX=0;
                        enY=1;
                        break;
                    case 1:
                        enX=-1;
                        enY=0;
                        break;
                    default:
                        break;
                }
            }
        }else{
            //CENTER DEFAULT//
            switch(randomValue){
                case 1:
                    enX=-1;
                    enY=0;
                    break;
                case 2:
                    enX=0;
                    enY=-1;
                    break;
                case 3:
                    enX=1;
                    enY=0;
                    break;
                case 4:
                    enX=0;
                    enY=1;
                    break;
                default:
                    break;
            }

        }
        enemyX+=enX;
        enemyY+=enY;

        if(enemy2X==300&&(enemy2Y>81&&enemy2Y<=150)){
            en2X=0;
            en2Y=-1;
        }else if(enemy2Y==81){
            if(enemy2X==26){
                //LEFT
                randomIndex2 = rand() % 3;
                randomValue2 = left[randomIndex2];
                switch(randomValue2){
                    case 2:
                        en2X=0;
                        en2Y=-1;
                        break;
                    case 3:
                        en2X=1;
                        en2Y=0;
                        break;
                    case 4:
                        en2X=0;
                        en2Y=1;
                        break;
                    default:
                        break;
                }
            }
            if(enemy2X==280){
                //TOP
                randomIndex2 = rand() % 3;
                randomValue2 = top[randomIndex2];
                switch(randomValue2){
                    case 1:
                        en2X=-1;
                        en2Y=0;
                        break;
                    case 3:
                        en2X=1;
                        en2Y=0;
                        break;
                    default:
                        en2X=1;
                        en2Y=0;
                        break;
                }
            }
            if(enemy2X==116||enemy2X==233||enemy2X==387||enemy2X==482){
                //TOP
                randomIndex2 = rand() % 3;
                randomValue2 = top[randomIndex2];
                switch(randomValue2){
                    case 1:
                        en2X=-1;
                        en2Y=0;
                        break;
                    case 3:
                        en2X=1;
                        en2Y=0;
                        break;
                    case 4:
                        en2X=0;
                        en2Y=1;
                        break;
                    default:
                        break;
                }
            }
            if(enemy2X==300){
                //BOTTOM
                randomIndex2 = rand() % 3;
                randomValue2 = bottom[randomIndex2];
                switch(randomValue2){
                    case 1:
                        en2X=-1;
                        en2Y=0;
                        break;
                    case 3:
                        en2X=1;
                        en2Y=0;
                        break;
                    case 2:
                        en2X=0;
                        en2Y=-1;
                        break;
                    default:
                        break;
                }
            }
            if(enemy2X==613){
                //right
                randomIndex2 = rand() % 3;
                randomValue2 = right[randomIndex2];
                switch(randomValue2){
                    case 2:
                        en2X=0;
                        en2Y=-1;
                        break;
                    case 1:
                        en2X=-1;
                        en2Y=0;
                        break;
                    case 4:
                        en2X=0;
                        en2Y=1;
                        break;
                    default:
                        break;
                }
            }

        }else if(enemy2Y==227){
            if(enemy2X==26){
                //LEFT
                randomIndex2 = rand() % 3;
                randomValue2 = left[randomIndex2];
                switch(randomValue2){
                    case 2:
                        en2X=0;
                        en2Y=-1;
                        break;
                    case 4:
                        en2X=0;
                        en2Y=1;
                        break;
                    case 3:
                        en2X=1;
                        en2Y=0;
                        break;
                    default:
                        break;
                }
            }
            if(enemy2X==116||enemy2X==233||enemy2X==387||enemy2X==482){
                //BOTTOM
                randomIndex2 = rand() % 3;
                randomValue2 = bottom[randomIndex2];
                switch(randomValue2){
                    case 1:
                        en2X=-1;
                        en2Y=0;
                        break;
                    case 3:
                        en2X=1;
                        en2Y=0;
                        break;
                    case 2:
                        en2X=0;
                        en2Y=-1;
                        break;
                    default:
                        break;
                }
            }
            if(enemy2X==613){
                //RIGHT
                randomIndex2 = rand() % 3;
                randomValue2 = right[randomIndex2];
                switch(randomValue2){
                    case 2:
                        en2X=0;
                        en2Y=-1;
                        break;
                    case 1:
                        en2X=-1;
                        en2Y=0;
                        break;
                    case 4:
                        en2X=0;
                        en2Y=1;
                        break;
                    default:
                        break;
                }
            }
            if(enemy2X==300){
                //TOP
                randomIndex2 = rand() % 3;
                randomValue2 = bottom[randomIndex2];
                switch(randomValue2){
                    case 1:
                        en2X=-1;
                        en2Y=0;
                        break;
                    case 3:
                        en2X=1;
                        en2Y=0;
                        break;
                    case 4:
                        en2X=0;
                        en2Y=1;
                        break;
                    default:
                        break;
                }
            }
        }else if(enemy2Y==318){
            if(enemy2X==26){
                //LEFT
                randomIndex2 = rand() % 3;
                randomValue2 = left[randomIndex2];
                switch(randomValue2){
                    case 2:
                        en2X=0;
                        en2Y=-1;
                        break;
                    case 3:
                        en2X=1;
                        en2Y=0;
                        break;
                    case 4:
                        en2X=0;
                        en2Y=1;
                        break;
                    default:
                        break;
                }
            }
            if(enemy2X==169||enemy2X==458){
                //TOP
                randomIndex2 = rand() % 3;
                randomValue2 = top[randomIndex2];
                switch(randomValue2){
                    case 1:
                        en2X=-1;
                        en2Y=0;
                        break;
                    case 3:
                        en2X=1;
                        en2Y=0;
                        break;
                    case 4:
                        en2X=0;
                        en2Y=1;
                        break;
                    default:
                        break;
                }
            }
            if(enemy2X==300){
                //CENTER
                randomIndex2 = rand() % 3;
                randomValue2 = center[randomIndex2];
                switch(randomValue2){
                    case 1:
                        en2X=-1;
                        en2Y=0;
                        break;
                    case 3:
                        en2X=1;
                        en2Y=0;
                        break;
                    case 2:
                        en2X=0;
                        en2Y=-1;
                        break;
                    case 4:
                        en2X=0;
                        en2Y=1;
                        break;
                    default:
                        break;
                }
            }
            if(enemy2X==613){
                //RIGHT
                randomIndex2 = rand() % 3;
                randomValue2 = right[randomIndex2];
                switch(randomValue2){
                    case 2:
                        en2X=0;
                        en2Y=-1;
                        break;
                    case 1:
                        en2X=-1;
                        en2Y=0;
                        break;
                    case 4:
                        en2X=0;
                        en2Y=1;
                        break;
                    default:
                        break;
                }
            }
        }else if(enemy2Y==454){
            if(enemy2X==26){
                //LEFTDC
                randomIndex2 = rand() % 2;
                randomValue2 = leftdc[randomIndex2];
                switch(randomValue2){
                    case 2:
                        en2X=0;
                        en2Y=-1;
                        break;
                    case 3:
                        en2X=1;
                        en2Y=0;
                        break;
                    default:
                        break;
                }
            }
            if(enemy2X==169||enemy2X==458||enemy2X==300){
                //BOTTOM
                randomIndex2 = rand() % 3;
                randomValue2 = bottom[randomIndex2];
                switch(randomValue2){
                    case 1:
                        en2X=-1;
                        en2Y=0;
                        break;
                    case 3:
                        en2X=1;
                        en2Y=0;
                        break;
                    case 2:
                        en2X=0;
                        en2Y=-1;
                        break;
                    default:
                        break;
                }
            }
            if(enemy2X==613){
                //RIGHTDC
                randomIndex2 = rand() % 2;
                randomValue2 = rightdc[randomIndex2];
                switch(randomValue2){
                    case 2:
                        en2X=0;
                        en2Y=-1;
                        break;
                    case 1:
                        en2X=-1;
                        en2Y=0;
                        break;
                    default:
                        break;
                }
            }
        }else if(enemy2Y==26){
            if(enemy2X==26){
                //LEFTUC
                randomIndex2 = rand() % 2;
                randomValue2 = leftuc[randomIndex2];
                switch(randomValue2){
                    case 4:
                        en2X=0;
                        en2Y=1;
                        break;
                    case 3:
                        en2X=1;
                        en2Y=0;
                        break;
                    default:
                        break;
                }
            }
            if(enemy2X==300){
                //TOP
                randomIndex2 = rand() % 3;
                randomValue2 = top[randomIndex2];
                switch(randomValue2){
                    case 1:
                        en2X=-1;
                        en2Y=0;
                        break;
                    case 3:
                        en2X=1;
                        en2Y=0;
                        break;
                    case 4:
                        en2X=0;
                        en2Y=1;
                        break;
                    default:
                        break;
                }
            }
            if(enemy2X==613){
                //RIGHT UC
                randomIndex2 = rand() % 2;
                randomValue2 = rightuc[randomIndex2];
                switch(randomValue2){
                    case 4:
                        en2X=0;
                        en2Y=1;
                        break;
                    case 1:
                        en2X=-1;
                        en2Y=0;
                        break;
                    default:
                        break;
                }
            }
        }else{
            //CENTER DEFAULT//
            switch(randomValue2){
                case 1:
                    en2X=-1;
                    en2Y=0;
                    break;
                case 2:
                    en2X=0;
                    en2Y=-1;
                    break;
                case 3:
                    en2X=1;
                    en2Y=0;
                    break;
                case 4:
                    en2X=0;
                    en2Y=1;
                    break;
                default:
                    break;
            }

        }
        enemy2X+=en2X;
        enemy2Y+=en2Y;

        if(enemy3X==300&&(enemy3Y>81&&enemy3Y<=150)){
            en3X=0;
            en3Y=-1;
        }else if(enemy3Y==81){
            if(enemy3X==26){
                //LEFT
                randomIndex3 = rand() % 3;
                randomValue3 = left[randomIndex3];
                switch(randomValue3){
                    case 2:
                        en3X=0;
                        en3Y=-1;
                        break;
                    case 3:
                        en3X=1;
                        en3Y=0;
                        break;
                    case 4:
                        en3X=0;
                        en3Y=1;
                        break;
                    default:
                        break;
                }
            }
            if(enemy3X==280){
                //TOP
                randomIndex3 = rand() % 3;
                randomValue3 = top[randomIndex3];
                switch(randomValue3){
                    case 1:
                        en3X=-1;
                        en3Y=0;
                        break;
                    case 3:
                        en3X=1;
                        en3Y=0;
                        break;
                    default:
                        en3X=1;
                        en3Y=0;
                        break;
                }
            }
            if(enemy3X==116||enemy3X==233||enemy3X==387||enemy3X==482){
                //TOP
                randomIndex3 = rand() % 3;
                randomValue3 = top[randomIndex3];
                switch(randomValue3){
                    case 1:
                        en3X=-1;
                        en3Y=0;
                        break;
                    case 3:
                        en3X=1;
                        en3Y=0;
                        break;
                    case 4:
                        en3X=0;
                        en3Y=1;
                        break;
                    default:
                        break;
                }
            }
            if(enemy3X==300){
                //BOTTOM
                randomIndex3 = rand() % 3;
                randomValue3 = bottom[randomIndex3];
                switch(randomValue3){
                    case 1:
                        en3X=-1;
                        en3Y=0;
                        break;
                    case 3:
                        en3X=1;
                        en3Y=0;
                        break;
                    case 2:
                        en3X=0;
                        en3Y=-1;
                        break;
                    default:
                        break;
                }
            }
            if(enemy3X==613){
                //right
                randomIndex3 = rand() % 3;
                randomValue3 = right[randomIndex3];
                switch(randomValue3){
                    case 2:
                        en3X=0;
                        en3Y=-1;
                        break;
                    case 1:
                        en3X=-1;
                        en3Y=0;
                        break;
                    case 4:
                        en3X=0;
                        en3Y=1;
                        break;
                    default:
                        break;
                }
            }

        }else if(enemy3Y==227){
            if(enemy3X==26){
                //LEFT
                randomIndex3 = rand() % 3;
                randomValue3 = left[randomIndex3];
                switch(randomValue3){
                    case 2:
                        en3X=0;
                        en3Y=-1;
                        break;
                    case 4:
                        en3X=0;
                        en3Y=1;
                        break;
                    case 3:
                        en3X=1;
                        en3Y=0;
                        break;
                    default:
                        break;
                }
            }
            if(enemy3X==116||enemy3X==233||enemy3X==387||enemy3X==482){
                //BOTTOM
                randomIndex3 = rand() % 3;
                randomValue3 = bottom[randomIndex3];
                switch(randomValue3){
                    case 1:
                        en3X=-1;
                        en3Y=0;
                        break;
                    case 3:
                        en3X=1;
                        en3Y=0;
                        break;
                    case 2:
                        en3X=0;
                        en3Y=-1;
                        break;
                    default:
                        break;
                }
            }
            if(enemy3X==613){
                //RIGHT
                randomIndex3 = rand() % 3;
                randomValue3 = right[randomIndex3];
                switch(randomValue3){
                    case 2:
                        en3X=0;
                        en3Y=-1;
                        break;
                    case 1:
                        en3X=-1;
                        en3Y=0;
                        break;
                    case 4:
                        en3X=0;
                        en3Y=1;
                        break;
                    default:
                        break;
                }
            }
            if(enemy3X==300){
                //TOP
                randomIndex3 = rand() % 3;
                randomValue3 = bottom[randomIndex3];
                switch(randomValue3){
                    case 1:
                        en3X=-1;
                        en3Y=0;
                        break;
                    case 3:
                        en3X=1;
                        en3Y=0;
                        break;
                    case 4:
                        en3X=0;
                        en3Y=1;
                        break;
                    default:
                        break;
                }
            }
        }else if(enemy3Y==318){
            if(enemy3X==26){
                //LEFT
                randomIndex3 = rand() % 3;
                randomValue3 = left[randomIndex3];
                switch(randomValue3){
                    case 2:
                        en3X=0;
                        en3Y=-1;
                        break;
                    case 3:
                        en3X=1;
                        en3Y=0;
                        break;
                    case 4:
                        en3X=0;
                        en3Y=1;
                        break;
                    default:
                        break;
                }
            }
            if(enemy3X==169||enemy3X==458){
                //TOP
                randomIndex3 = rand() % 3;
                randomValue3 = top[randomIndex3];
                switch(randomValue3){
                    case 1:
                        en3X=-1;
                        en3Y=0;
                        break;
                    case 3:
                        en3X=1;
                        en3Y=0;
                        break;
                    case 4:
                        en3X=0;
                        en3Y=1;
                        break;
                    default:
                        break;
                }
            }
            if(enemy3X==300){
                //CENTER
                randomIndex3 = rand() % 3;
                randomValue3 = center[randomIndex3];
                switch(randomValue3){
                    case 1:
                        en3X=-1;
                        en3Y=0;
                        break;
                    case 3:
                        en3X=1;
                        en3Y=0;
                        break;
                    case 2:
                        en3X=0;
                        en3Y=-1;
                        break;
                    case 4:
                        en3X=0;
                        en3Y=1;
                        break;
                    default:
                        break;
                }
            }
            if(enemy3X==613){
                //RIGHT
                randomIndex3 = rand() % 3;
                randomValue3 = right[randomIndex3];
                switch(randomValue3){
                    case 2:
                        en3X=0;
                        en3Y=-1;
                        break;
                    case 1:
                        en3X=-1;
                        en3Y=0;
                        break;
                    case 4:
                        en3X=0;
                        en3Y=1;
                        break;
                    default:
                        break;
                }
            }
        }else if(enemy3Y==454){
            if(enemy3X==26){
                //LEFTDC
                randomIndex3 = rand() % 2;
                randomValue3 = leftdc[randomIndex3];
                switch(randomValue3){
                    case 2:
                        en3X=0;
                        en3Y=-1;
                        break;
                    case 3:
                        en3X=1;
                        en3Y=0;
                        break;
                    default:
                        break;
                }
            }
            if(enemy3X==169||enemy3X==458||enemy3X==300){
                //BOTTOM
                randomIndex3 = rand() % 3;
                randomValue3 = bottom[randomIndex3];
                switch(randomValue3){
                    case 1:
                        en3X=-1;
                        en3Y=0;
                        break;
                    case 3:
                        en3X=1;
                        en3Y=0;
                        break;
                    case 2:
                        en3X=0;
                        en3Y=-1;
                        break;
                    default:
                        break;
                }
            }
            if(enemy3X==613){
                //RIGHTDC
                randomIndex3 = rand() % 2;
                randomValue3 = rightdc[randomIndex3];
                switch(randomValue3){
                    case 2:
                        en3X=0;
                        en3Y=-1;
                        break;
                    case 1:
                        en3X=-1;
                        en3Y=0;
                        break;
                    default:
                        break;
                }
            }
        }else if(enemy3Y==26){
            if(enemy3X==26){
                //LEFTUC
                randomIndex3 = rand() % 2;
                randomValue3 = leftuc[randomIndex3];
                switch(randomValue3){
                    case 4:
                        en3X=0;
                        en3Y=1;
                        break;
                    case 3:
                        en3X=1;
                        en3Y=0;
                        break;
                    default:
                        break;
                }
            }
            if(enemy3X==300){
                //TOP
                randomIndex3 = rand() % 3;
                randomValue3 = top[randomIndex3];
                switch(randomValue3){
                    case 1:
                        en3X=-1;
                        en3Y=0;
                        break;
                    case 3:
                        en3X=1;
                        en3Y=0;
                        break;
                    case 4:
                        en3X=0;
                        en3Y=1;
                        break;
                    default:
                        break;
                }
            }
            if(enemy3X==613){
                //RIGHT UC
                randomIndex3 = rand() % 2;
                randomValue3 = rightuc[randomIndex3];
                switch(randomValue3){
                    case 4:
                        en3X=0;
                        en3Y=1;
                        break;
                    case 1:
                        en3X=-1;
                        en3Y=0;
                        break;
                    default:
                        break;
                }
            }
        }else{
            //CENTER DEFAULT//
            switch(randomValue3){
                case 1:
                    en3X=-1;
                    en3Y=0;
                    break;
                case 2:
                    en3X=0;
                    en3Y=-1;
                    break;
                case 3:
                    en3X=1;
                    en3Y=0;
                    break;
                case 4:
                    en3X=0;
                    en3Y=1;
                    break;
                default:
                    break;
            }

        }
        enemy3X+=en3X;
        enemy3Y+=en3Y;

        if(enemy4X==300&&(enemy4Y>81&&enemy4Y<=150)){
            en4X=0;
            en4Y=-1;
        }else if(enemy4Y==81){
            if(enemy4X==26){
                //LEFT
                randomIndex4 = rand() % 3;
                randomValue4 = left[randomIndex4];
                switch(randomValue4){
                    case 2:
                        en4X=0;
                        en4Y=-1;
                        break;
                    case 3:
                        en4X=1;
                        en4Y=0;
                        break;
                    case 4:
                        en4X=0;
                        en4Y=1;
                        break;
                    default:
                        break;
                }
            }
            if(enemy4X==280){
                //TOP
                randomIndex4 = rand() % 3;
                randomValue4 = top[randomIndex4];
                switch(randomValue4){
                    case 1:
                        en4X=-1;
                        en4Y=0;
                        break;
                    case 3:
                        en4X=1;
                        en4Y=0;
                        break;
                    default:
                        en4X=1;
                        en4Y=0;
                        break;
                }
            }
            if(enemy4X==116||enemy4X==233||enemy4X==387||enemy4X==482){
                //TOP
                randomIndex4 = rand() % 3;
                randomValue4 = top[randomIndex4];
                switch(randomValue4){
                    case 1:
                        en4X=-1;
                        en4Y=0;
                        break;
                    case 3:
                        en4X=1;
                        en4Y=0;
                        break;
                    case 4:
                        en4X=0;
                        en4Y=1;
                        break;
                    default:
                        break;
                }
            }
            if(enemy4X==300){
                //BOTTOM
                randomIndex4 = rand() % 3;
                randomValue4 = bottom[randomIndex4];
                switch(randomValue4){
                    case 1:
                        en4X=-1;
                        en4Y=0;
                        break;
                    case 3:
                        en4X=1;
                        en4Y=0;
                        break;
                    case 2:
                        en4X=0;
                        en4Y=-1;
                        break;
                    default:
                        break;
                }
            }
            if(enemy4X==613){
                //right
                randomIndex4 = rand() % 3;
                randomValue4 = right[randomIndex4];
                switch(randomValue4){
                    case 2:
                        en4X=0;
                        en4Y=-1;
                        break;
                    case 1:
                        en4X=-1;
                        en4Y=0;
                        break;
                    case 4:
                        en4X=0;
                        en4Y=1;
                        break;
                    default:
                        break;
                }
            }

        }else if(enemy4Y==227){
            if(enemy4X==26){
                //LEFT
                randomIndex4 = rand() % 3;
                randomValue4 = left[randomIndex4];
                switch(randomValue4){
                    case 2:
                        en4X=0;
                        en4Y=-1;
                        break;
                    case 4:
                        en4X=0;
                        en4Y=1;
                        break;
                    case 3:
                        en4X=1;
                        en4Y=0;
                        break;
                    default:
                        break;
                }
            }
            if(enemy4X==116||enemy4X==233||enemy4X==387||enemy4X==482){
                //BOTTOM
                randomIndex4 = rand() % 3;
                randomValue4 = bottom[randomIndex4];
                switch(randomValue4){
                    case 1:
                        en4X=-1;
                        en4Y=0;
                        break;
                    case 3:
                        en4X=1;
                        en4Y=0;
                        break;
                    case 2:
                        en4X=0;
                        en4Y=-1;
                        break;
                    default:
                        break;
                }
            }
            if(enemy4X==613){
                //RIGHT
                randomIndex4 = rand() % 3;
                randomValue4 = right[randomIndex4];
                switch(randomValue4){
                    case 2:
                        en4X=0;
                        en4Y=-1;
                        break;
                    case 1:
                        en4X=-1;
                        en4Y=0;
                        break;
                    case 4:
                        en4X=0;
                        en4Y=1;
                        break;
                    default:
                        break;
                }
            }
            if(enemy4X==300){
                //TOP
                randomIndex4 = rand() % 3;
                randomValue4 = bottom[randomIndex4];
                switch(randomValue4){
                    case 1:
                        en4X=-1;
                        en4Y=0;
                        break;
                    case 3:
                        en4X=1;
                        en4Y=0;
                        break;
                    case 4:
                        en4X=0;
                        en4Y=1;
                        break;
                    default:
                        break;
                }
            }
        }else if(enemy4Y==318){
            if(enemy4X==26){
                //LEFT
                randomIndex4 = rand() % 3;
                randomValue4 = left[randomIndex4];
                switch(randomValue4){
                    case 2:
                        en4X=0;
                        en4Y=-1;
                        break;
                    case 3:
                        en4X=1;
                        en4Y=0;
                        break;
                    case 4:
                        en4X=0;
                        en4Y=1;
                        break;
                    default:
                        break;
                }
            }
            if(enemy4X==169||enemy4X==458){
                //TOP
                randomIndex4 = rand() % 3;
                randomValue4 = top[randomIndex4];
                switch(randomValue4){
                    case 1:
                        en4X=-1;
                        en4Y=0;
                        break;
                    case 3:
                        en4X=1;
                        en4Y=0;
                        break;
                    case 4:
                        en4X=0;
                        en4Y=1;
                        break;
                    default:
                        break;
                }
            }
            if(enemy4X==300){
                //CENTER
                randomIndex4 = rand() % 3;
                randomValue4 = center[randomIndex4];
                switch(randomValue4){
                    case 1:
                        en4X=-1;
                        en4Y=0;
                        break;
                    case 3:
                        en4X=1;
                        en4Y=0;
                        break;
                    case 2:
                        en4X=0;
                        en4Y=-1;
                        break;
                    case 4:
                        en4X=0;
                        en4Y=1;
                        break;
                    default:
                        break;
                }
            }
            if(enemy4X==613){
                //RIGHT
                randomIndex4 = rand() % 3;
                randomValue4 = right[randomIndex4];
                switch(randomValue4){
                    case 2:
                        en4X=0;
                        en4Y=-1;
                        break;
                    case 1:
                        en4X=-1;
                        en4Y=0;
                        break;
                    case 4:
                        en4X=0;
                        en4Y=1;
                        break;
                    default:
                        break;
                }
            }
        }else if(enemy4Y==454){
            if(enemy4X==26){
                //LEFTDC
                randomIndex4 = rand() % 2;
                randomValue4 = leftdc[randomIndex4];
                switch(randomValue4){
                    case 2:
                        en4X=0;
                        en4Y=-1;
                        break;
                    case 3:
                        en4X=1;
                        en4Y=0;
                        break;
                    default:
                        break;
                }
            }
            if(enemy4X==169||enemy4X==458||enemy4X==300){
                //BOTTOM
                randomIndex4 = rand() % 3;
                randomValue4 = bottom[randomIndex4];
                switch(randomValue4){
                    case 1:
                        en4X=-1;
                        en4Y=0;
                        break;
                    case 3:
                        en4X=1;
                        en4Y=0;
                        break;
                    case 2:
                        en4X=0;
                        en4Y=-1;
                        break;
                    default:
                        break;
                }
            }
            if(enemy4X==613){
                //RIGHTDC
                randomIndex4 = rand() % 2;
                randomValue4 = rightdc[randomIndex4];
                switch(randomValue4){
                    case 2:
                        en4X=0;
                        en4Y=-1;
                        break;
                    case 1:
                        en4X=-1;
                        en4Y=0;
                        break;
                    default:
                        break;
                }
            }
        }else if(enemy4Y==26){
            if(enemy4X==26){
                //LEFTUC
                randomIndex4 = rand() % 2;
                randomValue4 = leftuc[randomIndex4];
                switch(randomValue4){
                    case 4:
                        en4X=0;
                        en4Y=1;
                        break;
                    case 3:
                        en4X=1;
                        en4Y=0;
                        break;
                    default:
                        break;
                }
            }
            if(enemy4X==300){
                //TOP
                randomIndex4 = rand() % 3;
                randomValue4 = top[randomIndex4];
                switch(randomValue4){
                    case 1:
                        en4X=-1;
                        en4Y=0;
                        break;
                    case 3:
                        en4X=1;
                        en4Y=0;
                        break;
                    case 4:
                        en4X=0;
                        en4Y=1;
                        break;
                    default:
                        break;
                }
            }
            if(enemy4X==613){
                //RIGHT UC
                randomIndex4 = rand() % 2;
                randomValue4 = rightuc[randomIndex4];
                switch(randomValue4){
                    case 4:
                        en4X=0;
                        en4Y=1;
                        break;
                    case 1:
                        en4X=-1;
                        en4Y=0;
                        break;
                    default:
                        break;
                }
            }
        }else{
            //CENTER DEFAULT//
            switch(randomValue4){
                case 1:
                    en4X=-1;
                    en4Y=0;
                    break;
                case 2:
                    en4X=0;
                    en4Y=-1;
                    break;
                case 3:
                    en4X=1;
                    en4Y=0;
                    break;
                case 4:
                    en4X=0;
                    en4Y=1;
                    break;
                default:
                    break;
            }

        }
        enemy4X+=en4X;
        enemy4Y+=en4Y;
        //END ENEMY//

        page=1-page;

        //COLLISION PACMAN/ENEMY
        double dx = enemyX-x;
        double dy = enemyY-y;
        double rad = 30;
        if((dx*dx)+(dy*dy)<(rad*rad)){
            play = 0;
        }
        dx = enemy2X-x;
        dy = enemy2Y-y;
        if((dx*dx)+(dy*dy)<(rad*rad)){
            play = 0;
        }
        dx = enemy3X-x;
        dy = enemy3Y-y;
        if((dx*dx)+(dy*dy)<(rad*rad)){
            play = 0;
        }
        dx = enemy4X-x;
        dy = enemy4Y-y;
        if((dx*dx)+(dy*dy)<(rad*rad)){
            play = 0;
        }
        //END COLLISION PACMAN/ENEMY

        if(score==115)
            play=3;

        delay(0);
    }
    cleardevice();
    if(play==3)
        won(score,play);
    else if(play==0)
        lose(score,play);
}

void lose(int score, int play){
    int x=0; char c;
    char displayScore[50],displayFail[50],choose[50];
    while(x==0){
        setactivepage(play);
        setvisualpage(1+play);
        sprintf(displayFail,"YOU LOSE!");
        sprintf(displayScore,"SCORE %d",score);
        outtextxy(250,270,displayScore);
        outtextxy(250,280,displayFail);
        sprintf(choose,"PRESS SPACE TO PLAY AGAIN || PRESS Q TO QUIT");
        outtextxy(150,290,choose);
        if(kbhit()){
            c=getch();
            if(c==113)
                exit(0);
            if(c==32){
                pacmangame();
            }

        }
        play = 1+play;

    }
}
void won(int score, int play){
    int x=0; char c;
    char displayScore[50],displaySucc[50],choose[50];
    while(x==0){
        setactivepage(play);
        setvisualpage(1-play);
        sprintf(displaySucc,"YOU WON!");
        sprintf(displayScore,"SCORE %d",score);
        outtextxy(250,270,displayScore);
        outtextxy(250,280,displaySucc);
        sprintf(choose,"PRESS SPACE TO PLAY AGAIN || PRESS Q TO QUIT");
        outtextxy(150,290,choose);
        if(kbhit()){
            c=getch();
            if(c==113)
                exit(0);
            if(c==32){
                pacmangame
            ();
            }
        }
        play = 1-play;
    }
}

int main(){
    int gdriver=DETECT,gmode;
    initgraph(&gdriver,&gmode,"c:/turboc3/bgi");
    pacmangame();
    getch();
    closegraph();
    return 0;
}
