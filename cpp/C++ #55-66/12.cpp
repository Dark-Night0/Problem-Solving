#include <iostream>
using namespace std;

// Write Your Function Here
string createurl(string protocol , string domain , string tld  , bool sub=true){

    if (sub)
        return protocol + "://www." + domain + "." + tld ;
        
    else
        return protocol + "://" + domain + "." + tld ;
}
int main()
{
  cout << createurl("https", "elzero", "org") << "\n"; // https://www.elzero.org
  cout << createurl("https", "google", "com", false) << "\n"; // https://google.com
  cout << createurl("http", "learn", "net") << "\n"; // http://www.learn.net
  return 0;
}