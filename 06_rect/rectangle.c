#include<stdio.h>
#include<stdlib.h>
int max(int a,int b){
  if(a>b){
    return a;
  }
    else
      return b;
}

int min(int c, int d){
  if(c<d){
    return c;
  }
  else
    return d;
}

typedef struct rectangle{
  int x;
  int y;
  int height;
  int width;
}rectangle;

rectangle canonicalize(rectangle r){
  if (r.width<0){
    r.x+=r.width;
    r.width = r.width * (-1);
  }
  if (r.height<0){
    r.y += r.height;
    r.height = r.height * (-1);

  }
  return r;
}

rectangle intersection(rectangle r1, rectangle r2){

  rectangle inter_rect;

  r1 = canonicalize(r1);
  r2 = canonicalize(r2);

  if(((r1.x + r1.width < r2.x)|| (r2.x + r2.width < r1.x))|| ((r1.y + r1.height < r2.y) || (r2.y + r2.height < r1.y))){
    inter_rect.x = 0;
    inter_rect.y = 0;
    inter_rect.width = 0;
    inter_rect.height = 0;

    return inter_rect;
  }

  inter_rect.x = max(r1.x, r2.x);
  inter_rect.width = min(r1.x + r1.width, r2.x + r2.width) - inter_rect.x;
  inter_rect.y = max(r1.y, r2.y);
  inter_rect.height = min(r1.y + r1.height, r2.y + r2.height) - inter_rect.y;

  return inter_rect;
}


void print(rectangle r){
  r = canonicalize(r);
  if(r.width == 0 && r.height == 0){
    printf("<empty>\n");
  }
  else {
    printf("(%d,%d) to (%d,%d)\n", r.x, r.y, r.x + r.width, r.y + r.height);
  }
}

int main(){
  rectangle r1;
  rectangle r2;
  rectangle r3;
  rectangle r4;

  r1.x = 2;
  r1.y = 3;
  r1.width = 5;
  r1.height = 6;
  printf("r1 is ");
  print(r1);

  r2.x = 4;
  r2.y = 5;
  r2.width = -5;
  r2.height = -7;
  printf("r2 is ");
  print(r2);

  r3.x = -2;
  r3.y = 7;
  r3.width = 7;
  r3.height = 10;
  printf("r3 is ");
  print(r3);

  r4.x = 0;
  r4.y = 7;
  r4.width = -4;
  r4.height = 2;
  printf("r4 is ");
  print(r4);

   
  rectangle i = intersection(r1,r1);
  printf("Intersection(r1,r1): ");
  print(i);
  
  
  i = intersection(r1,r2);
  printf("Intersection(r1,r2): ");
  print(i);
  

  i = intersection(r1,r3);
  printf("Intersection(r1,r3): ");
  print(i);
  
  i = intersection(r1,r4);
  printf("Intersection(r1,r4): ");
  print(i);
 

  i = intersection(r2,r1);
  printf("Intersection(r2,r1): ");
  print(i);
  
  
  i = intersection(r2,r2);
  printf("Intersection(r2,r2): ");
  print(i);
  
  
  i = intersection(r2,r3);
  printf("Intersection(r2,r3): ");
  print(i);


  i = intersection(r2,r4);
  printf("Intersection(r2,r4): ");
  print(i);
  
  
  i = intersection(r3,r1);
  printf("Intersection(r3,r1): ");
  print(i);
  
  
  i = intersection(r3,r2);
  printf("Intersection(r3,r2): ");
  print(i);
  
  
  i = intersection(r3,r3);
  printf("Intersection(r3,r3): ");
  print(i);
  
  
  i = intersection(r3,r4);
  printf("Intersection(r3,r4): ");
  print(i);
  

  
  i = intersection(r4,r1);
  printf("Intersection(r4,r1): ");
  print(i);
  
  
  i = intersection(r4,r2);
  printf("Intersection(r4,r2): ");
  print(i);
  
  
  i = intersection(r4,r3);
  printf("Intersection(r4,r3): ");
  print(i);
  
  
  i = intersection(r4,r4);
  printf("Intersection(r4,r4): ");
  print(i);
  

    
  return EXIT_SUCCESS;

}


