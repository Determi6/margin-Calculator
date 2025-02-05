#include<iostream>
using namespace std;

float total,absent;
float percent(float a, float b);
float attend(float a, float b);
float margin(float a, float b);
void input();

int main(){
    char cond;
    again:
    input();
    cout<<attend(total,absent)<<endl;
    cout<<percent(absent,total)<<endl;
    cout<<margin(absent,total)<<endl;
    label:
    cout<<"Do you want to continue(Y/n)"<<endl;
    cin>>cond;
    if(cond=='y'||cond=='Y'){
        goto again;
    }
    else if(cond=='n'||cond=='N'){
        exit(1);
    }
    else{
        cout<<"Not valid input"<<endl;
        goto label;
    }

    return 0;
}

void input(){
    cout<<"Class conducted:"<<endl;
    cin>>total;
    cout<<"Class absent:"<<endl;
    cin>>absent;

}

float percent(float a, float b){
    cout<<"Percent Attended:"<<endl;
    return (b-a)/b*100;
}

float attend(float a, float b){
    cout<<"Hours Attended:"<<endl;
    return a-b;
}

float margin(float a, float b){
    float x;
    x=percent(a,b);
    float p,q;
    p=b-a;
    q=b;
    int n;
    if(x>=75){
        for(float i=q;p/i>=0.75;i++){
            n=i-q;
        }
        printf("Margin:");
    }
    else{
        for(float i=q,j=p;j/i<=0.75;i++,j++){
            n=i-q;
        }
        printf("Required:");
    }
    return n;
}