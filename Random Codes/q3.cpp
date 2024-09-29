#include <iostream>
#include<string>
using namespace std;
class Hospital
{
   protected:
        string hid,hname,hadd;
    public:
        void getdata()
       {
         cout<<"Enter hospital id,name,address: ";
         cin>>hid>>hname>>hadd;
       }
};
class Dept:public Hospital
{
   protected:
              string dname,did;
              int n;
              int dep[n];
   public:
          void getdata()
         {
           cout<<"Enter the total deparments: ";
            cin>>n;
            for(int i=0;i<n;i++)
            {
               cout<<"Enter department name: ";
               cin>>dep[i].dname;
                cout<<"Enter department id: ";
               cin>>dep[i].did;
            }
         }
};
class Patent:public Dept
{
    protected:
              string pname,pid,disease,gender;
              int n;
              int pat[n];          
    public:
           void getpdata()
         {
           cout<<"Enter the total patients: ";
            cin>>n;
            for(int i=0;i<n;i++)
              {
                cout<<"Enter patient name: ";
                cin>>pat[i].pname;
                cout<<"Enter patient id: ";
                cin>>pat[i].pid;
                cout<<"Enter patient disease: ";
                cin>>pat[i].disease;
                cout<<"Enter patient gender: ";
                cin>>pat[i].gender;
                cout<<"Enter patient age: ";
                cin>>pat[i].age;           
              }
         }
};
class Staff:public Dept
{
   protected:
              string role;
  public:
           void getsdata()
{
  cout<<"Enter the role of staff: ";
  cin>>role;
}
};
class Doctor:public Staff
{
   if (staff=="doctor"|| staff== "Doctor" || staff=="DOCTOR")
   {
     protected:
              string docname,docid,docspec;
              int n;
              int doc[n];
     public:
            void getdodata()
           {
           cout<<"Enter the total doctors: ";  
           cin>>n;
            for(int i=0;i<n;i++)
               {  
                 cout<<"Enter doctor name: ";
                 cin>>doc[i].docname;
                 cout<<"Enter doctor id: ";
                 cin>>doc[i].docid;
                 cout<<"Enter doctor specialization: ";
                 cin>>doc[i].docspec; 
              }
           }
   }
};
class Nurse:public Staff
{
    if(staff=="nurse")|| staff== "Nurse" || staff=="NURSE")
  {
  protected:
  string nursename,nurseid;
  int n,reporting hour,nurse[n];
  public:
  void getndata()
  {
    cout<<"Enter the total nurses: ";
    cin>>n;
     for(int i=0;i<n;i++)
        {  
          cout<<"Enter nurse name: ";
          cin>>nurse[i].nursename;
          cout<<"Enter nurse id: ";
          cin>>nurse[i].nurseid;
          cout<<"Enter nurse reporting hour: ";
          cin>>nurse[i].reporting hour;
          cout<<"Enter nurse age: ";
          cin>>nurse[i].age;
      }
  }
}
};
class others:public Staff
{
  if(staff=="others")|| staff== "Others" || staff=="OTHERS")
  {
  protected:
  string staffname,staffid;
  int n,staff[n];
  public:
  void getodata()
  {
    cout<<"Enter the total staff: ";
    cin>>n;
     for(int i=0;i<n;i++)
        {
          cout<<"Enter staff name: ";
          cin>>staff[i].staffname;
          cout<<"Enter staff id: ";
          cin>>staff[i].staffid;
       }
  }
}
};



int main()
{
  Hospital h;
  h.getdata();
  h.getpdata();
  h.getsdata();
  h.getodata();
  h.getdodata();
  h.getndata();
  return 0;
}
