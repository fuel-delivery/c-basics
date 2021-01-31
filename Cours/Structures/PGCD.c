
int pgcd(int f, int e) {
int div = 1;
int inf,i;
if (e > f) {
inf = f;
}else {
inf = e;
}

for (i = inf; i > 0; i--) {

if ((e % i==0) && (f % i==0)) {
div = i;
break;

}

}
return div;
}
