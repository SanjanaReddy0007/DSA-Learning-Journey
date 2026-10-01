
bool consecutiveSequnce(vector<int>&identifiers)
{
    int n = identifiers.size();
    sort(identifiers.begin() , identifiers.end());

    for(int i = 0; i < n - 1; i++) {
        if(identifiers[i] + 1 != identifiers[i + 1]) {
            return false;
        }
    }

    return true;

}

