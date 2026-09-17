int roboticCircuitJourney(vector<int>&charge, vector<int>&energy)
{
    int n = charge.size();
    int totalCharge = 0, totalEnergy = 0, start = 0;

    for(int i = 0; i < n; i++) {
        totalCharge += charge[i];
        totalEnergy += energy[i];
        currentCharge += charge[i] - energy[i];

        if(currentharge < 0) {
            start = i + 1;
            currentCharge = 0;
        }
    }

    if(totalCharge < totalEnergy) {
        return -1;
    }

    return start;

}

