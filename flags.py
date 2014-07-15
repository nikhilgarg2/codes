t=int(raw_input())
for i in range(t):
 x=int(raw_input())
 if x==1:
	print '0'
 elif x==2:
	print '4'
 elif x==3:
 	print '42'
 else:
	n=x*(x-1)*(x-2)*(2*x+1)
	print n
