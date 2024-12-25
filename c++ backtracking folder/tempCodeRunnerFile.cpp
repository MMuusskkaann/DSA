int  nQueens(vector<vector<char>> board , int row){
      int n = board.size();

      if(row == n){
        printBoard(board);
        return 1;
      }
     
      int count = 0;
      for(int j = 0 ; j < n ; j++){  //columns
      if(isSafe(board,row,j)){
        board[row][j] = 'Q';
        count  += nQueens(board , row+1);
        board[row][j] = '.';
      }
   }

   return count;  //no of posssible solution at  each level
}