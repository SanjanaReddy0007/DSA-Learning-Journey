
bool movieTicketcounter(vector<int>&tickets) {
    int fif = 0, hund = 0, twoHun = 0;

    for(int i = 0; i < tickets.size(); i++) {
        if(tickets[i] == 50) {
            fif++;
        } else if(tickets[i] == 100) {
            hund++;
            if(fif >= 1) {
                fif -= 1;
            } else {
                return false;
            }
        } else if(tickets[i] == 200) {
            twoHun++;
            if(fif >= 1 && hund >= 1) {
                fif -= 1;
                hund -= 1;
            } else if(fifties >= 3 ){
                fif -= 3;
            } else {
                return false;
            }
        }
    }

    return true;

}

