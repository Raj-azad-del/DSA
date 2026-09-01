class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        
        int n1 = gas.size();
        int n2 = cost.size();

        int i = 0;
        int j = 0;

        stack<int> v;
        vector<int> vi;

        int total = 0;
        int fuel = 0;

        for(int k = 0; k < n1; k++)
            total += gas[k] - cost[k];

        if(total < 0)
            return -1;

        while(i < n1) {

            fuel += gas[j] - cost[j];

            if(fuel < 0) {
                j++;
                i = 0;
                fuel = 0;

                if(!v.empty())
                    v.pop();

                vi.clear();
            }
            else {
                if(v.empty())
                    v.push(j);

                i++;
                j++;

                vi.push_back(j);
            }

            if(j == n2)
                j = 0;

            if(i == n1 && vi.size() == n1)
                return v.top();
        }

        return -1;
    }
};