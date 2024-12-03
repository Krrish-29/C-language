#include<iostream>
#include<string.h>
int n=-1;
std::string str; 
void pop(){ 
    if(n>=0){  
        str[n]=0; 
        n-=1; 
    } 
} 
void push(char number){ 
    n+=1; 
    if (n < str.size()) { 
        str[n] = number; 
    } 
    else { 
        str.push_back(number); 
    }  
} 
char top(){ 
    if(n>=0){ 
        return str[n]; 
    } 
    return '0';
} 
bool isValidParenthesis(std::string s){
    for(int i=0;i<s.size();i++){
        if((s[i]=='[')||(s[i]=='{')||(s[i]=='(')){
            push(s[i]);
        }
        else if ((top()=='['&&s[i]==']')||(top()=='{'&&s[i]=='}')||(top()=='('&&s[i]==')')){
            pop();
        }
        else{
            return false;
        }
    }
    if(n==-1){
        return true;
    }
    else{
        return false;
    }
}