#include <iostream>
#include <conio.h>
#include <string>
#include <sstream>

#include "tinyxml2.h"

using namespace tinyxml2;
using namespace std;
void srmap();

void search(string a, string b)
{
    XMLDocument doc;
const char * path="C:\\Users\\monik\\OneDrive\\Desktop\\c++ project\\Student.xml";
doc.LoadFile(path);
 XMLElement *p_root=doc.RootElement();
 XMLElement *p_student=p_root->FirstChildElement("student");
while(p_student){
    XMLElement * ptr=p_student->FirstChildElement("ID");
    XMLElement * p=p_student->FirstChildElement("pass");
    if(a==ptr->GetText()){
        if(b==p->GetText()){
        XMLElement * k=p_student->FirstChildElement("name");
        cout<<"Name :"<<k->GetText()<<endl;
        k=p_student->FirstChildElement("course");
        cout<<"Course :"<<k->GetText()<<endl;
        k=p_student->FirstChildElement("fee");
        cout<<"Fee :"<<k->GetText()<<endl;
        k=p_student->FirstChildElement("comments");
        string co;
        co=k->GetText();
        if(co.length()!=0)
                cout<<"--------------"<<co<<"---------------"<<endl;
        }
        else{
            cout<<"********Incorrect Password******";
            srmap();
        }
    }  p_student=p_student->NextSiblingElement("student");
}
}
int toint(string s)
{

    // object from the class stringstream
    stringstream y;
    string str=s;
 y<<str; 
    // The object has the value 12345 and stream
    // it to the integer x
   float x = 0;
    y >> x;
    
    // Now the variable x holds the value 12345
   
  
    return x;

}
void names_of_students()
{
XMLDocument doc;
const char * path="C:\\Users\\monik\\OneDrive\\Desktop\\c++ project\\Student.xml";
doc.LoadFile(path);
 XMLElement *p_root=doc.RootElement();
 XMLElement *p_student=p_root->FirstChildElement("student");
while(p_student){
    XMLElement * ptr=p_student->FirstChildElement("name");
    cout<<"Name : "<<ptr->GetText()<<endl;
    p_student=p_student->NextSiblingElement("student");
}
}
void search_student_details(string c)
{
    int f=0;
	XMLDocument doc;
const char * path="C:\\Users\\monik\\OneDrive\\Desktop\\c++ project\\Student.xml";
doc.LoadFile(path);
 XMLElement *p_root=doc.RootElement();
 XMLElement *p_student=p_root->FirstChildElement("student");
while(p_student){
    XMLElement * ptr=p_student->FirstChildElement("ID");
    if(c==ptr->GetText()){
        XMLElement * k=p_student->FirstChildElement("name");
        cout<<"Name :"<<k->GetText()<<endl;
        k=p_student->FirstChildElement("gender");
        cout<<"Gender :"<<k->GetText()<<endl;
        k=p_student->FirstChildElement("DOB");
        cout<<"DOB :"<<k->GetText()<<endl;
        k=p_student->FirstChildElement("fee");
        cout<<"Fee :"<<k->GetText()<<endl;
        k=p_student->FirstChildElement("email");
        cout<<"E-mail Id :"<<k->GetText()<<endl;
        f=1;
        
        break;
    }  p_student=p_student->NextSiblingElement("student");
}
if(f==0)
{
	cout<<"Student ID incorrect\n";
	
}cout<<endl<<".*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*"<<endl<<endl;
cout<<"Press 1 to go back to main menu.\nPress any other key to exit."<<endl;
     int n;
     cin>>n;
     if(n==1){
     	srmap();
	 }
	 else{
	 	exit(0);
	 }

}
void student_reg()
{
    char name[30];
    char pass[8];
    char gen[10];
    char DOB[8];
    char course[3];
    char rel[10];
    char nat[8];
    char add[50];
    char f_nam[10];
    char f_occ[10];
    char f_in[10];
    char SSC_per[4];
    char Inter_per[4];
    char TC_no[8];
    int fee;
    char mail[20];
    cout << "Enter name of student:" << endl;
    string p;
    getline(cin>>ws,p);
    strcpy(name,p.c_str());
    cout << "Enter your password:" << endl;
    getline(cin>>ws,p);
    strcpy(pass,p.c_str());
    cout<<"Enter your gender(F/M):"<<endl;
    
    getline(cin>>ws,p);
    strcpy(gen,p.c_str());
    cout << "DOB in DD/MM/YYYY format:" << endl;
    getline(cin>>ws,p);
    strcpy(DOB,p.c_str());
    cout << "Religion:" << endl;
    getline(cin>>ws,p);
    strcpy(rel,p.c_str());
    cout << "Nationality:" << endl;
    getline(cin>>ws,p);
    strcpy(nat,p.c_str());
    cout << "Enter your address:" << endl;
    getline(cin>>ws,p);
    strcpy(add,p.c_str());
    cout << "Enter your father name:" << endl;
    getline(cin>>ws,p);
    strcpy(f_nam,p.c_str());
    cout << "Father's Occupation:" << endl;
    getline(cin>>ws,p);
    strcpy(f_occ,p.c_str());
    cout << "Father's Income:" << endl;
    getline(cin>>ws,p);
    strcpy(f_in,p.c_str());
    cout << "SSC percentage:" << endl;
    getline(cin>>ws,p);
    strcpy(SSC_per,p.c_str());
    cout << "12 Percentage:" << endl;
    getline(cin>>ws,p);
    strcpy(Inter_per,p.c_str());
    cout << "Transfer Certificate No:" << endl;
    getline(cin>>ws,p);
    strcpy(TC_no,p.c_str());
    int r;
    cout << "Enter the course you preferred:\n1.CSE\n2.ECE\n3.EEE\n4.CIV\n5.MEC" << endl;
    cin >> r;
    if (r == 1)
    {
    	course[0]='C';
    	course[1]='S';
    	course[2]='E';
        fee = 120000;
    }
    else if (r == 2)
    {
    	course[0]='E';
    	course[1]='C';
    	course[2]='E';
        fee = 90000;
    }
    else if (r == 3)
    {
    	course[0]='E';
    	course[1]='E';
    	course[2]='E';
        fee = 80000;
    }
    else if (r == 4)
    {
    	course[0]='C';
    	course[1]='I';
    	course[2]='V';
        fee = 70000;
    }
    else if (r == 5)
    {
    	course[0]='M';
    	course[1]='E';
    	course[2]='C';
        fee = 70000;
    }
    cout << "E-mail ID:" << endl;
    getline(cin>>ws,p);
    strcpy(mail,p.c_str());
    XMLDocument doc;
const char * path ="C:\\Users\\monik\\OneDrive\\Desktop\\c++ project\\Student.xml";
// Load the XML file into the Doc instance
doc.LoadFile(path);
//Get root Element
XMLElement* pTop=doc.RootElement();
// Get 'Accounts' Child
//XMLElement* pAccounts=pTop->FirstChildElement("Accounts");



 XMLElement *p_student=pTop->FirstChildElement("student");
 string id;
 while(p_student){
    XMLElement * ptr=p_student->FirstChildElement("ID");
    id=ptr->GetText();
     p_student=p_student->NextSiblingElement("student");
     }
     string s;
	 s=id.substr(6,11);
     
     int x;
	 x=toint(s);
     /*cout<<s<<endl;
    
    stringstream geek(s);
     int x=0;
     geek>>x;
     cout<<x<<endl;*/
     x=x+1;
     stringstream str1;
     
     str1<<x;
     id=str1.str();
     
     string xyz="AP221100"+id;
     char xy[14];
     strcpy(xy,xyz.c_str());
        
//Create new Element
XMLNode* pRoot=doc.NewElement("student");
//Insert new Element
pTop->InsertEndChild(pRoot);
//Create new Element	          
XMLElement* pElement=doc.NewElement("ID");
// Set new Element Text
pElement->SetText(xy); // AccountNo
// Insert new Element
pRoot->InsertEndChild(pElement);
//Create new Element
pElement=doc.NewElement("pass");
// Set new Element Text
pElement->SetText(pass); // type
// Insert new Element
pRoot->InsertEndChild(pElement);
//Create new Element
pElement=doc.NewElement("name");
// Set new element Text
pElement->SetText(name); // customer
// Insert new Element
pRoot->InsertEndChild(pElement);
//Create new Element
pElement=doc.NewElement("gender");
// Set new Element Text
pElement->SetText(gen); // balance
// Insert new Element
pRoot->InsertEndChild(pElement);
//Create new Element
pElement=doc.NewElement("DOB");
// Set new Element Text
pElement->SetText(DOB); // openDate
//Insert new Element
pRoot->InsertEndChild(pElement);
//Save the changes into the XML file

pElement=doc.NewElement("rel");
// Set new Element Text
pElement->SetText(rel); // openDate
//Insert new Element
pRoot->InsertEndChild(pElement);
pElement=doc.NewElement("nat");
// Set new Element Text
pElement->SetText(nat); // openDate
//Insert new Element
pRoot->InsertEndChild(pElement);
pElement=doc.NewElement("add");
// Set new Element Text
pElement->SetText(add); // openDate
//Insert new Element
pRoot->InsertEndChild(pElement);
pElement=doc.NewElement("f_name");
// Set new Element Text
pElement->SetText(f_nam); // openDate
//Insert new Element
pRoot->InsertEndChild(pElement);
pElement=doc.NewElement("f_occ");
// Set new Element Text
pElement->SetText(f_occ); // openDate
//Insert new Element
pRoot->InsertEndChild(pElement);
pElement=doc.NewElement("f_in");
// Set new Element Text
pElement->SetText(f_in); // openDate
//Insert new Element
pRoot->InsertEndChild(pElement);
pElement=doc.NewElement("SSC");
// Set new Element Text
pElement->SetText(SSC_per); // openDate
//Insert new Element
pRoot->InsertEndChild(pElement);
pElement=doc.NewElement("Inter");
// Set new Element Text
pElement->SetText(Inter_per); // openDate
//Insert new Element
pRoot->InsertEndChild(pElement);
pElement=doc.NewElement("TC");
// Set new Element Text
pElement->SetText(TC_no); // openDate
//Insert new Element
pRoot->InsertEndChild(pElement);
pElement=doc.NewElement("course");
// Set new Element Text
pElement->SetText(course); // openDate
//Insert new Element
pRoot->InsertEndChild(pElement);
pElement=doc.NewElement("fee");
// Set new Element Text
pElement->SetText(fee); // openDate
//Insert new Element
pRoot->InsertEndChild(pElement);
pElement=doc.NewElement("email");
// Set new Element Text
pElement->SetText(mail); // openDate
//Insert new Element
pRoot->InsertEndChild(pElement);
pElement=doc.NewElement("comments");
// Set new Element Text // openDate
//Insert new Element
pRoot->InsertEndChild(pElement);
cout<<"Your Id :"<<xyz<<endl;
doc.SaveFile(path);
cout<<endl<<".*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*"<<endl<<endl;
cout<<"Press 1 to go back to main menu.\nPress any other key to exit."<<endl;
     int n;
     cin>>n;
     if(n==1){
     	srmap();
	 }
	 else{
	 	exit(0);
	 }
}

