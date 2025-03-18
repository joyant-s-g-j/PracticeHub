import User from "../models/user.model.js";
import bcrypt from "bcryptjs";
import { generateTokenAndSetCookie } from "../utils/generateTokenAndSetCookie.js";

export const signup = async (req, res) => {
    const {email, password, name} = req.body
    try {
        if(!email || !password || !name) {
            throw new Error("All fields are required");
        }

        const userAlreadyExists = await User.findOne({email});
        if(userAlreadyExists) {
            return res.status(400).json({success:false, message: "User Already Exists"})
        }

        const hashedPassword = await bcrypt.hash(password, 10)
        const verificationToken = Math.floor(100000 + Math.random() * 900000).toString();

        const user = new User({
            email,
            password: hashedPassword,
            name,
            verificationToken,
            verificationTokenExpiresAt: Date.now() + 24 * 60 * 60 * 1000 // 24 hours
        })
        await user.save();

        //jwt
        generateTokenAndSetCookie(res,user._id)

        sendVerificationEmail(user.email.replace, verificationToken);

        res.status(201).json({
            success: true,
            message: "User Created Successfully",
            user: {
                ...user._doc,
                password: undefined
            }
        })
        
    } catch (error) {
        res.status(400).json({success:false, message: error.message})
    }
}
export const login = async (req, res) => {
    res.send("login route");
}
export const logout = async (req, res) => {
    res.send("logout route");
}