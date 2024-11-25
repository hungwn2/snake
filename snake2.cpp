#include "Board.hpp"


#define BOARD_DIM 17
#define BOARD_ROWS BOARD_DIM
#define BOARD_COLS BOARD_DIM * 2.5

int main(int argc, char **argv){
    initscr();
    refresh();
 
    //gets screen dimensions
    Board board(BOARD_ROWS, BOARD_COLS);
    board.initialize();
    board.addAt(15,15, '#');
    board.refresh();
    
    getch();
    endwin();
    return 0;
}