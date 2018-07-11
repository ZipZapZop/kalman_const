import matplotlib.pyplot as plt
import csv
# import itertools

def print_graph():
    with open('kalman_data.csv','r') as d:
        lines = [line.rstrip('\n') for line in open('kalman_data.csv')]
        lines = list(map(float, lines))
            
    plt.figure()
    plt.plot(lines,'k-',label='Kalman filter outputs')
    plt.axhline(1.52, color = 'r', label='true value')
    plt.legend()
    plt.title('Kalman filter vs the true value (x = 1.52)')
    plt.show()

print_graph()
