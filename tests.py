import unittest
import stack
import recursive_factorial as r

class testRecursive_factorial(unittest.TestCase):

    def test_fact(self):
        y = r.factorial()

        self.assertFalse(y.rec('a'))
        self.assertFalse(y.rec(-90))
        self.assertFalse(y.rec(1000))
        self.assertEqual(y.rec(5), 120)

class testStack(unittest.TestCase):

    def test_isEmpty(self):
        x = stack.stack()
        x._init_(1)
        self.assertTrue(x.isEmpty())
        x.push(4)
        self.assertFalse(x.isEmpty())

    def test_isFull(self):
        x = stack.stack()
        x._init_(5)
        self.assertFalse(x.isFull())

        for i in range(1, 6):
            x.push(i)
        self.assertTrue(x.isFull())

    def test_pop(self):
        x = stack.stack()
        x._init_(5)
        self.assertFalse(x.pop())
        x.push(1)
        self.assertNotEqual(x.pop(), False)

    def test_push(self):
        x = stack.stack()
        x._init_(5)

        self.assertTrue(x.push(4))
        self.assertTrue(x.push('a'))

        for i in range(1, 4):
            x.push(i)

        self.assertFalse(x.push(5))

if __name__ == '__main__':
    unittest.main()