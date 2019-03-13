#include<iostream>
#include <string>
#include <fstream>

using namespace std;

bool  div5 ( string x) {

        if((*(x.end()-1))=='0' || (*(x.end()-1))=='5')
                return true;
        else
                return false;
        }

bool div3 (string c){

    int sum=11;
    if((*(c.end()-1))=='-')
		c.erase(0,1);

	if(c=="0" || c=="3" || c=="6" || c=="9")
                return true;

        while(sum>10){
		sum=0;
        for(int i=0; i < c.size(); i++) {
                sum+=(*(c.end()-1-i))-'0';
                	}
		c=to_string(sum);

        }
        if(sum==0 || sum==3 || sum==6 || sum==9)
                return true;
        else
                return false;
}


void fizzbuzz (ifstream &f1) {
  string a;
  ofstream f2("output1.txt");

    while (!f1.eof()){
            f1>>a;
            if( div3(a) && div5(a))
                    f2 << "fizzbuzz ";
            else if (div3(a) )
                    f2<<"fizz ";
                    else if (div5(a))
                            f2<<"buzz ";
                        else
                            f2 << a<<" ";

       }




        f2.close();

}
