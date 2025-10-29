import matplotlib.pyplot as plt
n = [1000, 3000, 6000, 10000, 15000, 20000, 25000]
Ɵme = [0.043, 0.378, 1.45, 3.76, 7.52, 12.99, 18.25]
plt.plot(n, Ɵme, marker='o',
color='black') plt.xlabel('Number of
Elements (n)') plt.ylabel('Time Taken
(seconds)') plt.Ɵtle('SelecƟon Sort Time
vs n') plt.grid(True) plt.show()
