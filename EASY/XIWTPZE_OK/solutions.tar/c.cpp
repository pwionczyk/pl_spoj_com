#include <fstream>
#include <iostream>
#include <stdio.h>
#include <string>
#include <set>
#include <queue>

using namespace std;

int graph[128][128];
int n;

inline int tomask( string &s )
{
    int ma = 0;
    for( int i = 0; i < ( int )s.size(); i++ ) ma |= ( 1 << s[i] );
    return ma;
}

bool bfs( int seen, int a, int b )
{
    if( a == b ) return true;
    queue< int > q;
    q.push( a );
    while( !q.empty() )
    {
        int u = q.front();
        q.pop();
        for( int i = 0; i < n; i++ ) if( !( seen & ( 1 << i ) ) && graph[u][i] >= 0 )
        {
            if( i == b ) return true;
            seen |= ( 1 << i );
            q.push( i );
        }
    }
    return false;
}

int main()
{
    int m, prob = 0;
    int d;
    cin >> d;
    while (d--) {
        cin >> n >> m;
        if( prob ) printf( "\n" );
        ++prob;
        
        memset( graph, -1, sizeof( graph ) );
        for( int i = 0; i < m; i++ ) 
        {
            int u, v, d;
            cin >> u >> v >> d; u--; v--;
            graph[u][v] = graph[v][u] = d;
        }
        int s, t, maxd;
        cin >> s >> t >> maxd;
        s--; t--;
        
        set< pair< int, pair< int, string > > > q;
        q.insert( make_pair( 0, make_pair( s, string() + ( char )s ) ) );
        bool got1 = false;
        while( !q.empty() )
        {
            __typeof( q.begin() ) itr = q.begin();
            int dsofar = itr->first;
            int u = itr->second.first;
            string path = itr->second.second;
            q.erase( itr );
 //           printf( "--- at %d with dist %d\n", u, dsofar );
            
            if( u == t )
            {
                got1 = true;
                printf( "%d:", dsofar );
                for( int z = 0; z < ( int )path.size(); z++ )
                {
                    printf( " %d", path[z] + 1 );
                }
                printf( "\n" );
            }
            else
            {
                int pmask = tomask( path );
                for( int v = 0; v < n; v++ ) if( graph[u][v] >= 0 && !( pmask & ( 1 << v ) ) )
                {
                    int newd = dsofar + graph[u][v];
                    if( newd > maxd ) continue;
                    if( !bfs( pmask, v, t ) ) continue;
                    q.insert( make_pair( newd, make_pair( v, path + ( char )v ) ) );
                }
            }
        }
        
        if( !got1 ) printf( "NIE\n" );
    }
    return 0;
}
