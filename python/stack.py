""" Stacks in python"""

# using list
st = []

st.append(1)
st.append(2)
st.append(3)

print(st)
print('\nElements popped from stack:')
print(st.pop())
print(len(st)==0)
print(st.pop())
print(st.pop())

#using deque from collections library
from collections import deque
std = deque()

std.append(1)
std.append(2)
std.append(3)

print(std)
std.pop()
print(std)
