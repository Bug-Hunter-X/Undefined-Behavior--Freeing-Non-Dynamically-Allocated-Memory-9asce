int main() {
  int x = 10;
  int *ptr = &x; 
  *ptr = 20; 
  int y = *ptr; // y will be 20
  // Correct: Do not free ptr because it points to a stack variable
  return 0;
} 