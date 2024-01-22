// 1-A.Vanya and Fence
//  #include <iostream>
//  using namespace std;

// int main()
// {
//     int n, h, a;
//     cin >> n >> h;
//     int w = 0;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a;
//         if (a > h)
//             w++;
//         w++;
//     }

//     cout << w;
// }
// //////////////////////////////////////////

// A.Anton and Danik

// #include <iostream>
// #include <algorithm>
// #include <string>

// using namespace std;

// int main(){

// int n;
// string s;
// int a=0;
// int d=0;

//     cin>>n;
//     cin>>s;

//     for(int i=0;i<n;i++){
//         if(s[i]=='A')  a++;
//         else d++;

//     }
//     if(a>d) cout<<"Anton";
//     else if(d>a) cout<<"Danik";
//     else cout<<"Friendship";

//     return 0;
// }

// //////////////
// another way for solution

// #include <iostream>
// #include <algorithm>
// #include <string>

// using namespace std;

// int main(){

//     string s;
//     int n;
//     cin>>n;
//     cin>>s;
//     int a=count(s.begin(),s.end(),'A');
//     int d=n-a;

//     if(a>d) cout<<"Anton";
//     else if(d>a) cout<<"Danik";
//     else cout<<"Friendship";

//     return 0;
// }

// /////////////////////////////////////
// 3-A.Bear big brother

// #include <iostream>

// using namespace std;

// int main(){

// int a,b,y=0;

// cin>>a>>b;

// while(a<=b){
//     a*=3;
//     b*=2;
//     y++;
// }
// cout<<y;
//     return 0;
// }

// ////////////////////

// 4-A.Team

// #include <iostream>

// using namespace std;

// int main(){
//  int s=0;
//  int n,p,v,t;

//  cin>>n;

// for(int i=0;i<n;i++)
//    {
//     cin>>p>>v>>t;
//     if(p&&v || p&&t || v&&t){
//         s++;
//     }
//     }
//     cout<<s;

//     return 0;

// }
// ////////
// another way for solution

// #include <iostream>

// using namespace std;

// int main(){
//     int n,s=0;
//     cin>>n;
//     for(int i=0;i<n;i++){
//         int p,v,t;
//         cin>>p>>v>>t;
//         s+=(p+v+t>=2);

//     }
//     cout <<s;
//     return 0;
// }

// 5-A. Beautiful Matrix

// #include <iostream>
// #include <cmath>
// using namespace std;
// int main(){
// int M[5][5];
// int move=0;

// for(int i=0;i<5;i++){
//     for(int j=0;j<5;j++){
//         cin>>M[i][j];
//         if(M[i][j]==1){
//             move=abs(2-i)+abs(2-j);
//         }
//     }
// }
//     cout<<move;
//     return 0;
// }

// another solution

// #include <iostream>
// #include <cmath>

// using namespace std;

// int main()
// {
//     int x,flag=0;
//     for (int i = 0; i < 5; i++)
//     {
//         for (int j = 0; j < 5; j++)
//         {cin>>x;
//         if(x==1){
//             cout<<abs(2-i)+abs(2-j)<<'\n';

//             break;
//         }
//         }

//     }
//     return 0;
// }

// 6-A. Gravity Flip

// #include <iostream>
// #include <vector>
// #include <algorithm>

// using namespace std;

// int main(){
//     int n;
//     cin>>n;
// vector<int>v(n);
// for(int i=0;i<n;i++){
//     cin>>v[i];
// }

// sort(v.begin(),v.end());
// for(int i=0;i<n;i++){
//     cout <<v[i]<<" ";
// }
//     return 0;
// }

// 7- A. Petya and Strings

// #include <iostream>
// #include <algorithm>
// #include <string>
// #include <cctype>
// using namespace std;
// int main(){
// string x,y;
// cin>>x>>y;
// transform(x.begin(),x.end(),x.begin(),::tolower);
// transform(y.begin(),y.end(),y.begin(),
// ::tolower);
// if(x<y)cout<<-1;
// else if(y<x) cout<<1;
// else cout<<0;
//     return 0;
// }

