#include <iostream>
 #include <cstdlib>
using namespace std;

void AddTask(string tasks[],int &taskCount)
{ 

if(taskCount>=100)
cout<<"Sorry cannot Add more task";
else
cout<<"Enter your Task here ";
cin.ignore(); 
getline(cin, tasks[taskCount]);  
taskCount++; 
cout << "Task added!" << endl;
    
}
void ViewTask(string tasks[],int taskCount)
{ if(taskCount==0)
{
    cout<<"No Task added"<<endl;
    return;
}

cout<<"your task list :"<<endl;
 if (taskCount>0)
{ for(int i=0;i<taskCount;i++)
{ cout<<i+1<<". "<<tasks[i]<<endl;
    
}
    
}

}

void Menu()
{ string  choice ;
string tasks[100];
int taskCount=0;

do 
{  system("cls");
    cout<<"           PROCRASTINATOR FIGHTER     "<<endl;
cout<<" ----End your procrastination or your procrastination will end you---- !!"<<endl;
cout<<"1.Add task"<<endl;
cout<<"2.view task"<<endl;
cout<<"3.complete task"<<endl;
cout<<"4.search task"<<endl;
cout<<"5.sort task"<<endl;
cout<<"6.focus mode "<<endl;
cout<<"7.view report"<<endl;
cout<<"8.Exit"<<endl;
cout<<"Enter your choice : ";
cin>>choice;
 if(choice =="1")
 AddTask(tasks,taskCount);
 if(choice=="2")
 ViewTask(tasks,taskCount);
}
while(choice !="8");
}






int main()
{  
    Menu();
    return 0;
}