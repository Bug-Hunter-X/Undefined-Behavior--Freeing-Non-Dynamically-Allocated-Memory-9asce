int main() {
  int x = 10;
  int *ptr = &x;
  *ptr = 20; 
  int y = *ptr; // y will be 20
  free(ptr); // Undefined behavior; ptr was not allocated with malloc
  return 0;
}