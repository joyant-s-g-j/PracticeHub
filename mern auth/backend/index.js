import express from "express"
import dotenv from "dotenv"
import { connectDB } from "./db/connectDB.js";
import cookieParser from "cookie-parser";
import authRoutes from "./routes/auth.route.js"

dotenv.config(); // for solving crashed


const app = express();
const PORT = process.env.PORT || 5001

app.use(express.json()); //allows us to parse incoming requests:req.body
app.use(cookieParser()); // allows us to parse incoming cookies
// app.get("/", (req, res) => {
//     res.send("Hello World 123");
// }) for testing

app.use("/api/auth", authRoutes);

app.listen(PORT, () => {
    connectDB();
    console.log("Server is running on port:" + PORT)
})

