
const chk_name = (array) =>
{
    let big_name = array[0];

    for (let i=0; i < array.length; i++)
    {
        const element = array[i];

        if (element.length>big_name.length)
        {
            big_name = element;
        }
    }
    return big_name;
}

var friends = ["rahim", "karim", "abdul", "sadsd", "heroAlom"];
const big_name = chk_name(friends);
console.log(big_name);