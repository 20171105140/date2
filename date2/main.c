//
//  main.c
//  date2
//
//  Created by 张学飞 on 18/6/29.
//  Copyright © 2018年 张学飞. All rights reserved.
//

/*#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    return 0;
}*/
#include<stdio.h> 
#include<stdlib.h>
#include<string.h> 
struct Excle{
    int SN;
    char name;
    char sex;
    int dob;
    char class;
    int num;
    char name1;
    char name2;
    char name3;
    char name4;
    char name5;
    int score;
};
struct scorelist {  int SN;//定义一个记录成绩的结构体
    char name[10];
    char sex;
    int dob;
    struct score[5];
};
int n=0;
struct scorelist score[200];

//遍历查找用户所输入的学号
/*for(i=0;i<n;i++)     if(score[i].num==xh){        j=i;flag=1;}        if(flag==0) printf("*****抱歉没有找到.******"); // 没有找到，跳出        else //找到了用户输入的学号，打印        { printf("学号:%d  姓名: %s\n",score[j].num,score[j].name);      printf("**课程编号         课程名称        课程成绩      课程学分**\n");          for(i=0;i<4;i++)
{printf("%d         %s         %d       %5.2f\n",score[j].subject[i].num,   score[j].subject[i].name,score[j].subject[i].result,score[j].subject[i].credit);   }        }        break;
// 根据姓名查询     case 2:
// 遍历查找用户输入的姓名           for(i=0;i<n;i++)     if(strcmp(score[i].name,xm)==0)         {j=i;flag=1;         }     if(!flag) printf("*****抱歉没有找到.******");        else // 找到了用户输入的学生姓名，打印      { printf("学号:%d  姓名: %s\n",score[j].num,score[j].name);      printf("课程编号         课程名称        课程成绩      课程学分\n");          for(i=0;i<4;i++)                 {
printf("%d           %s           %d         %f\n",score[j].subject[i].num,   score[j].subject[i].name,score[j].subject[i].result,score[j].subject[i].credit);   }      }      break;
default:printf("****输入错误!!****");           }     }*/
