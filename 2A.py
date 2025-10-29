import matplotlib.pyplot as plt
n = [1000, 3000, 6000, 10000, 15000, 20000] Ɵme = [0.0021,
0.0085, 0.0174, 0.0299, 0.0457, 0.0612]
plt.plot(n, Ɵme, marker='o', color='black')
plt.xlabel('Number of Elements (n)')
plt.ylabel('Time Taken (seconds)')v
plt.Ɵtle('Merge Sort Time vs n') plt.grid(True)
plt.show()
