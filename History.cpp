
#include <stdio.h>
#include <iostream>
#include "History.h"

using namespace std;

History::History(int nRows, int nCols){
    m_rows = nRows;
    m_cols = nCols;
    int m_history[MAXROWS][MAXCOLS];
    
    {
      // Initialize history grid to zeroes
      for (int r = 1; r <= m_rows; r++)
        for (int c = 1; c <= m_cols; c++)
          m_history[r-1][c-1] = 0;
    }
    
};

bool History::record(int r, int c){
   
    if(r < 1 || r > MAXROWS || c < 1 || c > MAXCOLS )
    {
        return false;
    }
    
    m_history[r-1][c-1] ++;
    
    return true;
    
};

void History::display() const{
    for (int r = 1; r <= m_rows; r++){
        for (int c = 1; c <= m_cols; c++){
            cout << (this->m_history[r-1][c-1] == 0 ? '.' : (this->m_history[r-1][c-1] >= 1 && this->m_history[r-1][c-1] <= 25 ? (char)('A' + (this->m_history[r-1][c-1] - 1)) : 'Z'));
    
                
        }
        cout << endl;
    }
    clearScreen();
};
