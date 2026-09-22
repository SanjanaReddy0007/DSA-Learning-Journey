vector<int>Threeconsecutive(int k)
{
    if (k % 3 != 0) {
        return {};
    }

    int x = k / 3 - 1;
    return {x , x + 1, x + 2};

}

