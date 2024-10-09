def print_board(board):

    size=len(board)

    for row in range(size):

        for col in range(size):

            if board[row]==col:

                print('Q',end=' ')

            else:

                print(' . ',end=' ')

        print()


def is_safe(board, row,col):

	for r in range(row):

	    if board[r] == col or \
	       board[r] - col == r - row  or \
	       board[r] - col == row - r:

		    return False

	return True


def solve_nqueens_util(board,row):

        size=len(board)

        if row==size:

                print_board(board)

                print()

                return True



        found_solution=False

        for col in range(size):

                if is_safe(board,row,col):

                        board[row]=col

                        if solve_nqueens_util(board,row+1):

                                found_solution=True

                        board[row]=-1



        return found_solution


def solve_nqueens(size):

        board=[-1]*size

        if not solve_nqueens_util(board,0):

                print("no solution exists")


if __name__=="__main__":

        n=int(input("enter n for n-queen problem : "))

        solve_nqueens(n)