// 8- A. Boy or Girl

// #include <iostream>
// #include <string>
// #include <algorithm>
// #include <string_view>
// #include <type_traits>

// using namespace std;

// int main(){
// string tep="";
// string s;
// cin>>s;

// for(int i=0;i<s.length();i++){

//   if(tep.find(s[i]) == std::string::npos) tep.push_back(s[i]);
// }
// if(tep.length()%2==0)
// {
//     cout<<"CHAT WITH HER!";
// }
// else cout<<"IGNORE HIM!";
//     return 0;
// }

// 9-Word

// #include <iostream>
// #include <string>

// using namespace std;

// int main(){

//     string s;
//    cin>>s;
//    int L=0;
//    for(int i=0; i<s.length();i++){
//     if('a'<= s[i] && 'z'>= s[i]){
//         L++;
//     }
//    }
//    int U=s.length()-L;

//    for(int i=0; i<s.length();i++){
//     if(L>U){
//       s[i]= tolower(s[i]);
//     }
//     else if (U>L){
//          s[i]=toupper(s[i]);

//     }
//     else {s[i]=tolower(s[i]);}
//    }
//    cout<<s;
//     return 0;
// }

// another

// #include <iostream>
// #include <string>

// using namespace std;

// int main(){

//     string s;
//    cin>>s;
//    int L=0;
//    for(int i=0; i<s.length();i++){
//     if(islower(s[i])){
//         L++;
//     }
//    }
//    int U=s.length()-L;

//    for(int i=0; i<s.length();i++){
//     if(L>U){
//       s[i]= tolower(s[i]);
//     }
//     else if (U>L){
//          s[i]=toupper(s[i]);

//     }
//     else {s[i]=tolower(s[i]);}
//    }
//    cout<<s;
//     return 0;
// }

// 10- magnets

// #include<iostream>
// #include<string>

// using namespace std;

// int main(){
//    int n,row=1;
//    string s,x;
//    cin>>n;
//    cin>>s;
//    for(int i=0;i<n-1;i++){
//     cin>>x;
//     if(x!=s) {
//         row++;
//         s=x;
//     }
//    }
//    cout<<row;
//     return 0;
// }

// 11- Sereja and Dima
// #include <iostream>
// #include <vector>

// using namespace std;

// int main()
// {
//     vector<int> d;

//     int x, n;
//     int s = 0;
//     int a = 0;
//     int left = 0;
//     bool t = true;
//     cin >> n;
//     int right = n - 1;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> x;
//         d.push_back(x);
//     }
//     while (left <= right)
//     {
//         if (t)
//         {
//             if (d.at(left) >= d.at(right))
//             {
//                 s += d.at(left);
//                 left++;
//             }
//             else
//             {
//                 s += d.at(right);
//                 right--;
//             }
//         }
//         else
//         {
//             if (d.at(left) >= d.at(right))
//             {
//                 a += d.at(left);
//                 left++;
//             }
//             else
//             {
//                 a += d.at(right);
//                 right--;
//             }
//         }
//         t = !t;
//     }

//     cout << s << " " << a;

//     return 0;
// }

// another

// #include <iostream>
// #include <deque>

// using namespace std;

// int main(){
//     deque <int>d;
//     int n,x;
//     int s=0,a=0;
//     bool t = true;
//     cin >> n;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> x;
//         d.push_back(x);
//     }
//     while(!d.empty()){
//         int card;
//         if(t){
//             if(d.front()<=d.back()){
//                 card=d.back();
//                 d.pop_back();
//             }
//             else{
//                 card=d.front();
//                 d.pop_front();
//             }
//             s+=card;
//         }
//         else{
//             if(d.front()<=d.back()){
//                 card=d.back();
//                 d.pop_back();
//             }
//             else{
//                 card=d.front();
//                 d.pop_front();
//             }
//             a+=card;
//         }
//         t=!t;
//     }
//     cout<<s<<" "<<a;
//     return 0;
// }


