class stack:

    # constructor that sets the stack size
    def _init_(self, size):

        self.size = size
        # st is the dynamic array which we use to simulate a stack
        self.st = []

    # compares the stack array with an empty array
    def isEmpty(self):
        return self.st == []

    # compares the length of the existing stack with the size defined in the constructor
    def isFull(self):
        return (len(self.st) == self.size)

    # checks if stack is empty else pops the last item
    def pop(self):

        if self.isEmpty():
            # print 'The stack is Empty.'
            return False

        else:
            return self.st.pop()

    # checks if the length of stack is less than or equal to set size and appends if less
    def push(self, n):

        if self.isFull():
            # print 'The stack is full.'
            return False

        else:
            self.st.append(n)
            return True

    # returns the top value of the stack
    def peek(self):
        return self.st[self.size()]

    # returns size of the stack
    def size(self):
        return len(self.st)
