#include "header.h"

int main(){

    Student S[216];
    Teacher T[11];
    // TF T_F[5];
    ImportStudents(S);
    ImportTeachers(T);
    SetUsername(S);
    SetUsernameTeacher(T);
    SetPassword(S);
    SetPasswordTeacher(T);

    menu(S,T);     
    // Quiz A;
    // cout<<A.marks[100];
    // T[0].active=1;

    // MakeQuiz(T);
    // ImportQuestions(T_F,T);

    // cout<<T_F[0].question<<endl;

    // for(int i=0; i<5; i++){
    //     cout<<T_F[i].question<<endl;
    // }

    // T[0].ChangePassword();

    // int x;
    // for(int i=0; i<11; i++){
    //     cout<<S[x].courses[i];
    // }
    // cout<<endl;
}