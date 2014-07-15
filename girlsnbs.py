from math import ceil
x=raw_input()
a,b=x.split()
a=int(a)
b=int(b)
while a !=-1 and b !=-1:
	c=max(a,b)
	d=min(a,b)
	e=int(ceil(float(c)/float(d+1)))
	print e
	x=raw_input()
	a,b=x.split()	
	a=int(a)
	b=int(b)
