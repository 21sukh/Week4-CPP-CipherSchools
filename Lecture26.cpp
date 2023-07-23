//Exception Handling in C++
Code1-

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a =10;
    int b=0;

    try{
        if(b == 0)
         throw 0;
         //unsure logic 
        cout << a/b << endl;
    }
    catch(int e){
        cout << e << "thrown from the try block!" <<endl;
        //alternative code or logic
    }

    cout << "program ended normally..." << endl;

    return 0;
}

Code2-
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a =10;
    int b=0;

    try{
        if(b == 0)
         throw 0;
         //unsure logic 
        cout << a/b << endl;
    }
    catch(...){
        cout << "thrown from the try block!" <<endl;
        //alternative code or logic
    }
    // catch(char err){
    //     cout << err << "thrown from the try block!" << endl;
    // }

    cout << "program ended normally..." << endl;

    return 0;
}

Code3-
  //Rethrowing
  
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a =10;
    int b=0;
try{
    try{
        if(b == 0)
         throw 0;
         //unsure logic 
        cout << a/b << endl;
    }
    catch(...){
        cout << "thrown from the try block!" <<endl;
        throw;
        //alternative code or logic
    }
}
catch(...){
    cout << "Catched" << endl;
}
    
    cout << "program ended normally..." << endl;

    return 0;
}

