// A number system whose numbers have units digit as 2.

// -> 2 12 22 32 42 52 62 72 82 92 102 112 122
// So the number at any index i = (i-1)*10+2;
// -> Staight forward observation.
// -> Did this with BFS algo with 10 possibilities for every number. But it gave wrong answer for n>10.

int main() {
    int n;
    cin >> n;
    cout << (n - 1) * 10 + 2;

    return 0;
}
