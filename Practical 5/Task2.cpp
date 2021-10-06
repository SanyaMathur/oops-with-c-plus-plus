#include<iostream>
using namespace std;
void displayc()
{
      char a='A';
      cout<<a<<endl;
      cout<<"Size: "<<sizeof(char)<<endl;
      cout<<"Size: "<<sizeof(a)<<"\n"<<endl;
}
void displayi()
{
      int a=76098;
      cout<<a<<endl;
       cout<<"Size: "<<sizeof(int)<<endl;
       cout<<"Size: "<<sizeof(a)<<"\n"<<endl;
}
void displays()
{
      short a=45;
      cout<<a<<endl;
       cout<<"Size: "<<sizeof(short)<<endl;
       cout<<"Size: "<<sizeof(a)<<"\n"<<endl;
}
void displayl()
{
      long a=86989436;
      cout<<a<<endl;
       cout<<"Size: "<<sizeof(long)<<endl;
       cout<<"Size: "<<sizeof(a)<<"\n"<<endl;
}
void displayf()
{
      float a=98.3f;
      cout<<a<<endl;
       cout<<"Size: "<<sizeof(float)<<endl;
       cout<<"Size: "<<sizeof(a)<<"\n"<<endl;
}
void displayd()
{
      double a=7869;
      cout<<a<<endl;
      cout<<"Size: "<<sizeof(double)<<endl;
      cout<<"Size: "<<sizeof(a)<<"\n"<<endl;
}
void displayb()
{
      bool a=(22>12);
      cout<<a<<endl;
       cout<<"Size: "<<sizeof(bool)<<endl;
       cout<<"Size: "<<sizeof(a)<<"\n"<<endl;
}
void displayld()
{
      long double a=78877L;
      cout<<a<<endl;
       cout<<"Size: "<<sizeof(long double)<<endl;
       cout<<"Size: "<<sizeof(a)<<"\n"<<endl;
}
void displayw()
{
      wchar_t a='A';
      cout<<a<<endl;
       cout<<"Size: "<<sizeof (wchar_t)<<endl;
       cout<<"Size: "<<sizeof(a)<<"\n"<<endl;
}
int main()
{   
      displayc();
      displayi();
      displays();
      displayl();
      displayf();
      displayd();
      displayb();
      displayld();
      displayw();
}
