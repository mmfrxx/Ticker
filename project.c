char ground[6] = {6, 7, 8, 9, 10, 11};
char supply[6] = {0, 1, 2, 3, 4, 5};
int a[36] = {100,1000,100,100,100,100,100,100,100,100,1, 2, 5, 6, 7, 8, 11, 12, 13, 14, 1000, 15, 16, 17, 18, 19, 20, 23, 24, 26, 27, 28, 29, 33, 34, 34};
int b[36] = {100,1000,100,100,100,100,100,100,100,100,35, 29, 23, 17, 11, 5, 36, 30, 24, 18, 12, 6, 34, 33, 32, 25, 20, 21, 22, 16, 15, 14, 7, 2, 3, 4};
int c[36] = {34,  33, 32, 32, 29, 28, 27, 26, 26, 24, 23, 18, 17, 10, 11, 9, 8, 8, 2, 2, 3, 4, 8, 8, 2, 2, 3, 4, 8, 8, 2, 2, 3, 4, 34, 33}; 
int d[36] = {35, 29, 23, 17, 11, 5, 36, 30, 24, 18, 12, 6, 34, 33, 26, 20, 14, 8, 3, 4, 5, 6, 14, 8, 3, 4, 5, 6, 14, 8, 3, 4, 5, 6, 35, 29}; 
int e[36]= {35, 29, 23, 17, 11, 5, 36, 30, 24, 18, 12, 6, 34, 33, 32, 31, 4, 3, 2, 1, 22, 21, 20, 19, 16, 15, 14, 13, 36, 30, 24, 18,100,100,100,100};
int f[36] = {35, 29, 23, 17, 11, 5, 36, 30, 24, 18, 12, 16, 15, 10, 9, 34, 33, 32, 31, 25, 26, 27, 28, 12, 16, 15, 10, 9, 34, 33, 32, 31, 25, 26, 27, 6}; 
int g[36] = {31, 32, 33, 34, 29, 28, 24, 23, 18, 17, 11, 10, 4, 3, 2, 1, 8, 7, 14, 13, 29, 28, 24, 23, 18, 17, 11, 10, 4, 3, 2, 1, 8, 7, 14, 13}; 
int h[36] = {35, 29, 23, 17, 11, 5, 36, 30, 24, 18, 12, 6, 32, 31, 26, 25, 20, 19, 14, 13, 8, 7, 1, 2, 22, 21, 16, 15, 8, 7, 1, 2, 22, 21, 16, 15}; 
int i[36] =  {36, 35, 34, 33, 32, 31, 30, 29, 28, 27, 26, 25, 22, 21, 16, 15, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 32, 31, 30, 29, 100, 100, 100, 100};
int j[36] = {33, 32, 27, 26, 21, 20, 15, 14, 9, 8, 4, 3, 10, 11, 12, 5, 6, 18, 17, 17, 33, 32, 27, 26, 21, 20, 15, 14, 9, 8, 4, 3, 10, 11, 12, 5}; 
int k[36] = {35, 29, 23, 17, 11, 5, 36, 30, 24, 18, 12, 6, 22, 16, 27, 9, 32, 32, 1, 31, 9, 21, 33, 3, 22, 16, 27, 9, 32, 32, 1, 31, 9, 21, 33, 3};
int l[36] = {35, 29, 23, 17, 11, 5, 36, 30, 24, 18, 12, 6, 10, 4, 9, 3, 8, 2, 10, 4, 9, 3, 8, 2, 10, 4, 9, 3, 8, 2, 10, 4, 9, 3, 8, 2};
int n[36] = {35, 29, 23, 17, 11, 5, 36, 30, 24, 18, 12, 6, 32, 31, 26, 25, 20, 19, 14, 13, 8, 7, 2, 1, 28, 22, 15, 9, 100, 100, 100, 100, 100, 100, 100, 100};
int r[36] =  {36, 30, 24, 18, 12, 6, 35, 29, 23, 17, 11, 5, 34, 33, 32, 25, 20, 21, 22, 16, 9, 2, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100};
int s[36] =  {32, 33, 34, 35, 29, 23, 17, 16, 15, 14, 8, 2, 3, 4, 5, 32, 33, 34, 35, 29, 23, 17, 16, 15, 14, 32, 33, 34, 35, 29, 23, 17, 16, 15, 14, 100};
int t[36] = {31, 32, 33, 34, 35, 36, 25, 26, 27, 28, 29, 30, 15, 16, 9, 10, 4, 3, 22, 21, 33, 34, 35, 36, 25, 26, 27, 28, 29, 30, 100,10, 4, 3, 22, 21};
int u[36] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 36, 35, 30, 29, 24, 23, 18, 17, 32, 31, 26, 25, 20, 19, 14, 13, 30, 29, 24, 23, 100, 100, 100, 100} ;
int v[36] = {36, 35, 30, 29, 24, 23, 18, 17, 11, 10, 4, 3, 9, 8, 14, 13, 20, 19, 26, 25, 32, 31, 26, 25, 32, 31,  4, 3, 9, 8, 36, 35, 30, 29, 29, 29};
int y[36] = {36, 29, 22, 30, 23, 16, 31, 26, 21, 25, 20, 15, 10, 9, 4, 3, 36, 29, 22, 30, 23, 16, 31, 26, 21, 25, 20, 15, 10, 9, 4, 3, 10, 9, 4, 3 };
int z[36] = {36, 35, 34, 33, 32, 31, 26, 21, 16, 11, 6, 5, 4, 3, 2, 1, 36, 35, 34, 33, 32, 31, 26, 21, 16, 11, 6, 5, 4, 3, 2, 1, 4, 3, 2, 1};

