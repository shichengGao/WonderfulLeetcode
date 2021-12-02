
class Disjoint_set:
    def __init__(self,size):
        self.parents = [i for i in range(size)]

    def find(self,ele : int) -> int:
        if self.parents[ele] != ele:
            self.parents[ele] = self.find(self.parents[ele])
        return self.parents[ele]

    def union(self,ele_1 : int,ele_2 : int) -> int:
        self.parents[self.find(ele_1)]  = self.find(ele_2)