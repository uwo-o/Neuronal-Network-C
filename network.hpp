#ifndef NETWORK_HPP
#define NETWORK_HPP

#include <vector>
#include <iostream>
#include <fstream>

#include "neuron.hpp"

class Network {
	public:
		Network(int input_size, int output_size, int hidden_layers, int hidden_layers_size);
		int input_size;
		int output_size;
		int hidden_layers;
		int hidden_layers_size;
		static int total_hidden_neurons;
		std::vector<Neuron *> nurons;
};

#endif