char wor[20] = "NAZARBAEVUNIVERSITY";
int* ve;
int* we;
void setup() {
  for (int x = 6; x < 12; x++)
  {
    pinMode(x, OUTPUT);
  }

  for (int x = 0; x < 6; x++)
  {
    pinMode(x, OUTPUT);
  }

  for (int x = 0; x <6; x++){
    digitalWrite(supply[x], LOW);
    }
  for (int x = 0; x <6; x++){
    digitalWrite(ground[x], HIGH);
    }
}

void loop() {
  int p = 0;
  while (wor[p] != NULL) {   //here we are looping untill text is fully processed
    if (p == 0) {
      for (int j = -6; j < 6; j++) {   //loop that provides scrolling effect
        for (int x = 0 ; x < 250; x++) {
          for (int i = 0; i < 36; i++ ) {
            ve = setAlpha(wor[p]); //extracting one char from text and getting particular global array 
            we = setAlpha(wor[p+1]); // preparing to read the next char and getting particular global array
            turnOn(*(ve+i) + j * 6); // turning on the positions that related to particular char using written function called turnOn
            
            delay(0.5); 
            turnOff(*(ve+i) + j * 6); // after delay we turn it of and prepare to read the next char
            delay(0.5);
            turnOn(*(we+i) + (j - 7) * 6);
            delay(0.5);
            turnOff(*(we+i) + (j - 7) * 6);
          }
        
        }
        delay(1); 
       
      }
   }
    else if (p > 0 && p < (int((sizeof(wor))) - 1 )) {
      for (int j = -1; j < 6; j++) {
        for (int x = 0 ; x < 250; x++) {
          for (int i = 0; i < 36; i++ ) {
            ve = setAlpha(wor[p]);
            we = setAlpha(wor[p+1]);
            turnOn(*(ve+i) + j * 6);
            delay(0.5);
            turnOff(*(ve+i) + j * 6);
            delay(0.5);
            turnOn(*(we+i) + (j - 7) * 6);
            delay(0.5);
            turnOff(*(we+i) + (j - 7) * 6);
          }
        }
        delay(1);
      }
    }

    delay(1);
    p = p+1;;
  }
}

