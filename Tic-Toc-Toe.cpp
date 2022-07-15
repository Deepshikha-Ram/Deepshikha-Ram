#include<iostream>
using namespace std;
char square[10]={'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
int checkWin();
void board();
int main(){
    int player=1, i, choice;
    char mark;
    do{
        board();
        player=(player%2)?1:2;
        cout << "Player "<<player<<", enter a number: ";
        cin >> choice;
        mark=(player==1)?'x':'o';
        if (choice == 1 && square[1]=='1'){
            square[1]=mark;
        }
        else if(choice==2 && square[2]=='2'){
            square[2]=mark;
        }
        else if(choice==3 && square[3]=='3'){
            square[3]=mark;
        }
        else if(choice==4 && square[4]=='4'){
            square[4]=mark;
        }
        else if(choice==5 && square[5]=='5'){
            square[5]=mark;
        }
        else if(choice==6 && square[6]=='6'){
            square[6]=mark;
        }
        else if(choice==7 && square[7]=='7'){
            square[7]=mark;
        }
        else if(choice==8 && square[8]=='8'){
            square[8]=mark;
        }        
        else if(choice==9 && square[9]=='9'){
            square[9]=mark;
        }
        else{
            cout<<"Invalid Move";
            player--;
            cin.ignore();
            cin.get();
        }
        i=checkWin();
        player++;
    }
    while(i==-1);
    board();
    if(i==1){
        cout<<"==>\aPlayer "<<--player<<" win";
    }
    else{
        cout<< "==>\aGame Draw";
    }
    cin.ignore();
    cin.get();
    return 0;
}
/**************************************
 * Function to return game status
 * 1 for over with result
 * -1 for game in progress
 * 0 for over and no result
 * *************************************/
int checkWin(){
    if (square[1]==square[2] && square[2] == square[3]){
        return 1;
    }
    else if(square[4]==square[5] && square[5]==square[6]){
        return 1;
    }
    else if(square[7]==square[8] && square[8]==square[9]){
        return 1;
    }
    else if(square[1]==square[4] && square[4]==square[7]){
        return 1;
    }
    else if(square[2]==square[5] && square[5]==square[8]){
        return 1;
    }
    else if(square[3]==square[6] && square[6]==square[9]){
        return 1;
    }
    else if(square[1]==square[5] && square[5]==square[9]){
        return 1;
    }
    else if(square[3]==square[5] && square[5]==square[7]){
        return 1;
    }
    else if(square[1]!='1' && square[2]!='2' && square[3]!='3'
    && square[4]!='4' && square[5]!='5' && square[6]!='6'
    && square[7]!='7' && square[8]!='8' && square[9]!='9'){
        return 0;
    }
    else return -1;
}

/*********************************
 * Function to draw tic toc toe 
 * board
 * *****************************/
void board(){
    system("cls");
    cout<<"\n\n TIC TAC TOE\n \n";
    cout << "Payer 1(x) - Player2(o)"<<endl<<endl;
    cout<< endl;
    cout<<"     |   |   "<<endl;
    cout<<" " <<square[1]<<"  |   " <<square[2]<<"   |   "<<square[3]<<endl;
    cout<< "____|____|_____"<<endl;
    cout<< "    |    |     "<<endl;
    cout<<" " <<square[4]<<"  |   " <<square[5]<<"   |   "<<square[6]<<endl;
    cout<< "____|____|_____"<<endl;
    cout<< "    |    |     "<<endl;
    cout<<" " <<square[7]<<"  |   " <<square[8]<<"   |   "<<square[9]<<endl;
cout<< "    |   |   "<<endl<<endl;
}
