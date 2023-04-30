#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
 
using namespace std;
 
int isKeyword(char buffer[]){
    char keywords[32][10] = {"auto","break","case","char","const","continue","default",
                            "do","double","else","enum","extern","float","for","goto",
                            "if","int","long","register","return","short","signed",
                            "sizeof","static","struct","switch","typedef","union",
                            "unsigned","void","volatile","while"};
    int i, flag = 0;
    
    for(i = 0; i < 32; ++i){
        if(strcmp(keywords[i], buffer) == 0){
            flag = 1;
            break;
        }
    }
    
    return flag;
}

bool check_number(string str) {
   for (int i = 0; i < str.length(); i++)
   if (isdigit(str[i]) == false)
      return false;
    return true;
}
 
int main(){
    char ch, buffer[15], operators[] = "+-*/%=";
    ifstream fin("EX.txt");
    int i,j=0;
    int k=0,c=0,I=0,o=0,l=0;
    if(!fin.is_open()){
        cout<<"error while opening the file\n";
        exit(0);
    }
    
    while(!fin.eof()){
           ch = fin.get();
        if(ch == ';'){
            l++;
        }
        for(i = 0; i < 6; ++i){
               if(ch == operators[i]){
                   cout<<ch<<" is operator\n";
                   o++;
               }
           }
           
           if(isalnum(ch)){
               buffer[j++] = ch;
           }
           else if((ch == ' ' || ch == '\n') && (j != 0)){
                   buffer[j] = '\0';
                   j = 0;
                                      
                   if(isKeyword(buffer) == 1){
                       cout<<buffer<<" is keyword\n";
                       k++;
                   }
                   else if(check_number(buffer)){
                       cout<<buffer<<" is constant\n"; 
                       c++;
                   }
                   else{
                       cout<<buffer<<" is identifier\n";
                       I++;
                   }
           }
           
    }
    
    fin.close();

    cout<<endl;
    cout<<"Total number of keyword : "<<k<<endl;
    cout<<"Total number of identifiers : "<<I<<endl;
    cout<<"Total number of operators : "<<o<<endl;
    cout<<"Total number of constants : "<<c<<endl;
    cout<<"Total number of lines : "<<l<<endl;
    
    return 0;
}