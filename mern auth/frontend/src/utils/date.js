export const formatDate = (dateString) => {
    const date = new Date(dateString)
    if(isNaN(date.getTime())) {
        return "Invalid Date"
    }

    return date.toLocaleString("en-US", {
        year: "numeric",
        month: "short",
        date: "numeric",
        hour: "2-digit",
        minute: "2-digit",
        hour12: true,
    })
}