#include <stdio.h>

typedef struct{
  char name[32];
  int score;
} Student;



int main(void) {
  Student team[5] = {
    {"A",76},
    {"A",80},
    {"A",76},
    {"A",76},
    {"A",76},
  };

  int max = 0;
  int sum = 0;

  for(int i = 0;i < 5; i++){
    sum += team[i].score;
    if(team[i].score > team[max].score){
      max = i;
    }
  }

  printf("平均点は：%.2f,最高得点は：%d\n",(double)sum/5,team[max].score);
  return 0;
}