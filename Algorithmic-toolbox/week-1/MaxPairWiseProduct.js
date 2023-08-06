// JavaScript code
function MaxPairWiseProduct(numbers) {
    let results = 0;
    const n = numbers.length;
    for (let i = 0; i < n; i++) {
        for (let j = i+1; j < n; j++) {
            if (numbers[i] * numbers[j] > results) {
                results = numbers[i] * numbers[j];
            }
        }
    }
    return results;
}

const numList = [];
const num = parseInt(prompt("Enter length of list: "));
for (let i = 0; i < num; i++) {
    numList.push(parseInt(prompt()));
}

console.log(MaxPairWiseProduct(numList));
