
class solution {
public:
    // Helper function to check if attendee a knows attendee b
    bool knows(vector<vector<int>>& interactions, int a, int b, int n) {
        return interactions[a][b] == 1;
    }

    // Function to find if there is a luminary in the conference
    int findluminary(vector<vector<int>>& interactions, int n) {
        stack<int> s;

        // Step 1: Push all the people into the stack
        for (int i = 0; i < n; i++) {
            s.push(i);
        }

        // Step 2: Eliminate non-celebrities by comparing pairs
        while (s.size() > 1) {
            int a = s.top();
            s.pop();
            int b = s.top();
            s.pop();

            if (knows(interactions, a, b, n)) {
                s.push(b);  // a knows b, so a is not a luminary
            } else {
                s.push(a);  // a doesn't know b, so b is not a luminary
            }
        }

        // Step 3: The last attendee in the stack is a potential luminary
        int potentialLumi = s.top();
        s.pop();

        // Step 4: Verify the potential luminary
        // Check row: potentialLumi should not know anyone
        for (int i = 0; i < n; i++) {
            if (i != potentialLumi && interactions[potentialLumi][i] == 1) {
                return -1;
            }
        }

        // Check column: everyone should know potentialLumi
        for (int i = 0; i < n; i++) {
            if (i != potentialLumi && interactions[i][potentialLumi] == 0) {
                return -1;
            }
        }

        return potentialLumi;
    }
};

