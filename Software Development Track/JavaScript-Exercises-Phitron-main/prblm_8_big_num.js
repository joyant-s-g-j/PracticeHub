const chk_num = (array) =>
{
    let big_num = array[0];

    for(let i=0; i<array.length; i++)
    {
        const element = array[i];
        
        if (element>big_num)
        {
            big_num = element
        }
    }
    return big_num
}

var numbers = [1, 2, 3, 3, 4, 4, 5, 6, 7, 8, 9, 10];
const big_num = chk_num(numbers);
console.log(big_num);