#include <stdio.h>
#define N 4
struct student{
char name[20];
int eng;
int math;
int phys;
};
struct student data[]={
{"Ram", 82, 72, 58},
{"Hari", 77, 82, 79},
{"Ashesh", 52, 62, 39},
{"Aayush", 61, 82, 88}
};
int main(void)
{
int i;
float mean=0;
for(i=0; i<N; i++){
printf("%7s: \tEng = %3d \tMath = %3d \tPhys = %3d \tMean=%.2f\t",
data[i].name, data[i].eng, data[i].math, data[i].phys,mean=(data[i].eng+data[i].math+data[i].phys)/3);
if(mean<=100 && mean>=90){printf("Grade=A+");}
else if(mean<=90 && mean>=80){printf("Grade=A");}
else if(mean<=80 && mean>=70){printf("Grade=B+");}
else if(mean<=70 && mean>=60){printf("Grade=B");}
else if(mean<=60 && mean>=50){printf("Grade=C+");}
else if(mean<=50 && mean>=40){printf("Grade=C");}
else if(mean<=40 && mean>=30){printf("Grade=D+");}
else if(mean<=30 && mean>=20){printf("Grade=D");}
else{printf("Grade=E");}
printf("\n");

}
return(0);

}


