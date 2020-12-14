/*
______________________________________________________________________________________________
Question From : Binary Search Platform {Array | DS }

You are given a string animals and another string dinosaurs. Every letter in animals represents a different type of animal and every unique character in dinosaurs represents a different dinosaur.

Return the total number of dinosaurs in animals.
______________________________________________________________________________________________

*/
int solve(string animals, string dino) {
    int count = 0;
    int* h = new int[256];
    for (int i = 0; i < 256; i++) {
        h[i] = 0;
    }
    for (int i = 0; i < animals.size(); i++) {
        h[int(animals[i])]++;
    }
    for (int i = 0; i < dino.size(); i++) {
        count += h[int(dino[i])];
        h[int(dino[i])] = 0;
    }
    return count;
}
