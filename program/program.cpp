#include <iostream>
#include <vector>
#include <algorithm>  // sort 사용을 위해 추가
#define SIZE 8
using namespace std;

class Kruskal {
    class Edge {
    private:
        int vertexX;
        int vertexY;
        int weight;
    public:
        Edge(int vertexX, int vertexY, int weight)
            : vertexX(vertexX), vertexY(vertexY), weight(weight) {}

        int getX() const { return vertexX; }
        int getY() const { return vertexY; }
        int getWeight() const { return weight; }
    };

    int cost;
    int parent[SIZE];
    vector<Edge> nodeList;

public:
    Kruskal() : cost(0) {
        for (int i = 0; i < SIZE; i++) {
            parent[i] = i;
        }
    }

    // Find the root of the set containing x (with path compression)
    int find(int x) {
        if (parent[x] == x) return x;
        return parent[x] = find(parent[x]);
    }

    // Union the sets containing x and y
    void unionSets(int x, int y) {
        int rootX = find(x);
        int rootY = find(y);
        if (rootX != rootY) {
            parent[rootY] = rootX;
        }
    }


    bool same(int x, int y) {
        return find(x) == find(y);
    }

    void insert(int vertexX, int vertexY, int weight) {
        Edge edge(vertexX, vertexY, weight);
        nodeList.push_back(edge);
    }

    void calculate() {

        sort(nodeList.begin(), nodeList.end(), [](const Edge& a, const Edge& b) {
            return a.getWeight() < b.getWeight();
            });

        for (int i = 0; i < nodeList.size(); i++) {
            int x = nodeList[i].getX();
            int y = nodeList[i].getY();
            int weight = nodeList[i].getWeight();


            if (!same(x, y)) {
                cost += weight;
                unionSets(x, y);
                cout << "Selected Edge: (" << x << ", " << y << ") - Weight: " << weight << endl;
                cout << "Current Cost: " << cost << endl << endl;
            }
        }

        cout << "Total Minimum Cost: " << cost << endl;
    }
};

int main() {
    Kruskal kruskal;
    kruskal.insert(1, 7, 10);
    kruskal.insert(4, 7, 14);
    kruskal.insert(1, 4, 30);
    kruskal.insert(4, 2, 25);
    kruskal.insert(1, 2, 64);
    kruskal.insert(1, 5, 19);
    kruskal.insert(5, 7, 73);
    kruskal.insert(2, 5, 61);
    kruskal.insert(5, 3, 22);
    kruskal.insert(5, 6, 48);
    kruskal.insert(3, 6, 36);

    kruskal.calculate();

    return 0;
}

#pragma region 최소 신장 트리
    // 그래프의 모든 정점을 포함하면서 사이클이 존재하지 않는 부분 그래프로
    // 그래프의 모든 정점을 최소 비용으로 연결하는 트리입니다.
    // 
    // 그래프의 정점의 수가 n개 일때, 간선의 수는 n-1개 입니다.
    // 
    // 
    //



#pragma endregion

