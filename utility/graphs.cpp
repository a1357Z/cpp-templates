
//builds a graph of size and edges quick_find_count
vector<vector<ll>> buildGraph(ll size, ll edges){
    vector<vector<ll>> graph(size + 1);
    for (ll i = 0; i < edges; i++)
    {
        ll a, b;
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    return graph;
}

//disjoint set union
class DSU
{
    public:
    vector<ll> quick_find_items; //parent of every node
    vector<ll> quick_find_count; //the size of every connected component

    DSU(ll s){
        //quick find
        quick_find_items = vector<ll>(s+1);
        quick_find_count = vector<ll>(s+1);
        for(ll i=0;i<s+1;i++){
            quick_find_items[i] = i;
            quick_find_count[i] = 1;
        }

        //!quick union
    }

    //quick find connect O(n)
    void quick_find_connect(ll a, ll b){
        if(connected(a,b))return;
        ll p = quick_find_items[a];
        ll c = quick_find_items[b];
        ll s = max(quick_find_count[a], quick_find_count[b]) + 1;
        for(ll i = 0;i<quick_find_items.size();i++){
            if(quick_find_items[i] == c || quick_find_items[i] == p){
                quick_find_items[i] = p;
                quick_find_count[i] = s;
            }
        }
    }

    // quick find O(1)
    bool quick_find_connected(ll a, ll b){
        return quick_find_items[a] == quick_find_items[b];
    }
};


//neal wu DSU
struct union_find {
    vector<int> parent;
    vector<int> size;
    int components = 0;
 
    union_find(int n = 0) {
        if (n > 0)
            init(n);
    }
 
    void init(int n) {
        parent.resize(n + 1);
        size.assign(n + 1, 1);
        components = n;
 
        for (int i = 0; i <= n; i++)
            parent[i] = i;
    }
 
    int find(int x) {
        return x == parent[x] ? x : parent[x] = find(parent[x]);
    }
 
    bool unite(int x, int y) {
        x = find(x);
        y = find(y);
 
        if (x == y)
            return false;
 
        if (size[x] < size[y])
            swap(x, y);
 
        parent[y] = x;
        size[x] += size[y];
        components--;
        return true;
    }
};