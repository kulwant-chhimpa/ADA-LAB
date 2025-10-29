import matplotlib.pyplot as plt
n = [1000, 3000, 6000, 10000, 15000, 20000, 25000]
Ɵme = [0.052, 0.485, 1.95, 4.9, 9.8, 17.2, 25.4]
plt.plot(n, Ɵme, marker='o',
color='black') plt.xlabel('Number of
Elements (n)') plt.ylabel('Time Taken
(seconds)') plt.Ɵtle('Bubble Sort Time vs
n') plt.grid(True) plt.show()
