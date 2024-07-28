#include<bits/stdc++.h>

using namespace std;


enum class OrderType { //this is the type of the order
   GoodtillCancel,
   FillandKill,
};

enum class Side { //tthis is the side of the order
   Buy,
   Sell,
};

using Price = int32_t; //this is the price of the order
using Quantity = uint32_t; //this is the quantity of the order
using OrderId = uint32_t; //this is the order id of the order

struct  LevelInfo{
    Price price_;
    Quantity quantity_;
};

using LevelInfos=vector<LevelInfo>; 

class OrderbookLevelInfos{

public:
    OrderbookLevelInfos(const LevelInfos& bids,const LevelInfos& asks)
    :bids_{bids}
    ,asks_{asks}
    {}
    const LevelInfos & GetBids() const {return bids_ ;}
    const LevelInfos & GetAsks() const {return asks_ ;}

private:
    LevelInfos bids_;
    LevelInfos asks_;

}

class Order
{
    public:
        Order(O) 
}


int main(){

    return 0;
}