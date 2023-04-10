

#ifndef History_h
#define History_h

#include "globals.h"
class Arena;
class History
    {
      public:
        History();
        History(int nRows, int nCols);
        bool record(int r, int c);
        void display() const;
        
    private:
        char m_history[MAXROWS][MAXCOLS];
        int m_rows;
        int m_cols;
    };

#endif /* History_h */
