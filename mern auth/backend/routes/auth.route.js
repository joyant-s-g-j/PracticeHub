import express from "express";
import { login, logout, signup, verifyEmail, forgotPassword, resetPassword, checkAuth } from "../controllers/auth.controller.js"; // must added the extension
import { verifyToken } from "../middleware/verifyToken.js";


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
router.get("/check-auth", verifyToken, checkAuth)
router.post("/signup", signup);
router.post("/login", login);
router.post("/logout", logout);

router.post("/verify-email", verifyEmail);
router.post("/forgot-password", forgotPassword);
router.post("/reset-password/:token", resetPassword);

export default router;