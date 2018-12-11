#pragma once
class graph
{
private:
	struct edge {
		int vertex_1;
		int vertex_2;
		int weight;
	};

public:
	graph();
	~graph();
};