// 12- Stones on the Table

// #include <iostream>
// #include <string>

// using namespace std;

// int main(){
// int n,flage=0;
// string s;
// cin>>n;
// cin>>s;
//     for(int i=1;i<n;i++){
//         if(s[i-1]==s[i]){
//             flage++;
//         }
//     }
//     cout<<flage;
//     return 0;
// }

// A. Police Recruits
// #include <iostream>
// #include <vector>
// using namespace std;
// int main(){
//     int n, solder=0,untread=0;
//     cin>>n;
// vector <int>v(n);
//     for(int i=0;i<n;i++){
//         cin>>v[i];
//         if(v[i]==-1) {
//             if(solder>0){
//                 solder--;
//             }else{
//                 untread++;
//             }
//         }else{
//             solder+=v[i];
//         }
//     }
//     cout<<untread;
//     return 0;
// }

// 13- Black Square

// #include <iostream>
// #include <string>
// #include <array>

// using namespace std;

// int main(){
//     int cal=0;
//     int arr[4];
//     for(int i=0;i<4;i++){
//         cin>>arr[i];
//     }
//     string s;
//     cin>>s;

//     for(int i=0;i<s.length();i++){
//         if(s[i]=='1'){
//             cal+=arr[0];
//         }
//         if(s[i]=='2'){
//             cal+=arr[1];
//         }
//         if(s[i]=='3'){
//             cal+=arr[2];
//         }
//         if(s[i]=='4'){
//             cal+=arr[3];
//         }
//     }
//     cout<<cal;
//     return 0;
// }

//////////////////////////////////////////
// another
// #include <iostream>
// #include <string>
// #include <algorithm>

// using namespace std;

// int main(){
//     int x,y,z,n,ans=0;
//     string s;
//     cin>>x>>y>>z>>n;
//     cin>>s;
// ans=count(s.begin(),s.end(),'1')*x+count(s.begin(),s.end(),'2')*y+count(s.begin(),s.end(),'3')*z+count(s.begin(),s.end(),'4')*n;
//  cout<<ans;
//     return 0;
// }


// 14- Night at the Museum

// #include<iostream>
// #include<string>
// #include<math.h>

// using namespace std;

// int main(){
//     int step=0;
//     string s;
//     cin>>s;
//     int pointer=tolower('a');
//     for(int i=0;i<s.length();i++){
//         int sub=abs(tolower(s[i])-pointer);
//         if(sub>13) sub=26-sub;
//         step+=sub;
//         pointer=s[i];
//         cout<<s[i]<<" "<<" "<<pointer<<" "<<sub<<" "<<step<<endl;
//     }
//     cout<<step;
//     return 0;
// }

// 15-Games

// #include <iostream>



// using namespace std;

// int main(){
//     int n,dif=0;
//     cin>>n;
//  int first[n];
//  int second[n];

//  for(int i=0;i<n;i++){

//     cin>>first[i]>>second[i];
   
//  }
//  for(int i=0;i<n;i++){
//     for(int j=0;j<n;j++){
//             if(first[i]==second[j] ) dif++;
//     }
//  }
// cout<<dif;
//     return 0;
// }

// 3
// 1 2
// 2 4
// 3 4


// 16-A. Buy a Shovel

// #include <iostream>

// using namespace std;

// int main(){
// int price;
// int exchange;
// int multi=1;
// cin>>price;
// cin>>exchange;

// while (((price*multi)%10)!=exchange && (((price*multi)%10)!=0))
// { 
//    multi++;
// }
// cout<<multi;


//    return 0;
// }

//17- A. Is your horseshoe on the other hoof?
// #include <iostream>
// #include <set>

// int main() {
//     int s1, s2, s3, s4;
//     std::cin >> s1 >> s2 >> s3 >> s4;

//     // Use a set to count the number of distinct colors
//     std::set<int> distinctColors = {s1, s2, s3, s4};

