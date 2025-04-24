const { createSlice, nanoid, current } = require("@reduxjs/toolkit");

const initialState = {
    employees: JSON.parse(localStorage.getItem("emp")) || []
}

const Slice = createSlice({
    name:'addEmployeeSlice',
    initialState,
    reducers: {
        addEmployee:(state, action) => {
            const data = {
                id:nanoid(),
                name:action.payload
            }
            state.employees.push(data)
            let empData = JSON.stringify(current(state.employees))
            localStorage.setItem("emp", empData)
        },
        removeEmployee: (state, action) => {
            const data = state.employees.filter((item) => {
                return item.id !== action.payload
            })

            state.employees = data
            localStorage.setItem("emp", JSON.stringify(state.employees))
        }
    }
})

export const {addEmployee, removeEmployee} = Slice.actions
export default Slice.reducer