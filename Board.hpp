#pragma once
#include <ncurses.h>



class Board{
    public:
        Board(int height, int width){
            int xMax, yMax;
            getmaxyx(stdscr, yMax, xMax);

            board_win=newwin(height, width, (yMax/2)-(height/2), (xMax/2)-(height/2));
            initialize();
        
        }
    void initialize(){
        clear();
        refresh();
    }
    void addBorder(){
        box(board_win, 0, 0);
    }
    void addAt(int y, int x, chtype ch){
        mvaddch(y, x, ch);
    }
    chtype getInput(){
        return wgetch(board_win);
    }
    void clear(){
        wclear(board_win);
        addBorder();
    }

    void refresh(){
        wrefresh(board_win);
    }
private:
    WINDOW *board_win;
    int height, width;
};