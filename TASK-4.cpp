// TASK 4
// TO-DO LIST
#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<string> tasks;
vector<string> status;
void t_add()
{
    string task;
    string stat;
    cout << "Enter task: ";
    cin >> task;
    cout << "Enter task's status(pending/completed): ";
    cin >> stat;
    string add;
    add=task + "-->" + stat;
    cout<<add<<"\n";
    tasks.push_back(task);
    status.push_back(stat);
    cout << "Task added!\n" << endl;
}
void t_view()
{
    if (tasks.empty())
    {
        cout << "No tasks to view." << endl;
    }
    else
    {
        cout << "Tasks:" << endl;
        for(int i=0;i<tasks.size();i++){
            cout<<tasks[i]<<" --> ";
        }
        for(int i=0;i<status.size();i++){
            cout<<status[i]<<"\n";
        }
    }
}
void t_update()
{
    if(tasks.empty())
    {
        cout<<"No Task to update it's status\n";
    }
    else
    {
        string task;
        cout<<"Enter Task to be updated: ";
        cin>>task;
        for(int i=0;i<tasks.size();i++)
        {
            if(task==tasks[i])
            {
                string stat;
                cout<<"Enter task's status(pending/completed): ";
                cin>>stat;
                status[i]=stat;
                cout<<"Task's status updated\n";
            }
            else
            {
                cout<<"task not found\n";
            }
        }
    }
}
void t_del()
{
    if(tasks.empty())
    {
        cout<<"No Task to Delete\n";
    }
    else
    {
        string task;
        cout<<"Enter Task to be deleted: ";
        cin>>task;
        for(int i=0;i<tasks.size();i++)
        {
            if(task==tasks[i])
            {
                tasks.erase(tasks.begin()+i);
                status.erase(status.begin()+i);
                cout<<"Task Deleted\n";
            }
            else
            {
                cout<<"task not found\n";
            }
        }
    }
}


int main()
{
    vector<string> tasks;

    // Menu options
    int choice;
    cout << "1. Add task" << endl;
    cout << "2. View tasks" << endl;
    cout << "3. Update status of Task" << endl;
    cout << "4. Delete Task" << endl;
    cout<<  "5 .Exit"<<endl;
    cout<<"USE '_' IN PLACE OF SPACE\n";

    // Loop until user chooses to exit
    while (true)
    {
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            t_add();
            break;
        }
        case 2:
        {
            t_view();
            break;
        }
        case 3:
        {
            t_update();
            break;
        }
        case 4:
        {
            t_del();
            break;
        }
        case 5:
        {
            cout << "Exiting..." << endl;
            return 0;
        }
        default:
        {
            cout << "Invalid choice. Please try again." << endl;
            break;
        }
        }
    }

    return 0;
}