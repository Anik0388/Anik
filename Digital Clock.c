#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<stdlib.h>
#include<string.h>


int main()
{
    
    int hour,min,second;
    int h=0,m=0,s=0;
    scanf("%d%d%d",&h,&m,&s);
    
    
    while(1)
    {
        //clrscr();
        system("cls");
        if (h==0 ||h==1 ||h==2 ||h==3 ||h==4 ||h==5 ||h==6 ||h==7 ||h==8 ||h==9 ||h==10 ||h==11)
        {
            if (h==0)
            {
                printf("\t\t\t\t%.2d : %.2d : %.2d AM\n", 12,m,s);
            }
            else
                printf("\t\t\t\t%.2d : %.2d : %.2d AM\n", h,m,s);
        }
            
            if(h==12)
                printf("\t\t\t\t%.2d :%.2d :%.2d PM\n", 12,m,s);
            else if(h==13 || h==14|| h==15|| h==16|| h==17|| h==18|| h==19|| h==20|| h==21|| h==22|| h==23)
                printf("\t\t\t\t%.2d :%.2d :%.2d PM\n", h-12,m,s);
            /*if(h==14)
            printf("\t\t\t\t%.2d :%.2d :%.2d PM\n", h-12,m,s);
            if(h==15)
            printf("\t\t\t\t%.2d :%.2d :%.2d PM\n", h-12,m,s);
            if(h==16)
            printf("\t\t\t\t%.2d :%.2d :%.2d PM\n", h-12,m,s);
            if(h==17)
            printf("\t\t\t\t%.2d :%.2d :%.2d PM\n", h-12,m,s);
            if(h==18)
            printf("\t\t\t\t%.2d :%.2d :%.2d PM\n", h-12,m,s);
            if(h==19)
            printf("\t\t\t\t%.2d :%.2d :%.2d PM\n", h-12,m,s);
            if(h==20)
            printf("\t\t\t\t%.2d :%.2d :%.2d PM\n", h-12,m,s);
            if(h==21)
            printf("\t\t\t\t%.2d :%.2d :%.2d PM\n", h-12,m,s);
            if(h==22)
            printf("\t\t\t\t%.2d :%.2d :%.2d PM\n", h-12,m,s);
            if(h==23)
            printf("\t\t\t\t%.2d :%.2d :%.2d PM\n", h-12,m,s);*/
        
        s++;
        Sleep(1000);
        if (s==60)
        {
            m++;
            s=0;
        }
        if (m==60)
        {
            h++;
            m=0;
        }
        if (h==24)
        {
            h=0;
            s=0;
            m=0;
        }
    }
    getch();
}