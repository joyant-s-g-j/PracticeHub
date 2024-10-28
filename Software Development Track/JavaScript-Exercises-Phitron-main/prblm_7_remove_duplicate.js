const chk_num = (array) =>
{
    return array.filter((a, b) => array.indexOf(a) == b);
}

var numbers = [1, 2, 3, 3, 4, 4, 5, 6, 7, 8, 9, 10];
const unique_num = chk_num(numbers);
console.log(unique_num);

