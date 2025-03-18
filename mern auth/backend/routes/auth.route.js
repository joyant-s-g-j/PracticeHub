import express from "express";
import { login, logout, signup, verifyEmail } from "../controllers/auth.controller.js"; // must added the extension


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
router.post("/signup", signup);
router.post("/login", login);
router.post("/logout", logout);

router.post("/verify-email", verifyEmail);

export default router;