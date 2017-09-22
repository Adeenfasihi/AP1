class factorial:

    # number is passed value whose factorial is to be calculated
    def rec(self, number):

        # checks if a number is not an integer or a negative integer and returns
        if not isinstance(number, int) or number < 0:
            # print 'Sorry, factorial does not exist for non-integers and negative integers.'
            return False

        # This limit prevents infinite recursion from causing an overflow of the stack and crashing Python.
        # this limit is pre-set in the interpreter
        if number > 999:
            # print 'Sorry, number too large.'
            return False

        # base case for recursion
        elif number == 0 or number == 1:
            return 1

        # recursion call
        else:
            return number * self.rec(number-1)

