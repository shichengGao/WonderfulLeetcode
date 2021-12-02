//
// Created by scgao on 2021/11/29.
//

#ifndef DISJOINT_SET_H
#define DISJOINT_SET_H
#include <vector>

class Disjoint_set {
private:
    std::vector<int> parent;
public:
    Disjoint_set(int size) : parent(std::vector<int>(size)) {
        for (int i = 0; i < size ; i++){
            parent[i] = i;
        }
    }

    //合并
    void toUnion(int element_1, int element_2){
        parent[find(element_1)] = find(element_2);
    }

    //带有路径压缩的查找操作
    int find(int element){
        std::cout<<"一次查找"<<std::endl;
        return parent[element] = parent[element] == element ? element : find(parent[element]);
    }
};


#endif //MYLEETCODE_DISJOINT_SET_H
