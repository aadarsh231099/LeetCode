//https://leetcode.com/problems/design-parking-system/
//Design Parking System

class ParkingSystem {
public:
    unordered_map<int, int> mp;
    ParkingSystem(int bg,int med,int sml) {
        mp[1]=bg;
        mp[2]=med;
        mp[3]=sml;
    }
    bool addCar(int type) {
        if(mp[type]) {
            mp[type]--;
            return true;
        }
        else return false;
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */