#include<cs50.h>

float letter(string s){
  float count=0;
   for(int i=0;i<strlen(s);i++){
    if(isalnum(s[i])!=0)
    count++;
   }
return count;
}

float words(string s){
  float count=0;
   for(int i=0;i<strlen(s);i++){
    if(s[i]==' ')
    count++;
   }
return count;
}

float sentence(string s){
  float count=0;
   for(int i=0;i<strlen(s);i++){
    if(s[i]=='.' || s[i]=='?')
    count++;
   }
return count;  
}

string ari(string s){
string grade[] ={"Kindergarten","First/Second Grade","Third Grade","Fourth Grade","Fifth Grade",  "Sixth Grade","Seventh Grade","Eight Grade","Ninth Grade","Tenth Grade","Eleventh Grade",        "Twelfth Grade","College Student","Professor"};
  
  int num[14]={1,2,3,4,5,6,7,8,9,10,11,12,13,14};
  
  float index;
  float a,b;
  a=(letter(s)/words(s))*4.71;
  b=(words(s)/sentence(s))*0.5;
  index = a+b-21.43;
  int x=ceil(index);
    for(int i=0;i<14;i++){
    if(x == num[i])
    return grade[i];
   }
}
