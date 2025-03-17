import express from "express"
import dotenv from "dotenv"
import { connectDB } from "./db/connectDB.js";

import authRoutes from "./routes/auth.route.js"

dotenv.config(); // for solving crashed

const PORT = process.env.PORT || 5001

const app = express();

// app.get("/", (req, res) => {
//     res.send("Hello World 123");
// }) for testing

app.use("/api/auth", authRoutes);

app.listen(PORT, () => {
    connectDB();
    console.log("Server is running on port:" + PORT)
})

