#include <bits/stdc++.h>
#include <iostream>
#include <unordered_map>
#include <utility>

using namespace std;

int main(int argc, char *argv[]) {
  unordered_map<string, int> m;
  m["Pratham"] = 13;
  m["Harsh"] = 34;
  m["Garvit"] = 89;

  // for (auto x : m) {
  //   cout << x.first << " " << x.second << endl;
  // }

  string key = "Garvit";
  if (m.find(key) != m.end()) {
    auto temp = m.find(key);
    cout << "key is : " << temp->first << endl;
    cout << "Value is : " << temp->second << endl;
  }

  m.insert(make_pair("Apple", 78000));

  key = "Garvit";
  m.erase(key);

  for (auto itr = m.begin(); itr != m.end(); itr++) {
    cout << itr->first << " " << itr->second << endl;
  }

  int arr[] = {1, 2, 3, 4, 3, 4, 2, 5, 6, 6};

  unordered_map<int, int> unmap_1;
  for (int i = 0; i < 10; i++) {
    int key = arr[i];
    unmap_1[key]++; // We are inserting key into our unordered_map and then
                    // increasing its count
  }
  for (auto itr = unmap_1.begin(); itr != unmap_1.end(); itr++) {
    cout << itr->first << " " << itr->second << endl;
  }
  return 0;
}
