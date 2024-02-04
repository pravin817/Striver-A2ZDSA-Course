void learnMap()
{

    // stores the data in the form of the keys and value pair  ---> map stores the unique keys in sorted order
    cout << "The map started...." << endl;
    map<int, int> mp;

    map<int, pair<int, int>> mp1;

    map<pair<int, int>, int> mp2;

    mp[1] = 10;
    mp.insert({2, 20});
    mp.emplace({3, 30});

    mp1[1] = {2,3};

    // print the values from the map

    for(auto m:mp){
        cout<<m.first<<" : "<<m.second<<endl;
    }


}