#include <iostream>
#include <string>
#include <algorithm>
#include <unordered_map>
using namespace std;
int main(){
    cout<<"Nigeria implemented Mobile Number Portability in 2013, so the number prefix can no longer be reliably used to determine a mobile's home operator."<<endl;
    cout<<endl;
    cout<<"Enter network Prefix: ";
    unordered_map<string, string> Prefix{{"0701", "Airtel Nigeria"}, {"07020", "Smile"}, {"07025", "MTN Nigeria (formerly Visafone)"}, {"07026", "MTN Nigeria (formerly Visafone)"}, {"07027", "MultiLink"}, {"07028", "Starcomms"}, {"07029", "Starcomms"}, {"0703", "MTN Nigeria"}, {"0704", "MTN Nigeria (formerly Visafone)"}, {"0705", "Gloalcom"}, {"0706", "MTN Nigeria"}, {"0707", "ZoomMobile (formerly Reltel)"}, {"0708", "Airtel Nigeria"}, {"0709", "Multi-Links"}, {"0802", "Airtel Nigeria"}, {"0803", "MTN Nigeria"}, {"0804", "Ntel"}, {"0805", "Globalcom"}, {"0806", "MTN Nigeria"}, {"0807", "Globalcom"}, {"0808", "Airtel Nigeria"}, {"0809", "9mobile"}, {"0810", "MTN Nigeria"}, {"0811", "Globalcom"}, {"0812", "Airtel Nigeria"}, {"0813", "MTN Nigeria"}, {"0814", "MTN Nigeria"}, {"0815", "Globacom"}, {"0816", "MTN Nigeria"}, {"0817", "9mobile"}, {"0818", "9mobile"}, {"0819", "Starcomms"}, {"0901", "Airtel Nigeria"}, {"0902", "Airtel Nigeria"}, {"0903", "MTN Nigeria"}, {"0904", "Airtel Nigeria"}, {"0905", "Globalcom"}, {"0906", "MTN Nigeria"}, {"0907", "Airtel Ngeria"}, {"0908", "9mobile"}, {"0909", "9mobile"}, {"0913", "MTN Nigeria"}, {"0915", "Globalcom"}};
    string key_value = "";
    cin>>key_value;
    if(Prefix.find(key_value) == Prefix.end()) cout<<"Not found"<<endl;
    else cout<<Prefix[key_value]<<endl;
}
