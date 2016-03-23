class Substitute:
	def getValue(self,key,code):
		vals = {}
		for a in range(10):
			vals[key[a]]=(a+1)%10
		cost = 0
		for a in code:
			try:
				cost+=vals[a]
				cost*=10
			except:
				pass
		return cost