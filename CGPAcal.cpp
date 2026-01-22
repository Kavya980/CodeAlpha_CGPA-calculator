#include<iostream>
#include <cctype>
#include <iomanip>
using namespace std;

int main(){
int N,n;
cout<<"Enter number of semester: ";
cin>>N;
cout<<endl;
int totalCreditsAll = 0;
int totalGradePointsAll = 0;

for(int k=0;k<N;k++){
    cout<<"Semester "<<k+1<<endl;
cout<<"Enter number of courses: ";
cin>>n;
string sub[n];
for(int i=0;i<n;i++){
    cout<<"Enter name of course "<<i+1<<": ";
    cin>>sub[i];
}
char g[n];
int cr[n];
for(int i=0;i<n;i++){
cout<<"Enter your grades for course "<<i+1<<": ";
cin>>g[i];
g[i] = toupper(g[i]);
cout<<"Enter the credit hours for course "<<i+1<<": ";
cin>>cr[i];
}
int gp[n];
for(int i=0;i<n;i++){
if(g[i]=='O') gp[i]=10;
else if(g[i]=='A') gp[i]=9;
else if(g[i]=='B') gp[i]=8;
else if(g[i]=='C') gp[i]=7;
else if(g[i]=='D') gp[i]=6;
else if(g[i]=='F') gp[i]=0;
else{
    cout<<"Invalid Grade!";
}
}
int Sumcr=0;
for(int i=0;i<n;i++){
    Sumcr+=cr[i];
}
int Sumgcr=0;
for(int i=0;i<n;i++){
    Sumgcr+=gp[i]*cr[i];
}

cout<<"Course\t\tGrade\tGrade Point\tCredits\n";
for(int i=0;i<n;i++){
    cout<<sub[i]<<"\t\t"<<g[i]<<"\t"<<gp[i]<<"\t\t"<<cr[i]<<endl;
}

float GPA=(float)Sumgcr/Sumcr;
cout << fixed << setprecision(2);
cout<<"\nSemester "<<k+1<<" GPA: "<<GPA<<endl;
cout<<endl;
totalCreditsAll += Sumcr;
totalGradePointsAll += Sumgcr;
}
cout<<"------------------------"<<endl;
float CGPA=(float)totalGradePointsAll/totalCreditsAll;
cout<<"Final CGPA: "<<CGPA<<endl;
cout<<"------------------------";
return 0;
}