#include<iostream>
#include<vector>
#include<string>
#include<unordered_map>
#include<unordered_set>
using namespace std;

void printItenary(unordered_map<string,string> tickets){
    //starting point
    unordered_set<string> to;
    for(pair<string,string> ticket : tickets){
        to.insert(ticket.second);
    }

    string start = " "; // form mei hota hei starting point to mei nhi
    for(pair<string,string> ticket : tickets){  //ticket.first -> from
        if(to.find(ticket.first) == to.end()){ //starting point
           start = ticket.first;
        }
    }

    //print plan
    cout << start << " -> ";
    while(tickets.count(start)){
        cout<<tickets[start] << " -> ";
        start = tickets[start];
    }
    cout<< "destination\n";
}


int main(){

    unordered_map<string,string> tickets;
    
    tickets["Chennai"] = "Bengaluru";    
    tickets["Mumbai"] = "Delhi";
    tickets["Goa"]    = "Chennai";
    tickets["Delhi"]  = "Goa";

    printItenary(tickets);

    return 0;
}

