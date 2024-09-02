//*****************************tic-tac-too game*****************************

#include <iostream>
#include <ctime>

void drawBoard(std::string *spaces){
    std::cout<<"     |     |     "<<'\n';
    std::cout<<"  "<<spaces[0]<<"  |  "<<spaces[1]<<"  |  "<<spaces[2]<<'\n';
    std::cout<<"_____|_____|_____"<<'\n';
    std::cout<<"     |     |     "<<'\n';
    std::cout<<"  "<<spaces[3]<<"  |  "<<spaces[4]<<"  |  "<<spaces[5]<<'\n';
    std::cout<<"_____|_____|_____"<<'\n';
    std::cout<<"     |     |     "<<'\n';
    std::cout<<"  "<<spaces[6]<<"  |  "<<spaces[7]<<"  |  "<<spaces[8]<<'\n';
    std::cout<<"     |     |     "<<'\n';
}
void playerMove(std::string *spaces){
    char pMove = 'X';
    int pNum;
    std::string temp = " ";
    do{
        std::cout<<"Enter a position to fill (1-9): ";
        std::cin>>pNum;
        pNum--;
        if(spaces[pNum] == " "){
            std::string temp = spaces[pNum];
            spaces[pNum] = pMove;}
        
    }    
    while(pNum<0 || pNum>=9); 
}     
    
void compMove(std::string *spaces , bool running){
    char cMove = 'O';
    int cNum;
    while(true){
        //srand(time(0));
        cNum = rand()%9;
        if(spaces[cNum]==" "){
            spaces[cNum] = cMove;
            std::cout<<"voila "<<cNum<<'\n';
            break;}
        }
    }


bool checkWinner(std::string *spaces , bool running){
    if(spaces[0]==spaces[1] && spaces[1]==spaces[2] && spaces[0]!=" " ){
            if(spaces[1]=="X"){
                std::cout<<"Game over!!!\n X wins.\n";
            }
            else if(spaces[1]=="O"){
                std::cout<<"Game over!!!\n O wins.\n";
                }
            return true;
    }
    if(spaces[3]==spaces[4] && spaces[4]==spaces[5] && spaces[3]!=" "  ){
            if(spaces[3]=="X"){
                std::cout<<"Game over!!!\n X wins.\n";
            }
            else if(spaces[3]=="O"){
                std::cout<<"Game over!!!\n O wins.\n";
                }
            return true;
    }
    if(spaces[6]==spaces[7] && spaces[7]==spaces[8] && spaces[6]!=" "  ){
            if(spaces[6]=="X"){
                std::cout<<"Game over!!!\n X wins.\n";
            }
            else if(spaces[6]=="O"){
                std::cout<<"Game over!!!\n O wins.\n";
                }
            return true;
    }
    if(spaces[0]==spaces[3] && spaces[3]==spaces[6] && spaces[0]!=" "  ){
            if(spaces[0]=="X"){
                std::cout<<"Game over!!!\n X wins.\n";
            }
            else if(spaces[0]=="O"){
                std::cout<<"Game over!!!\n O wins.\n";
                }
            return true;
    }
    if(spaces[1]==spaces[4] && spaces[4]==spaces[7] && spaces[1]!=" " ){
            if(spaces[1]=="X"){
                std::cout<<"Game over!!!\n X wins.\n";
            }
            else if(spaces[1]=="O")
                {std::cout<<"Game over!!!\n O wins.\n";
                }
            return true;
    }
    if(spaces[2]==spaces[5] && spaces[5]==spaces[8] && spaces[2]!=" "  ){
            if(spaces[2]=="X"){
                std::cout<<"Game over!!!\n X wins.\n";
            }
            else if(spaces[2]=="O"){
                std::cout<<"Game over!!!\n O wins.\n";
                }
            return true;
    }
    if(spaces[0]==spaces[4] && spaces[4]==spaces[8] && spaces[0]!=" "  ){
            if(spaces[0]=="X"){
                std::cout<<"Game over!!!\n X wins.\n";
            }
            else if(spaces[0]=="O"){
                std::cout<<"Game over!!!\n O wins.\n";
                }
            return true;
    }
    if(spaces[2]==spaces[4] && spaces[4]==spaces[6] && spaces[2]!=" "  ){
            if(spaces[2]=="X"){
                std::cout<<"Game over!!!\n X wins.\n";
            }
            else if(spaces[2]=="O"){
                std::cout<<"Game over!!!\n O wins.\n";
                }
            return true;
    }
    else{
        return false;
        }

    

}

bool checkTie(std::string *spaces){
    for(int i=0;  i<9;  i++){
        if(spaces[i]==" "){
            return false;
            }
    }
    return true;
}


int main(){
    srand(static_cast<unsigned int>(time(nullptr)));
    std::string spaces[9] = {" "," "," "," "," "," "," "," "," "};
    bool running = true;
    while(running){
        drawBoard(spaces);
        playerMove(spaces);
        if (checkTie(spaces)){
            std::cout<<"GAME OVER!!! \nITS A TIE!!!\n"; 
            running = false;
            drawBoard(spaces);
            break;}
        compMove(spaces , running);
        if(checkWinner(spaces , running)){
            running = false;
            drawBoard(spaces);
            break;
        }
        
        

    }
}
