#include <iostream>
#include<string>

extern void print_class(std::string courses[4], std::string students[], int report_card[][4], int);
int main(){
   std::string courses[4]={"math","PE","music","eng"};
   int numstudents=3;
   std::string students[3]={"peter","guan","jack"};
   int report_card[3][4]={{66,77,88,99},{78,87,97,79},{56,88,99,79}};
   
   print_class(courses,students,report_card,numstudents);
   
   
   
   return 0; 
}