//     // Calculate the minimum number of horseshoes Valera needs to buy
//     int additionalHorseshoes = 4 - distinctColors.size();

//     std::cout << additionalHorseshoes << std::endl;

//     return 0;
// }

//18- A. Colorful Stones (Simplified Edition)

// #include <iostream>
// #include <string>

// using namespace std;
// int main(){
// int position=0;
// string s;
// string instruction;
// cin>>s>>instruction;
// for(char c : instruction){
//    if(c==s[position]) position++;
// }
// cout<<position+1;
// return 0;
// }

// //19- A. Die Roll
// #include <iostream>
// #include <algorithm>
// using namespace std;

// int main(){

// // int x=5;
// // int y=4;
// int prob,rem,x,y;
// cin>>x>>y;
// int maxValue=max(x,y);
// cout<<maxValue<<"maxValue"<<endl;
// prob=(6-maxValue)+1;
// cout<<prob<<"prob"<<endl;
// rem=6%prob;
// cout<<rem<<"rem"<<endl;
// if(prob==6){
// cout<<1<<'/'<<1;
// }
// else if(prob==0){
// cout<<0<<'/'<<1;
// }
// else if(prob<6){
//     if(rem==0){
//         cout<<prob/prob<<'/'<<6/prob;
//     }else{
//         cout<<prob/rem<<'/'<<6/rem;
//     }
// }
//     return 0;
// }

// 19-better A Die Roll 
// try to find the greatest common divisor GCD 
// #include <iostream>
// #include <algorithm>

// int main() {
//     int y, w;
//     std::cin >> y >> w;

//     int max_roll = std::max(y, w);  // Find the maximum of Yakko and Wakko's rolls

//     int favorable_outcomes = 6 - max_roll + 1;  // Dot wins if she rolls a number greater than or equal to max_roll

//     // Find the greatest common divisor (GCD) of favorable_outcomes and 6
//     int gcd = std::__gcd(favorable_outcomes, 6);

//     // Output the probability in the form of irreducible fraction
//     std::cout << favorable_outcomes / gcd << '/' << 6 / gcd << std::endl;

//     return 0;
// }

// 19-another one based on the prob theory

// #include<iostream>
// #include<cmath>
// #include<string>
// using namespace std;


// int main()
// {
// 	int x,y;
// 	string die_roll[6]={"1/6","1/3","1/2","2/3","5/6","1/1"};
// 	cin>>x>>y;
// 	x=max(x,y);

// 	cout << die_roll[6-x];

// 	return 0 ;
// }


// 20-A. Shaass and Oskols

// #include <iostream>
// #include <vector>

// using namespace std;

// int main(){

// int Twire,Kwire,pos,Knum;

// cin>>Twire;
// vector <int> birds(Twire);

// for(int i=1;i<=Twire;i++){
//     cin>>birds[i];
// }
// cin>>Knum;

// for(int i=1;i<=Knum;i++){
//    cin>>Kwire>>pos;
    
//     if(Kwire !=1 ){
//         birds[Kwire-1]+=pos-1;
//     }
    
//     if(Kwire !=Twire ){

//         birds[Kwire+1]+=birds[Kwire]-pos;
//     }
//     birds[Kwire]=0;
 
// }

// for(int i=1;i<=Twire;i++){
//     cout<<birds[i]<<"\n";
// }
//     return 0;
// }
//21- A. juicer

// #include <iostream>

// using namespace std;

// int main(){

// int wast,mixer,n,section=0,count=0;

// cin>>n>>mixer>>wast;
// int orang[n];
// for(int i=0;i<n;i++){
//     cin>>orang[i];
// }
// for(int i=0;i<n;i++){
//     if(orang[i]<=mixer){
//         section+=orang[i];
//         if(section>wast){
//             count++;
//             section=0;
//         }
//     }
// }
// cout<<count;
//     return 0 ;
// }






















































































































































































































































































































































































































































































































