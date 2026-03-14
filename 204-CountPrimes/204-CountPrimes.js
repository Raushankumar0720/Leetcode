// Last updated: 3/14/2026, 9:43:10 PM
/**
 * @param {number} n
 * @return {number}
 */
var countPrimes = function(n) {
    if (n <= 2) return 0;

    // Only odd numbers stored
    let size = Math.floor(n / 2);
    let isPrime = [];
    for (let i = 0; i < size; i++) {
        isPrime[i] = true;
    }

    // 1 is not prime
    isPrime[0] = false;

    for (let i = 3; i * i < n; i += 2) {
        if (isPrime[Math.floor(i / 2)]) {
            for (let j = i * i; j < n; j += 2 * i) {
                isPrime[Math.floor(j / 2)] = false;
            }
        }
    }

    let count = 1; // prime number 2
    for (let i = 1; i < size; i++) {
        if (isPrime[i]) count++;
    }

    return count;
};

console.log(countPrimes(10)); // 4