void student_login()
{
    char a[15], b[15];
     
	cout << "        Enter ID      :";
    cin >> a;
    cout << "        Enter password:";
     
    cin >> b;
    cout<<".*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*"<<endl<<endl;
    search(a, b);
    cout<<"Press 1 to go back to main menu.\nPress any other key to exit."<<endl;
     int n;
     cin>>n;
     if(n==1){
     	srmap();
	 }
	 else{
	 	exit(0);
	 }
}
void comments()
{
	cout<<"Enter the information to post :"<<endl;
	char co[200];
	string p;
	getline(cin>>ws,p);
    strcpy(co,p.c_str());
	XMLDocument doc;
const char * path ="C:\\Users\\monik\\OneDrive\\Desktop\\c++ project\\Student.xml";
doc.LoadFile(path);
XMLElement* pTop=doc.RootElement();
 XMLElement *p_student=pTop->FirstChildElement("student");
 while(p_student){
    XMLElement * ptr=p_student->FirstChildElement("comments");
    ptr->SetText(co);
     p_student=p_student->NextSiblingElement("student");
     }doc.SaveFile(path);
     cout<<"Cirular passed successfully"<<endl;
}
void admin_login()
{
    string p;
    cout << "****Welcome to University Official Page*******\n";
    cout << "Enter password to get access:" << endl;
     char s[7] = { 0 };
    int i;
    for (i = 0; i < 7;i++) {
        s[i] = _getch(); _putch('*');
        
    };
    p=s;
    cout<<endl;
    if (p == "SRM_123")
    {
        int l;
        cout<<endl<<".*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*"<<endl;
        cout << "1.All registrations\n2.Fee payment\n3.Student Information\n4.Information to students\n5.Return main page\nAny other key to exit\n";
             
        cin >> l;
        cout<<".*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*"<<endl<<endl;
        if (l == 1)
            {
			names_of_students();
			cout<<endl<<endl<<"Press 1 to go back to main menu.\nPress any other key to exit."<<endl;
     int n;
     cin>>n;
     if(n==1){
     	srmap();
	 }
	 }
        else if (l == 2)
        {
            char u[15];
            int f;
            cout << "Enter the student id:" << endl;
            cin >> u;
            //cout << "Enter the amount paying:" << endl;
            //cin >> f;
             XMLDocument doc;
const char * path = "C:\\Users\\monik\\OneDrive\\Desktop\\c++ project\\Student.xml";
// Load the XML file into the Doc instance
doc.LoadFile(path);
//Get root Element
XMLElement* pTop=doc.RootElement();
// Get 'Accounts' Child
//XMLElement* pAccounts=pTop->FirstChildElement("Accounts");



 XMLElement *p_student=pTop->FirstChildElement("student");
 string id;
 while(p_student){
    XMLElement * p=p_student->FirstChildElement("ID");
    id=p->GetText();
    if(id==u)
    {
    	string s;
    	XMLElement * ptr=p_student->FirstChildElement("fee");
     s=ptr->GetText();
     
     cout<<"total fee   :"<<s<<endl;
     cout << "Enter the amount paying:" << endl;
            cin >> f;
     int x;
	 x=toint(s);
     x=x-f;
     cout<<"balance fee :"<<x<<endl;
     cout<<"payment successful"<<endl;
    ptr->SetText(x);
     
	}doc.SaveFile(path);
     p_student=p_student->NextSiblingElement("student");
     }cout<<"Press 1 to go back to main menu.\nPress any other key to exit."<<endl;
     int n;
     cin>>n;
     if(n==1){
     	srmap();
	 }
     
            
        }
        else if (l == 3)
        {
            string u;
            cout << "Enter the student ID:" << endl;
            cin >> u;
            search_student_details(u);
           
     	   
	       
        }
        else if (l == 4)
        {
            char in[150];
            comments();
            cout<<endl<<"Press 1 to go back to main menu.\nPress any other key to exit."<<endl;
     int n;
     cin>>n;
     if(n==1){
     	srmap();
	 }
            
        }
        else if (l == 5){
            srmap();
        }
        else{
        	exit(0);
	
}	}
	else
    {
    	cout<<"---------Password Incorrect-----------"<<endl;
    	srmap();
	}
}
void srmap(){
	 cout <<endl<<endl<< "************WELCOME TO SRM UNIVERSITY**************\n";
    cout << "1.Student Registration\n2.Student Login\n3.Admin login\nPlease enter your mode of interaction:\n";
    int n;
    cin >> n;
    cout<<endl<<".*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*"<<endl<<endl;
    if (n == 1)
    {
         student_reg();
        cout <<"Your registration is successful";
    }
    else if (n == 2)
    {
        student_login();
    }
    else if (n == 3)
    {
        admin_login();
    }
    else
    {
        cout << "Enter a valid choice from above";
    }
}
using namespace std;
int main()
{
    srmap();
    return 0;
	}

