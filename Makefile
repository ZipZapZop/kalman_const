.PHONY: clean all
# CFLAGS += -std=c++11

kalman_filter:	generate_z_vals.o kalman_data.o kalman_filter.o
	g++ -o kalman_filter generate_z_vals.o kalman_data.o kalman_filter.o

%.o:	%.cpp
	g++ -c $<

clean:
	-rm generate_z_vals.o kalman_data.o kalman_filter kalman_data.csv

all:	kalman_filter