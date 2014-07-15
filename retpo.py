x=int(raw_input())
for i in range(x):
	y=raw_input()
	a,b=y.split()
	a=int(a)
	b=int(b)
	if (a+b)%2==0:
		z=2*max(abs(a),abs(b))	
	else:
		z=1+2*max(abs(a),abs(abs(b)-1))
	print z