void turnOn(int pos) {
  if (pos == 1) {
    digitalWrite(supply[0], HIGH);
    digitalWrite(ground[0], LOW);
  } else if (pos == 2) {
    digitalWrite(supply[0], HIGH);
    digitalWrite(ground[1], LOW);
  } else if (pos == 3) {
    digitalWrite(supply[0], HIGH);
    digitalWrite(ground[2], LOW);
  } else if (pos == 4) {
    digitalWrite(supply[0], HIGH);
    digitalWrite(ground[3], LOW);
  } else if (pos == 5) {
    digitalWrite(supply[0], HIGH);
    digitalWrite(ground[4], LOW);
  } else if (pos == 6) {
    digitalWrite(supply[0], HIGH);
    digitalWrite(ground[5], LOW);
  } else if (pos == 7) {
    digitalWrite(supply[1], HIGH);
    digitalWrite(ground[0], LOW);
  } else if (pos == 8) {
    digitalWrite(supply[1], HIGH);
    digitalWrite(ground[1], LOW);
  } else if (pos == 9) {
    digitalWrite(supply[1], HIGH);
    digitalWrite(ground[2], LOW);
  } else if (pos == 10) {
    digitalWrite(supply[1], HIGH);
    digitalWrite(ground[3], LOW);
  } else if (pos == 11) {
    digitalWrite(supply[1], HIGH);
    digitalWrite(ground[4], LOW);
  } else if (pos == 12 ) {
    digitalWrite(supply[1], HIGH);
    digitalWrite(ground[5], LOW);
  } else if (pos == 13) {
    digitalWrite(supply[2], HIGH);
    digitalWrite(ground[0], LOW);
  } else if (pos == 14) {
    digitalWrite(supply[2], HIGH);
    digitalWrite(ground[1], LOW);
  } else if (pos == 15) {
    digitalWrite(supply[2], HIGH);
    digitalWrite(ground[2], LOW);
  } else if (pos == 16) {
    digitalWrite(supply[2], HIGH);
    digitalWrite(ground[3], LOW);
  } else if (pos == 17) {
    digitalWrite(supply[2], HIGH);
    digitalWrite(ground[4], LOW);
  } else if (pos == 18) {
    digitalWrite(supply[2], HIGH);
    digitalWrite(ground[5], LOW);
  } else if (pos == 19) {
    digitalWrite(supply[3], HIGH);
    digitalWrite(ground[0], LOW);
  } else if (pos == 20) {
    digitalWrite(supply[3], HIGH);
    digitalWrite(ground[1], LOW);
  } else if (pos == 21) {
    digitalWrite(supply[3], HIGH);
    digitalWrite(ground[2], LOW);
  } else if (pos == 22) {
    digitalWrite(supply[3], HIGH);
    digitalWrite(ground[3], LOW);
  } else if (pos == 23) {
    digitalWrite(supply[3], HIGH);
    digitalWrite(ground[4], LOW);
  } else if (pos == 24) {
    digitalWrite(supply[3], HIGH);
    digitalWrite(ground[5], LOW);
  } else if (pos == 25) {
    digitalWrite(supply[4], HIGH);
    digitalWrite(ground[0], LOW);
  } else if (pos == 26 ) {
    digitalWrite(supply[4], HIGH);
    digitalWrite(ground[1], LOW);
  } else if (pos == 27) {
    digitalWrite(supply[4], HIGH);
    digitalWrite(ground[2], LOW);
  } else if (pos == 28) {
    digitalWrite(supply[4], HIGH);
    digitalWrite(ground[3], LOW);
  } else if (pos == 29) {
    digitalWrite(supply[4], HIGH);
    digitalWrite(ground[4], LOW);
  } else if (pos == 30) {
    digitalWrite(supply[4], HIGH);
    digitalWrite(ground[5], LOW);
  } else if (pos == 31) {
    digitalWrite(supply[5], HIGH);
    digitalWrite(ground[0], LOW);
  } else if (pos == 32) {
    digitalWrite(supply[5], HIGH);
    digitalWrite(ground[1], LOW);
  } else if (pos == 33) {
    digitalWrite(supply[5], HIGH);
    digitalWrite(ground[2], LOW);
  } else if (pos == 34) {
    digitalWrite(supply[5], HIGH);
    digitalWrite(ground[3], LOW);
  } else if (pos == 35 ) {
    digitalWrite(supply[5], HIGH);
    digitalWrite(ground[4], LOW);
  } else if (pos == 36 ) {
    digitalWrite(supply[5], HIGH);
    digitalWrite(ground[5], LOW);
  }

}

