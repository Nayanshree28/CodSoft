// this is the task4:
// task: create a programe:
// task: import an txt file located on the location:

// now import all the header files here first:
#include<iostream>
#include<fstream>
#include<string>
#include<sstream>
using namespace std;

int count_words(const string& nameoffile){
    ifstream file(nameoffile);
    if(!file){
        cout<<"Error in file opening: "<<nameoffile<<endl;
        return -1;
    }

    string accesstxt;
    int wordcount = 0;
    while(getline(file, accesstxt)){
        istringstream inputword(accesstxt);
        string word;

        while(inputword >> word){
            wordcount++;
        }
    }

    return wordcount;
}

int main()
{
    string givenfile;
    cout<<"Enter the file name: ";
    getline(cin, givenfile);

    cout<<endl;

    int totalwords = count_words(givenfile);
    if(totalwords != -1){
        cout<<"Total words in the file is : "<<totalwords<<endl;
        cout<<endl;
    }

    return 0;
}