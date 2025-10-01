#include <string>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

vector<string> solution(vector<string> players, vector<string> callings)
{
    map<string, int> player_to_rank;

    for (int i = 0; i < players.size(); ++i)
        player_to_rank[players[i]] = i;
    
    for (const string& called_player : callings)
    {
        int current_rank = player_to_rank[called_player];
        int front_rank = current_rank - 1;
        
        string front_player = players[front_rank];
        swap(players[current_rank], players[front_rank]);
        player_to_rank[called_player] = front_rank;
        player_to_rank[front_player] = current_rank;
    }
    
    return players;
}