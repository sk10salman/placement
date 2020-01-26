import matplotlib.pyplot as plt
blood_sugar_male = [ 120,60,76,50,87,90,53,67,150]
blood_sugar_female = [ 110,54,86,30,97,70,93,57,170]

bin = [50,70,80,100]        #bins are by default 10 : IT IS RANGE IN WHICH HOW MANY VALUES OF X AXIS IS LIES
plt.hist([blood_sugar_male,blood_sugar_female],bin,rwidth = 0.95,color=['red','green'])
plt.legend()
plt.show()