void turnOff(int pos) {
  if (pos == 1) {
    digitalWrite(supply[0], LOW);
    digitalWrite(ground[0], HIGH);
  } else if (pos == 2) {
    digitalWrite(supply[0], LOW);
    digitalWrite(ground[1], HIGH);
  } else if (pos == 3) {
    digitalWrite(supply[0], LOW);
    digitalWrite(ground[2], HIGH);
  } else if (pos == 4) {
    digitalWrite(supply[0], LOW);
    digitalWrite(ground[3], HIGH);
  } else if (pos == 5) {
    digitalWrite(supply[0], LOW);
    digitalWrite(ground[4], HIGH);
  } else if (pos == 6) {
    digitalWrite(supply[0], LOW);
    digitalWrite(ground[5], HIGH);
  } else if (pos == 7) {
    digitalWrite(supply[1], LOW);
    digitalWrite(ground[0], HIGH);
  } else if (pos == 8) {
    digitalWrite(supply[1], LOW);
    digitalWrite(ground[1], HIGH);
  } else if (pos == 9) {
    digitalWrite(supply[1], LOW);
    digitalWrite(ground[2], HIGH);
  } else if (pos == 10) {
    digitalWrite(supply[1], LOW);
    digitalWrite(ground[3], HIGH);
  } else if (pos == 11) {
    digitalWrite(supply[1], LOW);
    digitalWrite(ground[4], HIGH);
  } else if (pos == 12 ) {
    digitalWrite(supply[1], LOW);
    digitalWrite(ground[5], HIGH);
  } else if (pos == 13) {
    digitalWrite(supply[2], LOW);
    digitalWrite(ground[0], HIGH);
  } else if (pos == 14) {
    digitalWrite(supply[2], LOW);
    digitalWrite(ground[1], HIGH);
  } else if (pos == 15) {
    digitalWrite(supply[2], LOW);
    digitalWrite(ground[2], HIGH);
  } else if (pos == 16) {
    digitalWrite(supply[2], LOW);
    digitalWrite(ground[3], HIGH);
  } else if (pos == 17) {
    digitalWrite(supply[2], LOW);
    digitalWrite(ground[4], HIGH);
  } else if (pos == 18) {
    digitalWrite(supply[2], LOW);
    digitalWrite(ground[5], HIGH);
  } else if (pos == 19) {
    digitalWrite(supply[3], LOW);
    digitalWrite(ground[0], HIGH);
  } else if (pos == 20) {
    digitalWrite(supply[3], LOW);
    digitalWrite(ground[1], HIGH);
  } else if (pos == 21) {
    digitalWrite(supply[3], LOW);
    digitalWrite(ground[2], HIGH);
  } else if (pos == 22) {
    digitalWrite(supply[3], LOW);
    digitalWrite(ground[3], HIGH);
  } else if (pos == 23) {
    digitalWrite(supply[3], LOW);
    digitalWrite(ground[4], HIGH);
  } else if (pos == 24) {
    digitalWrite(supply[3], LOW);
    digitalWrite(ground[5], HIGH);
  } else if (pos == 25) {
    digitalWrite(supply[4], LOW);
    digitalWrite(ground[0], HIGH);
  } else if (pos == 26 ) {
    digitalWrite(supply[4], LOW);
    digitalWrite(ground[1], HIGH);
  } else if (pos == 27) {
    digitalWrite(supply[4], LOW);
    digitalWrite(ground[2], HIGH);
  } else if (pos == 28) {
    digitalWrite(supply[4], LOW);
    digitalWrite(ground[3], HIGH);
  } else if (pos == 29) {
    digitalWrite(supply[4], LOW);
    digitalWrite(ground[4], HIGH);
  } else if (pos == 30) {
    digitalWrite(supply[4], LOW);
    digitalWrite(ground[5], HIGH);
  } else if (pos == 31) {
    digitalWrite(supply[5], LOW);
    digitalWrite(ground[0], HIGH);
  } else if (pos == 32) {
    digitalWrite(supply[5], LOW);
    digitalWrite(ground[1], HIGH);
  } else if (pos == 33) {
    digitalWrite(supply[5], LOW);
    digitalWrite(ground[2], HIGH);
  } else if (pos == 34) {
    digitalWrite(supply[5], LOW);
    digitalWrite(ground[3], HIGH);
  } else if (pos == 35 ) {
    digitalWrite(supply[5], LOW);
    digitalWrite(ground[4], HIGH);
  } else if (pos == 36 ) {
    digitalWrite(supply[5], LOW);
    digitalWrite(ground[5], HIGH);
  }
}

int* setAlpha( char ch) {
  if (ch == 'A') {
    return a;
  }
  else if (ch == 'B') {
    return b;
  }
 else if( ch == '_'){
   return space;
 }
  else if( ch == 'C'){
    return c;
  }
  else if( ch == 'D'){
    return d;
  }
  else if( ch == 'E'){
    return e;
  }
  else if( ch == 'F'){
    return f;
  }
  else if( ch == 'G'){
    return g;
  }
  else if( ch == 'H'){
    return h;
  }
  else if( ch == 'I'){
    return i;
  }
 else if( ch == 'J'){
   return j;
 }
 else if( ch == 'K'){
   return k;
 }
  else if( ch == 'L'){
    return l;
  }
else if( ch == 'M'){
   return m;
 }
  else if( ch == 'N'){
    return n;
  }
 else if( ch == 'O'){
   return o;
 }
 else if( ch == 'P'){
   return p;
 }
 else if( ch == 'Q'){
   return q;
 }
  else if( ch == 'R'){
    return r;
  }
  else if( ch == 'S'){
    return s;
  }
  else if( ch == 'T'){
    return t;
  }
  else if( ch == 'U'){
    return u;
  }
  else if( ch == 'V'){
    return v;
  }
 else if( ch == 'W'){
   return w;
 }
 else if( ch == 'X'){
   return x;
 }
  else if( ch == 'Y'){
    return y;
  }
  else if( ch == 'Z'){
    return z;
  }
}





