/*
 * Wade Bradford
 * CS 124
 * Project 1
 */

using namespace std;
#include <vector>
#include <string>
#include <iostream>
#include "Streamer.h"


int main() {


    vector<Streamer> streamers;
    string fn = "twitchdata-update.csv";
    cout << endl;

    // reads file and stores into vector
    if (readDataFromFile(fn, streamers)) {
        cout << streamers.size() << " steamers read from file" << std::endl;
        string firstName = streamers.front().getStreamerName();
        cout << "The first streamer read was " << firstName << endl;
        string lastName = streamers.back().getStreamerName();
        cout << "The last streamer read was " << lastName << endl;
    }
     else {
        cout << "Something went wrong." << endl;
    }

     cout << "" << endl;
     cout << "" << endl;

     // Key for data reading
     cout << "Table Key:" << endl;
     cout << "(WT) = Watch time" << endl;
     cout << "(ST) = Stream time" << endl;
     cout << "(PV) = Peak viewers" << endl;
     cout << "(AV) = Average viewers" << endl;
     cout << "(F) = Followers" << endl;
     cout << "(FG) = Followers gained" << endl;
     cout << "(VG) = Views gained" << endl;
     cout << "(P?) = Partnered?" << endl;
     cout << "(M?) = Mature?" << endl;
     cout << "(L) = Language" << endl;


     cout << endl;
     cout << endl;


    // manual spacing for headers
    cout  << "(Streamer Name)";
    cout  << "                " << "(WT)";
    cout  <<  "       " << "(ST)";
    cout  << "    " << "(PV)";
    cout  << "    " << "(AV)";
    cout  << "     " << "(F)";
    cout  << "      " <<  "(FG)";
    cout  << "    " << "(VG)";
    cout  << "       " << "(P?)";
    cout   << "   " << "(M?)";
    cout  << "    " << "(L)";


    cout << endl;



    for (int i = 0; i <streamers.size(); i++) {
        cout << left << setw(30) << streamers[i].getStreamerName() << " ";
        cout << setw(10) << streamers[i].getWatchTime() << " ";
        cout << setw(7) << streamers[i].getStreamTime() << " ";
        cout << setw(7) << streamers[i].getPeakViewers() << " ";
        cout << setw(7) << streamers[i].getAverageViewers() << " ";
        cout << setw(8) << streamers[i].getFollowers() << " ";
        cout << setw(8) << streamers[i].getFollowersGained() << " ";
        cout << setw(10)<<streamers[i].getViewsGained() << " ";
        cout << setw(5) << streamers[i].getPartnered() << " ";
        cout << setw(6) << streamers[i].getMature() << " ";
        cout << setw(10) << streamers[i].getLanguage() << " ";
        cout << endl;
    }

    cout << "" << endl;

     // calculates the average amount of followers
    calculateAverageFollowers(streamers);

    return 0;
}


