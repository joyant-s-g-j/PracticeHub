import express from "express";
import { login, logout, signup } from "../controllers/auth.controller.js"; // must added the extension


const router = express.Router()

// router.get("/signup", (req, res) => {
//     res.send("Signup route");
// });
// router.get("/login", (req, res) => {
//     res.send("Login route");
// });
// router.get("/logout", (req, res) => {
//     res.send("logout route");
// });
router.get("/signup", signup);
router.get("/login", login);
router.get("/logout", logout);

export default router;