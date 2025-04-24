import reducer from "./slice";
const { configureStore } = require("@reduxjs/toolkit");

export const store = configureStore({
    reducer
})