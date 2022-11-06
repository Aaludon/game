#include<iostream>
#include<random>
#include<ctime>
#include<stdlib.h>
using namespace std;
int Q_No =1;
int correct=0;
int wrong=0;
bool ask[10] = {true, true, true, true, true, true, true, true, true, true};

void display_random_question();
void display();
void question(string question, string a, string b, string c, string d, char correct_answer);
void result ();
int main()
{
  display();
    return 0;
}
void display ()
{
    system ("cls");
    cout<<"Question No:"<<Q_No<<"\t\tCorrect Answers:"<<correct <<"\t\tWrong Answers:"<<wrong<<endl;
    display_random_question();
}
 void display_random_question()
{
    srand (time(0));
    bool is_question_remaining = false;
    for(int i=0;i<10; i++)
    {
        if(ask[i])
        {
            is_question_remaining = true;
            break;
        }

    }
    while(is_question_remaining)
    {
        int no = rand()%10;
        if(ask[no])
        {
            ask[no] = false;
            switch(no)
            {
            case 0 :
                question("Which language support the object oriented programming techniques", "c", "c++","java","c#",'b');
                break;
            case 1 :
                question("'.MOV' extension refers usually to what kind of file?", "Image file", "Animation/movie file","Audio file","Ms office document", 'b');
                         break;
                     case 2 :
                             question(" http://www.brss.com - is an example of what? ", "A url", "A server","A directory","An access code",'a');
                             break;
                         case 3 :
                                 question(" How many bits is a byte? ", "4", "8","16","32",'b');
                                 break;
                             case 4 :
                                     question("How many diodes are in a full wave bridge rectifier?", "8", "2","4","3", 'c');
                                              break;
                                          case 5 :
                                                  question("Which company created the most used networking software in the 1980's", "Microsoft", "sun","IBM","Novell", 'd');
                                                           break;
                                                       case 6 :
                                                               question(" 	In 1983, which person was the first to offer a definition of the term 'computer virus'?", "Norton", "Smith","McAfee","Cohen", 'd');
                                                                        break;
                                                                    case 7 :
                                                                            question("What is a URL?", "A computer software program", "A type of UFO","The address of a document or 'page' on the World Wide Web","An acronym for Uniform Resources Learning", 'c');
                                                                                    break;
                                                                                case 8 :
                                                                                        question("The number of blue in resistor colour code is", "1", "4","6","2", 'c');
                                                                                                break;                                                                                      case 9 :
                                                                                                    question("What is part of a database that holds only one type of information?", "Report", "Record","Field","column",'c');
                                                                                                    break;
           }
        }
    }
                               result ();
}




                  void result ()
{
    system("cls");
        cout<<"Total Questions ="<<Q_No-1<<endl;
    cout<<"Correct Answers ="<<correct<<endl;
    cout<<"Wrong Answers ="<<wrong<<endl;
    if(correct>wrong)
    {
        cout<<"Result = PASS"<<endl;
    }
    else if (wrong>correct)
    {
        cout<<"Result = FAIL"<<endl;
    }
    else
    {
        cout<<"Result = TIE"<<endl;
    }


}
void question (string question, string a, string b, string c, string d, char correct_answer)
{
    cout<<question <<endl;
    cout<<"A.\t"<<a<<endl;
    cout<<"B.\t"<<b<<endl;
    cout<<"C.\t"<<c<<endl;
    cout<<"D.\t"<<d<<endl;
    char answer;
    cin >>answer;
    if(answer == correct_answer)
    {
        correct++;
    }
    else
    {
        wrong++;
    }
    Q_No++;
    display ();
}
    
