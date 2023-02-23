string reverseWord(string str){
  int n = str.size();
  int low = 0;
  int high = n-1;
  while(low <= high)
  {
      swap(str[low],str[high]);
      low++;
      high--;
  }
  return str;
}
//GFG
